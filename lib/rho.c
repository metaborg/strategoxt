/* $Id: rho.c,v 1.22 2001/07/05 09:37:25 eelco Exp $ */

#include "rho.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <unistd.h>
#include <fcntl.h>

#include <aterm2.h>


MKCLOSURECODE(intdone) { DPRINTF("int already done\n"); }
MKCLOSURECODE(strdone) { DPRINTF("string already done\n"); }
MKCLOSURECODE(funcdone) { DPRINTF("function already done\n"); }
MKCLOSURECODE(constrdone) { DPRINTF("constructor already done\n"); }
MKCLOSURECODE(appdone) { DPRINTF("app already done\n"); }


#define primBinOp(name, op)                     \
  MKCLOSURECODE(name)                           \
  {                                             \
      ENTERED(name);                            \
      ENTER(followEnv(env, 2, 0));              \
      ENTER(followEnv(env, 1, 0));              \
      MKINT(thk, op);                           \
  }

#define primIntIntInt(name, op)                 \
  primBinOp(name, intAt(env, 2, 0) op intAt(env, 1, 0))

primIntIntInt(p_add, +);
primIntIntInt(p_sub, -);
primIntIntInt(p_mul, *);
primIntIntInt(p_div, /);

extern Constr _Tup;
extern Constr _Void;
extern Constr _World;
extern Constr _True;
extern Constr _False;

MKCLOSURECODE(p_gt)
{
    ENTERED(p_gt);
    ENTER(followEnv(env, 2, 0));
    ENTER(followEnv(env, 1, 0));
    MKCONSTR(thk,
        intAt(env, 2, 0) > intAt(env, 1, 0)
        ? &_True
        : &_False);
}

MKCLOSURECODE(p_primeq)
{
    Closure * t1, * t2;
    ENTERED(p_gt);
    ENTER(followEnv(env, 2, 0));
    ENTER(followEnv(env, 1, 0));
    t1 = followEnv(env, 2, 0);
    t2 = followEnv(env, 1, 0);
    MKCONSTR(thk,
        (t1->code == intdone && t2->code == intdone &&
            t1->u.integer == t2->u.integer) ||
        (t1->code == strdone && t2->code == strdone &&
            strcmp(t1->u.string, t2->u.string) == 0) ||
        (t1->code == constrdone && t2->code == constrdone &&
            t1->u.constr == t2->u.constr)
        ? &_True
        : &_False);
}


void mkIOResult(Closure * thk, Closure * r3)
{
    /* Make <World, a> = Tup World (Tup a Void). */
    Closure * r1 = ALLOCCLOSURE();
    Closure * r2 = ALLOCCLOSURE();
    Closure * r4 = ALLOCCLOSURE();
    MKCONSTR(thk, &_Tup);
    MKCONSTR(r1, &_World);
    CALL(thk, r1);
    MKCONSTR(r2, &_Tup);
    CALL(r2, r3);
    MKCONSTR(r4, &_Void);
    CALL(r2, r4);
    CALL(thk, r2);
}


Closure * nulltuple()
{
    Closure * res;
    res = ALLOCCLOSURE();
    MKCONSTR(res, &_Void);
    return res;
}


MKCLOSURECODE(p_putstr)
{
    int handle;
    const char * str;
    ENTERED(p_putstr);
    ENTER(followEnv(env, 3, 0)); /* handle */
    ENTER(followEnv(env, 2, 0)); /* string */
    ENTER(followEnv(env, 1, 0)); /* world */
    handle = intAt(env, 3, 0);
    str = strAt(env, 2, 0);
    write(handle, str, strlen(str));
    mkIOResult(thk, nulltuple()); /* return <> */
}


MKCLOSURECODE(p_readfile)
{
    const char * filename;
    int fd;
    struct stat st;
    char * text;
    Closure * res;

    ENTERED(p_readfile);
    ENTER(followEnv(env, 2, 0)); /* filename */
    ENTER(followEnv(env, 1, 0)); /* world */
    filename = strAt(env, 2, 0);

    fd = open(filename, O_RDONLY);
    if (fd == -1) fail(); /* !!! */

    if (fstat(fd, &st) == -1) {
        close(fd);
        fail(); /* !!! */
    }

    text = malloc(st.st_size + 1);
    
    if (read(fd, text, st.st_size) != st.st_size) {
        close(fd);
        fail(); /* !!! */
    }
    text[st.st_size] = 0;

    close(fd);

    res = ALLOCCLOSURE();
    MKSTR(res, text);

    mkIOResult(thk, res); /* return "contents..." */
}


MKCLOSURECODE(p_writefile)
{
    abort();
}


static Constr * constrList = 0;


void registerConstr(Constr * c)
{
    DPRINTF("registering constructor %s\n", c->name);
    if (c->registered) {
        DPRINTF("bah... already done!\n");
        return;
    }
    c->registered = 1;
    c->next = constrList;
    constrList = c;
}


Constr * findConstr(const char * name)
{
    Constr * cur;
    DPRINTF("finding constructor %s\n", name);
    for (cur = constrList; cur; cur = cur->next) 
        if (strcmp(cur->name, name) == 0) return cur;
    DPRINTF("not found!\n");
    return 0;
}


#define JMPBUFS 16384
jmp_buf jmpbufs[JMPBUFS];
unsigned int nr_jmpbuf = 0;


static inline unsigned int allocJmpBuf()
{
    assert(nr_jmpbuf < JMPBUFS);
    return nr_jmpbuf++;
}


static void failWith(unsigned int res)
{
    DPRINTF("fail with %d\n", res);
    assert(nr_jmpbuf > 0);
    longjmp(jmpbufs[--nr_jmpbuf], res);
}


void fail()
{
    failWith(1); /* 1 == failure with no cuts */
}


void failTest(Closure * arg)
{
    if (!setjmp(jmpbufs[allocJmpBuf()])) {
        ENTER(arg);
        DPRINTF("failed fail match\n");
        nr_jmpbuf--;
        fail();
    } /* else failure, so continue */
}


void cut(Closure * thk, Closure * arg)
{
    unsigned int cuts;
    DPRINTF("cut\n");
    if (cuts = setjmp(jmpbufs[allocJmpBuf()])) {
        DPRINTF("making failure with %d cuts\n", cuts);
        failWith(cuts + 1); /* 1 extra cut */
    } else {
        ENTER(arg);
        nr_jmpbuf--;
        COPY(thk, arg);
        if (thk->code == funcdone) {
            thk->u.func.cuts++;
            DPRINTF("making function with %d cuts\n", thk->u.func.cuts);
        } else 
            DPRINTF("doing nothing\n");
    }
}


MKFUNCCODE(proplchoice)
{
    Prop * p = (Prop *) env;
    unsigned int cuts, i;
    DPRINTF("proplchoice\n");
    if (cuts = setjmp(jmpbufs[allocJmpBuf()])) {
        if (--cuts) {
            DPRINTF("propagating failure with %d cuts\n", cuts);
            failWith(cuts); /* 1 cut less */
        }
        DPRINTF("trying rhs with %d saved args\n", p->n_parms);
        ENTER(p->e2);
        COPY(thk, p->e2);
        for (i = 0; i < p->n_parms; i++)
            CALL(thk, p->parms[i]);
        CALL(thk, arg);
    } else {
        DPRINTF("trying lhs\n");
        p->e1->u.func.code(thk, p->e1->u.func.env, arg);
        nr_jmpbuf--;
        if (thk->code == funcdone) {
            if (thk->u.func.cuts) {
                DPRINTF("cut encountered\n");
                thk->u.func.cuts--;
            } else {
                Prop * p2 = ALLOC(sizeof(Prop) + 
                    (p->n_parms + 1) * sizeof(Closure *));
                DPRINTF("lhs returned function, propagating lchoice...\n");
                p2->e1 = ALLOCCLOSURE();
                *p2->e1 = *thk;
                p2->e2 = p->e2;
                p2->n_parms = p->n_parms + 1;
                memcpy(p2->parms, p->parms, p->n_parms * sizeof(Closure *));
                p2->parms[p->n_parms] = arg;
                MKFUNC(thk, (Env *) p2, proplchoice);
            }
        }
    }
}


void lchoice(Closure * thk, Closure * e1, Closure * e2)
{
    unsigned int cuts;
    DPRINTF("lchoice\n");
    if (cuts = setjmp(jmpbufs[allocJmpBuf()])) {
        if (--cuts) {
            DPRINTF("propagating failure with %d cuts\n", cuts);
            failWith(cuts); /* 1 cut less */
        }
        DPRINTF("trying rhs\n");
        ENTER(e2);
        COPY(thk, e2);
    } else {
        DPRINTF("trying lhs\n");
        ENTER(e1);
        nr_jmpbuf--;
        if (e1->code == funcdone) {
            if (e1->u.func.cuts) {
                DPRINTF("cut encountered\n");
                COPY(thk, e1);
                thk->u.func.cuts--;
            } else {
                Prop * p = ALLOC(sizeof(Prop));
                DPRINTF("lhs returned function, propagating lchoice...\n");
                p->e1 = e1;
                p->e2 = e2;
                p->n_parms = 0;
                MKFUNC(thk, (Env *) p, proplchoice);
            }
        } else COPY(thk, e1);
    }
}


static void printClosure(FILE * f, Closure * thk)
{
retry:
    if (thk->code == funcdone)
        fprintf(f, "CLOSURECODE %8p", thk->u.func.code);
    else if (thk->code == intdone)
        fprintf(f, "%d", thk->u.integer);
    else if (thk->code == strdone)
        fprintf(f, "\"%s\"", thk->u.string); /* !!! quote */
    else if (thk->code == constrdone)
        fprintf(f, "%s", thk->u.constr->name);
    else if (thk->code == appdone) {
        fprintf(f, "(");
        printClosure(f, thk->u.app.lhs);
        fprintf(f, " ");
        printClosure(f, thk->u.app.rhs);
        fprintf(f, ")");
    } else {
        /* It's a suspension.  Evaluate it. */
        ENTER(thk);
        goto retry;
    }
}


MKCLOSURECODE(p_print)
{
    int handle;
    FILE * f;
    ENTERED(p_print);
    ENTER(followEnv(env, 3, 0)); /* handle */
    ENTER(followEnv(env, 2, 0)); /* term */
    ENTER(followEnv(env, 1, 0)); /* world */
    handle = dup(intAt(env, 3, 0));
    if (handle == -1) fail();
    f = fdopen(handle, "w");
    if (!f) fail();
    printClosure(f, followEnv(env, 2, 0));
    fclose(f);
    mkIOResult(thk, nulltuple()); /* return <> */
}


EXTERNSTATIC(_main);


extern unsigned int cAllocs, cbAllocs;


int main(int argc, char * * argv)
{
    int res;
    struct tms tms;
    long clktck;
    Closure * arg;
    unsigned int cuts;

    initMemory();

    ATinitialize(argc, argv);

    DPRINTF("running\n");
    if (cuts = setjmp(jmpbufs[allocJmpBuf()])) {
        fprintf(stderr, "uncaught failure at top-level with %d cuts\n", 
            cuts - 1);
        assert(nr_jmpbuf == 0);
        res = 1;
    } else {
        /* Enter the main closure.  This gives us an IO action. */
        ENTER(&_main_thk);
        /* Execute the IO action by giving it a World. */
        arg = ALLOCCLOSURE();
        MKCONSTR(arg, &_World);
        CALL(&_main_thk, arg);
        nr_jmpbuf--;
        assert(nr_jmpbuf == 0);
        res = 0;
    }

    times(&tms);
    clktck = sysconf(_SC_CLK_TCK);
    fprintf(stderr, "Time usage: %.2f user, %.2f system\n",
        tms.tms_utime / (double) clktck,
        tms.tms_stime / (double) clktck);

    fprintf(stderr, "Memory usage: %d allocations, %d bytes\n", 
        cAllocs, cbAllocs);

    return res;
}
