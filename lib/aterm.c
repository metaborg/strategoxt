#include "rho.h"

#include <aterm2.h>


static void printATerm(ATerm term)
{
    Symbol sym = ATgetSymbol(term);
    unsigned int arity = ATgetArity(sym), i;
    
    printf("%s(%d: ", ATgetName(sym), arity);

    for (i = 0; i < arity; i++) {
        printATerm(ATgetArgument(term, i));
    }
    
    printf(")");
}


extern Constr __bo_bc; /* [] */
extern Constr __con;   /* : */


static Closure * aterm2term(ATerm term)
{
    Symbol sym;
    unsigned int arity, i;
    Closure * res, * res2;
    char * str;
    ATermList list;

    res = ALLOCCLOSURE();

    switch (ATgetType(term)) {
    
        case AT_APPL:

            sym = ATgetSymbol(term);
            arity = ATgetArity(sym);

            if (arity == 0 && (ATisQuoted(sym) == ATtrue)) {
                str = ALLOC((strlen(ATgetName(sym)) + 4) & ~3);
                strcpy(str, ATgetName(sym));
                MKSTR(res, str);
                break;
            }

            MKCONSTR(res, findConstr(ATgetName(sym)));
            if (!res->u.constr) {
                fprintf(stderr, "read unknown constructor %s\n", 
                    ATgetName(sym));
                fail();
            }

            for (i = 0; i < arity; i++) {
                res2 = ALLOCCLOSURE();
                res2->code = appdone;
                res2->u.app.lhs = res;
                res2->u.app.rhs = aterm2term(ATgetArgument(term, i));
                res = res2;
            }

            break;
        
        case AT_INT:
            MKINT(res, ATgetInt((ATermInt) term));
            break;

        case AT_LIST:

            list = ATreverse((ATermList) term);

            MKCONSTR(res, &__bo_bc);

            while (ATisEmpty(list) == ATfalse) {
                res2 = ALLOCCLOSURE();
                MKCONSTR(res2, &__con);
                CALL(res2, aterm2term(ATgetFirst(list)));
                CALL(res2, res);
                res = res2;
                list = ATgetNext(list);
            }

            break;
        
        default:
            fprintf(stderr, "unknown aterm type %d\n", 
                ATgetType(term));
            fail();
    }
    
    return res;
}


MKCLOSURECODE(p_readterm)
{
    const char * filename;
    FILE * file;
    Closure * res;
    ATerm term;
    int useStdin;

    ENTERED(p_readterm);
    ENTER(followEnv(env, 2, 0)); /* filename */
    ENTER(followEnv(env, 1, 0)); /* world */
    filename = strAt(env, 2, 0);
    useStdin = strcmp(filename, "") == 0;

    file = useStdin ? stdin : fopen(filename, "rb");
    if (!file) fail(); /* !!! */

    term = ATreadFromFile(file);
    if (!useStdin) fclose(file);
    if (!term) fail(); /* !!! */

    res = aterm2term(term);

    mkIOResult(thk, res); /* return "contents..." */
}


static int isCons(Closure * thk)
{
    return
        thk->code == appdone && thk->u.app.lhs->code == appdone &&
        thk->u.app.lhs->u.app.lhs->code == constrdone && 
        thk->u.app.lhs->u.app.lhs->u.constr == &__con;
}


static ATerm term2aterm(Closure * thk)
{
    ATermList list;
    ATerm rhs, head;
    ENTER(thk);
    if (thk->code == intdone) {
        return (ATerm) ATmakeInt(thk->u.integer);
    } else if (thk->code == strdone) {
        return (ATerm) ATmakeAppl0(ATmakeAFun(thk->u.string, 0, ATtrue));
    } else if (thk->code == constrdone && thk->u.constr == &__bo_bc) {
        return (ATerm) ATmakeList0();
    } else if (isCons(thk)) {
        list = (ATermList) term2aterm(thk->u.app.rhs);
        if (ATgetType(list) != AT_LIST) {
            fprintf(stderr, "term2aterm: malformed list\n");
            fail();
        }
        head = term2aterm(thk->u.app.lhs->u.app.rhs);
        list = ATinsert(list, head);
        return (ATerm) list;
    } else {
        list = ATmakeList0();
        
        while (thk->code == appdone) {
            rhs = term2aterm(thk->u.app.rhs);
            list = ATinsert(list, rhs);
            thk = thk->u.app.lhs;
            ENTER(thk);
        }

        assert(thk->code == constrdone);

        return (ATerm) ATmakeApplList(
            ATmakeAFun(thk->u.constr->name, ATgetLength(list), ATfalse), 
            list);
    }
}


extern Constr _ATFmtText;
extern Constr _ATFmtBinary;
extern Constr _ATFmtShared;


MKCLOSURECODE(p_writeterm)
{
    const char * filename;
    FILE * file;
    Constr * fmt;
    ATerm term;
    ATbool res = ATfalse;
    int useStdout;

    ENTERED(p_writeterm);
    ENTER(followEnv(env, 4, 0)); /* filename */
    ENTER(followEnv(env, 3, 0)); /* format */
    ENTER(followEnv(env, 1, 0)); /* world */
    filename = strAt(env, 4, 0);
    useStdout = strcmp(filename, "") == 0;
    fmt = conAt(env, 3, 0);

    file = useStdout ? stdout : 
        fopen(filename, fmt == &_ATFmtBinary ? "wb" : "w");
    if (!file) fail(); /* !!! */

    term = term2aterm(followEnv(env, 2, 0));

    if (fmt == &_ATFmtText) res = ATwriteToTextFile(term, file);
    else if (fmt == &_ATFmtBinary) res = ATwriteToBinaryFile(term, file);
    else if (fmt == &_ATFmtShared) res = ATwriteToSharedTextFile(term, file);
    else fail();
    if (!useStdout) fclose(file);
    if (!res) fail(); /* !!! */

    mkIOResult(thk, nulltuple()); /* return <> */
}
