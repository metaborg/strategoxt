/*  $Id: parse-table.c 16976 2005-11-10 13:40:12Z jurgenv $  */

/*{{{  includes */

/*
 The implementation of parse tables: creation, lookup, maintenance.
 */

#include <stdio.h>
#include <string.h>

#include  "mem-alloc.h"
#include  "parse-table.h"
#include  "sglr.h"
#include  "sglr-strings.h"
#include  "rsrc-usage.h"
#include  <MEPT-utils.h>

/*}}}  */
/*{{{  defines */


#define SG_AFUN_INIT(fun,val)  fun = val; ATprotectAFun(fun)
#define SG_ATRM_INIT(trm,val)  trm = val; ATprotect((ATerm *) &trm)
#define SG_TOKEN_INIT(tok,val) tok = val

/*}}}  */
/*{{{  variables */


token SG_EOF_Token;
token SG_Zero_Token;
AFun  SG_ArgGtrPrio_AFun, 
      SG_GtrPrio_AFun, 
      SG_Shift_AFun, SG_Reduce_AFun, 
      SG_ReduceLA_AFun, SG_Accept_AFun,
      SG_Appl_AFun, SG_Regular_AFun, SG_Reject_AFun,
      SG_Eager_AFun, SG_Uneager_AFun,
      SG_Aprod_AFun, SG_Amb_AFun, SG_Cycle_AFun, SG_Range_AFun, SG_CharClass_AFun,
      SG_Action_AFun, SG_Goto_AFun, SG_PT5_AFun,
      SG_StateRec_AFun, SG_Label_AFun, SG_ParseTree_AFun, SG_Term_AFun,
      SG_ParseError_AFun, SG_EOF_Error_AFun,
      SG_Amb_Node_AFun,
      SG_Too_Many_Ambiguities_Error_AFun, SG_AmbiguousTree_AFun,
      SG_Position_AFun, SG_Productions_AFun, SG_Amb_Error_AFun,
      SG_SndValue_AFun, SG_Character_AFun, SG_Line_AFun, SG_Col_AFun,
      SG_Offset_AFun;


/*}}}  */


/*{{{  void SG_InitPTGlobals(void) */

void SG_InitPTGlobals(void)
{
  static ATbool inited = ATfalse;

  if(inited)
    return;

  SG_TOKEN_INIT(SG_EOF_Token,       SG_MAKETOKEN(SG_EOF));
  SG_TOKEN_INIT(SG_Zero_Token,      SG_MAKETOKEN('\0'));

  SG_AFUN_INIT(SG_Regular_AFun,     ATmakeAFun(SG_REGULAR_AFUN,     2, ATfalse));
  SG_AFUN_INIT(SG_Reject_AFun,      ATmakeAFun(SG_REJECT_AFUN,      2, ATfalse));
  SG_AFUN_INIT(SG_Eager_AFun,       ATmakeAFun(SG_PREFER_AFUN,      2, ATfalse));
  SG_AFUN_INIT(SG_Uneager_AFun,     ATmakeAFun(SG_AVOID_AFUN,       2, ATfalse));
  SG_AFUN_INIT(SG_Aprod_AFun,       ATmakeAFun(SG_APROD_AFUN,       1, ATfalse));
  SG_AFUN_INIT(SG_Amb_AFun,         ATmakeAFun(SG_AMB_AFUN,         1, ATfalse));
  SG_AFUN_INIT(SG_Cycle_AFun,         ATmakeAFun(SG_CYCLE_AFUN,         2, ATfalse));

  SG_AFUN_INIT(SG_GtrPrio_AFun,      ATmakeAFun(SG_GTRPRIO_AFUN,     2, ATfalse));
  SG_AFUN_INIT(SG_ArgGtrPrio_AFun,   ATmakeAFun(SG_ARG_GTRPRIO_AFUN, 3, ATfalse));
	
  SG_AFUN_INIT(SG_Shift_AFun,       ATmakeAFun(SG_SHIFT_AFUN,       1, ATfalse));
  SG_AFUN_INIT(SG_Reduce_AFun,      ATmakeAFun(SG_REDUCE_AFUN,      3, ATfalse));
  SG_AFUN_INIT(SG_ReduceLA_AFun,    ATmakeAFun(SG_REDUCE_AFUN,      4, ATfalse));
  SG_AFUN_INIT(SG_Accept_AFun,      ATmakeAFun(SG_ACCEPT_AFUN,      0, ATfalse));

  SG_AFUN_INIT(SG_Range_AFun,       ATmakeAFun(SG_RANGE_AFUN,       2, ATfalse));
  SG_AFUN_INIT(SG_CharClass_AFun,   ATmakeAFun(SG_CHARCLASS_AFUN,   1, ATfalse));
  SG_AFUN_INIT(SG_Action_AFun,      ATmakeAFun(SG_ACTION_AFUN,      2, ATfalse));
  SG_AFUN_INIT(SG_Goto_AFun,        ATmakeAFun(SG_GOTO_AFUN,        2, ATfalse));
  SG_AFUN_INIT(SG_PT5_AFun,         ATmakeAFun(SG_PARSETABLE_AFUN,  5, ATfalse));
  SG_AFUN_INIT(SG_StateRec_AFun,    ATmakeAFun(SG_STATEREC_AFUN,    3, ATfalse));
  SG_AFUN_INIT(SG_Label_AFun,       ATmakeAFun(SG_LABEL_AFUN,       2, ATfalse));

  SG_AFUN_INIT(SG_Appl_AFun,        ATmakeAFun(SG_APPL_AFUN,        2, ATfalse));
  SG_AFUN_INIT(SG_ParseTree_AFun,   ATmakeAFun(SG_PARSETREE_AFUN,   2, ATfalse));
  SG_AFUN_INIT(SG_Term_AFun,        ATmakeAFun(SG_TERM_AFUN,        9, ATfalse));
  SG_AFUN_INIT(SG_ParseError_AFun,  ATmakeAFun(SG_PARSEERROR_AFUN,  2, ATfalse));

  SG_AFUN_INIT(SG_EOF_Error_AFun,   ATmakeAFun(SG_EOF_AFUN,         0, ATfalse));
  SG_AFUN_INIT(SG_Too_Many_Ambiguities_Error_AFun, ATmakeAFun(SG_TOO_MANY_AMBS_AFUN,       0, ATfalse));
  SG_AFUN_INIT(SG_AmbiguousTree_AFun, ATmakeAFun(SG_AMBIGUOUS_TREE_AFUN, 2, ATfalse));
  SG_AFUN_INIT(SG_Amb_Node_AFun,    ATmakeAFun(SG_AMBIGUITY_AFUN,   2, ATfalse));
  SG_AFUN_INIT(SG_Position_AFun,    ATmakeAFun(SG_POSITION_AFUN,    4, ATfalse));
  SG_AFUN_INIT(SG_Productions_AFun, ATmakeAFun(SG_PRODUCTIONS_AFUN, 1, ATfalse));

  SG_AFUN_INIT(SG_Amb_Error_AFun,   ATmakeAFun(SG_AMBIGUITIES_AFUN, 2, ATfalse));
  SG_AFUN_INIT(SG_SndValue_AFun,    ATmakeAFun(SG_SNDVALUE_AFUN,    1, ATfalse));

  SG_AFUN_INIT(SG_Character_AFun,   ATmakeAFun(SG_CHARACTER_AFUN,   1, ATfalse));
  SG_AFUN_INIT(SG_Line_AFun,        ATmakeAFun(SG_LINE_AFUN,        1, ATfalse));
  SG_AFUN_INIT(SG_Col_AFun,         ATmakeAFun(SG_COL_AFUN,         1, ATfalse));
  SG_AFUN_INIT(SG_Offset_AFun,      ATmakeAFun(SG_OFFSET_AFUN,      1, ATfalse));



  inited = ATtrue;
}

/*}}}  */
/*{{{  actionkind SG_ActionKind(action a) */

/*  The function |SG_ActionKind| analyses an action and returns its kind.  */

actionkind SG_ActionKind(action a)
{
  AFun fun = ATgetAFun(a);

  if(ATisEqualAFun(fun, SG_Reduce_AFun)) {
    return REDUCE;
  } else if(ATisEqualAFun(fun, SG_ReduceLA_AFun)) {
    return REDUCE_LA;
  } else if(ATisEqualAFun(fun, SG_Shift_AFun)) {
    return SHIFT;
  } else if(ATisEqualAFun(fun, SG_Accept_AFun)) {
    return ACCEPT;
  }
  return ERROR;
}

/*}}}  */

/*{{{  Old functions that are now macros */

#if 0
state SG_A_STATE(action a)
{
  return ATgetInt((ATermInt) ATgetArgument(a, 0));
}

int SG_A_NR_ARGS(action a)
{
  return ATgetInt((ATermInt) ATgetArgument(a, 0));
}

label  SG_A_PROD(action a)
{
  return (label) ATgetInt((ATermInt) ATgetArgument(a, 1));
}

ATbool    SG_A_ATTRIBUTE(action a)
{
  return ATgetInt((ATermInt) ATgetArgument(a, 2));
}

lookahead SG_A_LOOKAHEAD(action a)
{
  return (lookahead) ATgetArgument(a, 3);
}

ATbool SG_RegularAction(action a)
{
  return (SG_A_ATTRIBUTE(a) == SG_PT_REGULAR);
}

ATbool SG_RejectAction(action a)
{
  return SG_ReduceAction(a) && (SG_A_ATTRIBUTE(a) == SG_PT_REJECT);
}

ATbool SG_EagerAction(action a)
{
  return (SG_A_ATTRIBUTE(a) == SG_PT_EAGER);
}

ATbool SG_UneagerAction(action a)
{
  return (SG_A_ATTRIBUTE(a) == SG_PT_UNEAGER);
}

ATbool SG_PreferenceAction(action a)
{
  return (SG_A_ATTRIBUTE(a)==SG_PT_EAGER || SG_A_ATTRIBUTE(a)==SG_PT_UNEAGER);
}
#endif


/*}}}  */
/*{{{  ATbool SG_ReduceAction(action a) */

ATbool SG_ReduceAction(action a)
{
  int kind = SG_ActionKind(a);

  return (kind == REDUCE) || (kind == REDUCE_LA);
}

/*}}}  */
/*{{{  SG_ComputeGotoHashKey(parse_table *pt, state s, label l) */

static hashkey
SG_ComputeGotoHashKey(parse_table *pt, state s, label l)
{
  hashkey the_key;

  the_key =  (l * pt->numstates) + s;
  the_key *= HASH_PRIME;
  return the_key & (pt->gotos.size - 1);
}

/*}}}  */
/*{{{  state SG_LookupGoto(parse_table *pt, state s, label l) */

/*  Parse Table Lookup  */

state SG_LookupGoto(parse_table *pt, state s, label l)
{
  register gotobucket *b;
  hashkey h;

  h = SG_ComputeGotoHashKey(pt, s, l);

  for(b = pt->gotos.table[h]; b; b=b->next) {
    if((b->from==s) && (b->l==l)) {
      IF_DEBUG(fprintf(SG_log(), "Goto(%d,%d) == %d\n", s, l, b->to))
      return b->to;
    }
  }

  IF_DEBUG(fprintf(SG_log(), "Goto(%d,%d) == EOF\n", s, l));
  return SG_EOF;
}

/*}}}  */
/*{{{  ATermInt  SG_GetATint(int l, size_t maxprod) */
/*
 |SG_GetATint| maps integers onto corresponding ATermInts.
 It uses a dynamically sized static array, that is expanded automatically
 whenever |numprods| exceeds the current boundaries.  This array is
 then used to `cache' common integer conversions (within production range).
 Terms for numbers outside the range are created per request.
 */

ATermInt  SG_GetATint(int l, size_t maxprod)
{
  static size_t   tblsize = 0;
  size_t   minsize;
  static ATermInt *inttbl = NULL;

  minsize = maxprod+1;
  if(!inttbl || tblsize < minsize) {
    if(inttbl) {  /* Resizing the table; unprotect, reprotect needed  */
      ATunprotectArray((ATerm *) inttbl);
      inttbl = SG_Realloc(inttbl, minsize, sizeof(ATermInt));
    } else {
      inttbl = SG_Malloc(minsize, sizeof(ATermInt));
    }
    for(; tblsize < minsize; tblsize++) {
      inttbl[tblsize] = ATmakeInt(tblsize);
    }
    /*  Protect the new (or grown) table  */
    ATprotectArray((ATerm *) inttbl, tblsize);
  }
  if(l >= tblsize-1)
    return ATmakeInt(l);

  return inttbl[l];
}

/*}}}  */
/*{{{  production SG_LookupProduction(parse_table *pt, label l) */

production SG_LookupProduction(parse_table *pt, label l)
{
  int i = SG_GETLABEL(l);

  if(i >= (SG_PROD_START+SG_PT_NUMPRODS(pt)))
    return NULL;

  return (i <=  SG_CHAR_CLASS_EOF)      ?
    (production) SG_GetATint(l, 0) :
    SG_PT_PRODUCTIONS(pt)[i-SG_PROD_START];
}

/*}}}  */
/*{{{  production SG_LookupBracketProd(parse_table *pt, PT_Symbol symbol) */

production SG_LookupBracketProd(parse_table *pt, PT_Symbol symbol)
{
  int i;
  int maxProd = SG_PT_NUMPRODS(pt);

  for (i = 0; i < maxProd; i++) {
    PT_Production p = PT_ProductionFromTerm((ATerm)SG_PT_PRODUCTIONS(pt)[i]);
    PT_Symbol rhs = PT_getProductionRhs(p);
    if (PT_isEqualSymbol(symbol, rhs) &&
        PT_hasProductionBracketAttr(p)) {
      return (production)PT_ProductionToTerm(p);
    }
  }
  return NULL;
}

/*}}}  */


/*{{{  label SG_LookupLabel(parse_table *pt, production p) */

label SG_LookupLabel(parse_table *pt, production p)
{
  int i;
  int maxProd = SG_PT_NUMPRODS(pt);

  for (i = 0; i <= maxProd; i++) {
    if (ATisEqual(p, SG_PT_PRODUCTIONS(pt)[i])) {
      return i+SG_PROD_START;
    }
  }
  return -1;
}

/*}}}  */

static void SG_registerProductionHasPriority(parse_table *pt, ATermInt l)
{
  ATindexedSetPut(SG_PT_PRODUCTION_HAS_PRIORITIES(pt), (ATerm)l, NULL);
}

ATbool SG_hasProductionPriority(parse_table *pt, ATermInt l)
{
  if (ATindexedSetGetIndex(SG_PT_PRODUCTION_HAS_PRIORITIES(pt), (ATerm)l) < 0) {
    return ATfalse;
  }
  else {
    return ATtrue;
  } 
}

/*{{{  ATermList SG_LookupGtrPriority(parse_table *pt, label l) */

ATermList SG_LookupGtrPriority(parse_table *pt, ATermInt l)
{
  return (ATermList)ATtableGet(SG_PT_GTR_PRIORITIES(pt), (ATerm)l);
}

static void SG_StoreGtrPriority(parse_table *pt, ATermInt l1, ATermInt l2)
{
  ATermList value = SG_LookupGtrPriority(pt, l1);

  if (value == NULL) {
    SG_registerProductionHasPriority(pt, l1);
    ATtablePut(SG_PT_GTR_PRIORITIES(pt), (ATerm) l1,
               (ATerm) ATmakeList1((ATerm) l2));
  } else {
    ATtablePut(SG_PT_GTR_PRIORITIES(pt), (ATerm) l1,
               (ATerm) ATinsert(value, (ATerm) l2));
  }
}

/*}}}  */
/*{{{  ATermList SG_LookupArgGtrPriority(parse_table *pt, label l, int argNumber) */

ATermList SG_LookupArgGtrPriority(parse_table *pt, ATermInt l, ATermInt argNumber)
{
  ATerm key = (ATerm)ATmakeList2((ATerm)l, (ATerm)argNumber);
  
  return (ATermList)ATtableGet(SG_PT_ARG_GTR_PRIORITIES(pt), key);
}

/*}}}  */

static void SG_StoreArgGtrPriority(parse_table *pt, ATermInt l1, ATermInt argNumber,
                                  ATermInt l2)
{
  ATermList value = SG_LookupArgGtrPriority(pt, l1, argNumber);
  ATerm key = (ATerm)ATmakeList2((ATerm)l1, (ATerm)argNumber);

  if (value == NULL) {
    SG_registerProductionHasPriority(pt, l1);
    ATtablePut(SG_PT_ARG_GTR_PRIORITIES(pt), key, (ATerm) ATmakeList1((ATerm) l2));
  } else {
    ATtablePut(SG_PT_ARG_GTR_PRIORITIES(pt), key, (ATerm) ATinsert(value, (ATerm) l2));
  }
}

/*}}}  */

/* Error administration */

static ERR_ErrorList ptErrorList = NULL;

/*{{{  void SG_InitParseTableErrorList() */
void SG_InitParseTableErrorList()
{
  ERR_protectErrorList(&ptErrorList);

  /* test for NULL, or we throw away messages when init is called twice */
  if (ptErrorList == NULL) {
    ptErrorList = ERR_makeErrorListEmpty();
  }
}

/*}}}  */
/*{{{  ATbool SG_IsParseTableErrorListEmpty() */

ATbool SG_IsParseTableErrorListEmpty()
{
  return ERR_isErrorListEmpty(ptErrorList);
}

/*}}}  */
/*{{{  void SG_addParseTableErrorError(const char *path, const char *contentDescription) */

void SG_addParseTableErrorError(const char *path, const char *contentDescription)
{
  if (ERR_isErrorListEmpty(ptErrorList)) {
    ERR_Subject subject;
    ERR_Error error;

    if (path != NULL) {
      ERR_Location posinfo = ERR_makeLocationFile(path);
      subject = ERR_makeSubjectLocalized(contentDescription, posinfo);
    }
    else {
      subject = ERR_makeSubjectSubject(contentDescription);
    }

    error = ERR_makeErrorError("Parse Table error",
			       ERR_makeSubjectListSingle(subject));
    ptErrorList = ERR_makeErrorListMany(error, ptErrorList);
  }
}

/*}}}  */
/*{{{  ERR_Error SG_makeParseTableErrorError() */

ERR_Error SG_makeParseTableErrorError()
{
  return ERR_getErrorListHead(ptErrorList);
}

/*}}}  */
/*{{{  ERR_Summary SG_makeParseTableErrorSummary(const char *path) */

ERR_Summary SG_makeParseTableErrorSummary(const char *path)
{
  return ERR_makeSummarySummary("sglr", path, ptErrorList);
}

/*}}}  */

/*
 Storing and accessing character classes

 Parsing is done token by token.  When looking up matching actions
 (or states), we have to return all actions (states) belonging to all
 character classes containing the token.

 This is fairly difficult when the lookup tables for actions and gotos
 are represented in a straightforward manner, i.e. when the parse
 table's character class terms are used as keys in an ATerm hash table:
 in that approach, we'd have to find out first which character class
 keys in the lookup table contain the token, which is cumbersome and costly.

 For that reason, character classes are `expanded' in representation:
 whenever a charater range occurs in the parse table, the corresponding
 action (state) is seperately incorporated in the lookup table for
 all characters in the range; because of the Aterm Libary's maximal
 sharing, this can be done at the cost of minimal overhead.  However,
 a full (two-dimensional) expansion for action and goto table, both
 of which scarcely filled, does impose severe memory requirements.
 For that reason, action and goto tables are represented as sparse
 tables by means of dedicated hashing.
 */

/*
 For the hash buckets in both action and goto tables, a pool of
 free items is maintained.
 */

#define SG_POOLCHUNK        4096
#define SG_ACTIONPOOLCHUNK  (2*SG_POOLCHUNK)
#define SG_GOTOPOOLCHUNK    (SG_POOLCHUNK)

gotobucket   *sg_goto_pool_free = NULL;

/*{{{  void SG_AddToActionTable(parse_table *pt, state s, token c, actions acts) */

void SG_AddToActionTable(parse_table *pt, state s, token c, actions acts)
{
  if (pt->actiontable[ACTION_INDEX(s,c)]) {
    pt->actiontable[ACTION_INDEX(s,c)] = (actions)ATconcat(pt->actiontable[ACTION_INDEX(s,c)], (ATermList)acts);
  }
  else {
    pt->actiontable[ACTION_INDEX(s,c)] = acts;
  }
}

/*}}}  */
/*{{{  void SG_AddClassesToActionTable(parse_table *pt, state s, ATermList classes, */

void SG_AddClassesToActionTable(parse_table *pt, state s, ATermList classes,
                                actions acts)
{
  ATerm     firstTerm;
  action    act;

  for(; !ATisEmpty(classes); classes = ATgetNext(classes)) {
    firstTerm = ATgetFirst(classes);
    if (ATgetType(firstTerm) == AT_INT) {
      SG_AddToActionTable(pt, s, ATgetInt((ATermInt) firstTerm), acts);
    } else {
      if (ATgetAFun(firstTerm) == SG_Range_AFun) {
        int  first = ATgetInt((ATermInt) ATgetArgument(firstTerm, 0));
        int  last  = ATgetInt((ATermInt) ATgetArgument(firstTerm, 1));

        for(; first <= last; first++) {
          SG_AddToActionTable(pt, s, first, acts);
        }
      } else {
        ATerror("SG_AddClassesToActionTable: bad char-class %t\n", firstTerm);
      }
    }
  }

  /*  Check if there is preference information in this parse table  */
 if(!pt->has_prefers || !pt->has_avoids) {
    for(; !ATisEmpty(acts); acts = ATgetNext(acts)) {
      act = ATgetFirst(acts);
      if(SG_ReduceAction(act)) {
        if(SG_EagerAction(act)) {
          pt->has_prefers = ATtrue;
        } else if(SG_UneagerAction(act)) {
          pt->has_avoids = ATtrue;
        }
      }
    }
  }

}

/*}}}  */
/*{{{  size_t SG_CountClassesInActionTable(ATermList classes) */

size_t SG_CountClassesInActionTable(ATermList classes)
{
  ATerm     firstTerm;
  size_t    numactions = 0;

  for(; !ATisEmpty(classes); classes = ATgetNext(classes)) {
    firstTerm = ATgetFirst(classes);
    if (ATgetType(firstTerm) == AT_INT) {
      numactions++;
    } else {
      if (ATgetAFun(firstTerm) == SG_Range_AFun) {
        int  first = ATgetInt((ATermInt) ATgetArgument(firstTerm, 0));
        int  last  = ATgetInt((ATermInt) ATgetArgument(firstTerm, 1));

        numactions += (last - first) + 1;
      } else {
        ATerror("SG_CountClassesInActionTable: bad char-class %t\n", firstTerm);
      }
    }
  }
  return numactions;
}

/*}}}  */
/*{{{  void SG_AddPTActions(parse_table *pt, state s, ATermList acts) */

void SG_AddPTActions(parse_table *pt, state s, ATermList acts)
{
  ATerm     act;

  for (; !ATisEmpty(acts); acts = ATgetNext(acts)) {
    act = ATgetFirst(acts);
    if(ATgetAFun(act) == SG_Action_AFun) {
      ATermList classes = (ATermList) ATgetArgument(act, 0);
      actions   t       = (actions) ATgetArgument(act, 1);

      SG_AddClassesToActionTable(pt, s, classes, (actions) t);
      for(; !pt->has_rejects && !ATisEmpty(t); t = ATgetNext(t)) {
        action thisact = ATgetFirst(t);

        if(SG_RejectAction(thisact)) {
          pt->has_rejects = ATtrue;
        }
      }
    } else {
      ATerror("SG_AddPTActions: bad action %t\n", act);
    }
  }
}

/*}}}  */
/*{{{  size_t SG_CountPTActions(register ATermList acts) */

size_t SG_CountPTActions(register ATermList acts)
{
  ATerm     act;
  size_t    numactions = 0;

  for (; !ATisEmpty(acts); acts = ATgetNext(acts)) {
    act = ATgetFirst(acts);
    if(ATgetAFun(act) == SG_Action_AFun) {
      /*ATermList classes = (ATermList)ATmakeList1(ATgetArgument(act, 0)); */
      ATermList classes = (ATermList)ATgetArgument(act, 0);
      numactions += SG_CountClassesInActionTable(classes);
    } else {
      ATabort("SG_CountPTActions: bad action %t\n", act);
    }
  }
  return numactions;
}

/*}}}  */
/*{{{  void SG_AddToGotoTable(parse_table *pt, state from, label l, state to) */

void SG_AddToGotoTable(parse_table *pt, state from, label l, state to)
{
  /*  A goto for label l and state s is guaranteed not to exist  */
  gotobucket *gb;
  hashkey     h;

  if(sg_goto_pool_free == NULL) {
    /* If the goto pool is empty, allocate a new chunk of goto buckets */
    register size_t         i;

    sg_goto_pool_free = SG_Malloc(SG_ACTIONPOOLCHUNK, sizeof(gotobucket));
    if(!sg_goto_pool_free) {
      ATerror("failed to expand goto pool\n");
    }

    for(i=0, gb=sg_goto_pool_free; i < (SG_ACTIONPOOLCHUNK-1); i++) {
      gb->next = (gotobucket *) ((size_t) gb + (size_t)sizeof(gotobucket));
      gb = gb->next;
    }
    gb->next = NULL;
  }
  gb = sg_goto_pool_free;
  sg_goto_pool_free = sg_goto_pool_free->next;


  h = SG_ComputeGotoHashKey(pt, from, l);
  gb->next = pt->gotos.table[h];
  gb->from = from;
  gb->l = l;
  gb->to = to;
  pt->gotos.table[h] = gb;
}

/*}}}  */
/*{{{  size_t SG_CountClassesInGotoTable(register ATermList classes) */

size_t SG_CountClassesInGotoTable(register ATermList classes)
{
  ATerm     firstTerm;
  size_t    numgotos = 0;

  for(; !ATisEmpty(classes); classes = ATgetNext(classes)) {
    firstTerm = ATgetFirst(classes);
    if (ATgetType(firstTerm) == AT_INT) {
      numgotos++;
    } else {
      if (ATgetAFun(firstTerm) == SG_Range_AFun) {
        int  first = ATgetInt((ATermInt) ATgetArgument(firstTerm, 0));
        int  last  = ATgetInt((ATermInt) ATgetArgument(firstTerm, 1));

        numgotos += (last - first) + 1;
      }
    }
  }
  return numgotos;
}

/*}}}  */
/*{{{  void SG_AddClassesToGotoTable(parse_table *pt, state from, ATermList classes, */

void SG_AddClassesToGotoTable(parse_table *pt, state from, ATermList classes,
                              state to)
{
  ATerm     firstTerm;

  for(; !ATisEmpty(classes); classes = ATgetNext(classes)) {
    firstTerm = ATgetFirst(classes);
    if (ATgetType(firstTerm) == AT_INT) {
      SG_AddToGotoTable(pt, from, ATgetInt((ATermInt) firstTerm), to);
    } else {
      if (ATgetAFun(firstTerm) == SG_Range_AFun) {
        int  first = ATgetInt((ATermInt) ATgetArgument(firstTerm, 0));
        int  last  = ATgetInt((ATermInt) ATgetArgument(firstTerm, 1));

        for(; first <= last; first++)
          SG_AddToGotoTable(pt, from, first, to);
      } else {
        ATerror("SG_AddClassesToTable: bad char-class %t\n", firstTerm);
      }
    }
  }
}

/*}}}  */
/*{{{  size_t SG_CountPTGotos(register ATermList goto_lst) */

size_t SG_CountPTGotos(register ATermList goto_lst)
{
  ATerm     firstTerm;
  size_t    numgotos = 0;

  for (; !ATisEmpty(goto_lst); goto_lst = ATgetNext(goto_lst)) {
    if (ATgetAFun(firstTerm = ATgetFirst(goto_lst)) == SG_Goto_AFun) {
      /* <PO> removed stripping of char-class */
      ATermList classes = (ATermList)ATgetArgument(firstTerm, 0);
      numgotos += SG_CountClassesInGotoTable(classes);
    }
  }
  return numgotos;
}

/*}}}  */
/*{{{  void SG_AddPTGotos(parse_table *pt, state s, ATermList goto_lst, size_t nprods) */

void SG_AddPTGotos(parse_table *pt, state s, ATermList goto_lst, size_t nprods)
{
  ATerm     firstTerm;

  for (; !ATisEmpty(goto_lst); goto_lst = ATgetNext(goto_lst)) {
    if (ATgetAFun(firstTerm = ATgetFirst(goto_lst)) == SG_Goto_AFun) {
      ATermList classes;
      state     s2;

      /* <PO: removed char-class function symbol
       * classes = (ATermList) ATgetArgument(ATgetArgument(firstTerm, 0), 0);*/
      classes = (ATermList) ATgetArgument(firstTerm, 0);
      s2 = ATgetInt((ATermInt) ATgetArgument(firstTerm, 1));

      SG_AddClassesToGotoTable(pt, s, classes, s2);
    } else {
      ATerror("SG_AddPTGotos: cannot parse goto entry %t\n", firstTerm);
    }
  }
}

/*}}}  */
/*{{{  size_t SG_CountPTStates(register ATermList states) */

size_t SG_CountPTStates(register ATermList states)
{
  ATerm     curstate;
  size_t    numgotos = 0;

  for(; !ATisEmpty(states); states=ATgetNext(states)) {
    if(ATgetAFun(curstate = ATgetFirst(states)) == SG_StateRec_AFun) {
      ATermList gotos = (ATermList) ATgetArgument(curstate, 1);

      numgotos += SG_CountPTGotos(gotos);
    }
  }
  return numgotos;
}

/*}}}  */
/*{{{  void SG_AddPTStates(parse_table *pt, ATermList states) */

void SG_AddPTStates(parse_table *pt, ATermList states)
{
  ATerm     curstate;
  int       numgotos = 0, numactions = 0;

  for(; !ATisEmpty(states); states=ATgetNext(states)) {
    if(ATgetAFun(curstate = ATgetFirst(states)) == SG_StateRec_AFun) {
      state s         = ATgetInt((ATermInt) ATgetArgument(curstate, 0));
      ATermList gotos = (ATermList) ATgetArgument(curstate, 1);
      /* <PO: removed actions function symbol
       * ATermList acts  = (ATermList) ATgetArgument(ATgetArgument(curstate,2),0);*/
      ATermList acts  = (ATermList) ATgetArgument(curstate,2);

      IF_STATISTICS(numgotos+=ATgetLength(gotos); numactions+=ATgetLength(acts))
        SG_AddPTGotos(pt, s, gotos, SG_PT_NUMPRODS(pt));
      SG_AddPTActions(pt, s, acts);
    } else {
      ATerror("SG_AddPTStates: bad state-rec %t\n", curstate);
    }
  }
  IF_STATISTICS(fprintf(SG_log(), "No. of gotos: %d\nNo. of actions: %d\n",
                        numgotos, numactions));
}

/*}}}  */
/*{{{  ATbool SG_Injection(production prod) */

ATbool SG_Injection(production prod)
{
  production in;

  if (ATmatch((ATerm) prod, "prod([<term>],cf(<term>),<term>)",
              &in, NULL, NULL)) {
    if (ATmatch((ATerm) in, "lit(<str>)", NULL)) {
      return ATfalse;
    }
    else {
      return ATtrue;
    }
  }

  if (ATmatch((ATerm) prod, "prod([<term>],lex(sort(<str>)),<term>)",
              &in, NULL, NULL)) {
    if (ATmatch((ATerm) in, "lit(<str>)", NULL)) {
      return ATfalse;
    }
    else {
      return ATtrue;
    }
  }

  return ATfalse;
}

/*}}}  */
/*{{{  ATbool SG_UserDefinedInjection(production prod) */

ATbool SG_UserDefinedInjection(production prod)
{
  production in;

  if (ATmatch((ATerm) prod, "prod([<term>],cf(sort(<term>)),<term>)",
              &in, NULL, NULL)) {
    if (ATmatch((ATerm) in, "lit(<str>)", NULL)) {
      return ATfalse;
    }
    else {
      return ATtrue;
    }
  }

  if (ATmatch((ATerm) prod, "prod([<term>],lex(sort(<str>)),<term>)",
              &in, NULL, NULL)) {
    if (ATmatch((ATerm) in, "lit(<str>)", NULL)) {
      return ATfalse;
    }
    else {
      return ATtrue;
    }
  }

  return ATfalse;
}

/*}}}  */
/*{{{  void SG_AddProduction(productiontable tbl, label lbl, production prod) */

void SG_AddProduction(productiontable tbl, label lbl, production prod)
{
  tbl[SG_GETLABEL(lbl)-SG_PROD_START] = prod;
  ATprotect((ATerm *) &tbl[SG_GETLABEL(lbl)-SG_PROD_START]);
}

/*}}}  */
/*{{{  void SG_AddInjection(injectiontable tbl, label lbl, ATbool is_inject) */

void SG_AddInjection(injectiontable tbl, label lbl, ATbool is_inject)
{
  tbl[SG_GETLABEL(lbl)-SG_PROD_START] = is_inject;
}

/*}}}  */
/*{{{  ATbool SG_ProdIsInjection(parse_table *pt, label l) */

ATbool SG_ProdIsInjection(parse_table *pt, label l)
{
  return SG_PT_INJECTIONS(pt)[SG_GETLABEL(l)-SG_PROD_START];
}

/*}}}  */
/*{{{  ATbool SG_ProdIsUserDefinedInjection(parse_table *pt, label l) */

ATbool SG_ProdIsUserDefinedInjection(parse_table *pt, label l)
{
  if (SG_PT_INJECTIONS(pt)[SG_GETLABEL(l)-SG_PROD_START]) {
    return SG_UserDefinedInjection(SG_LookupProduction(pt, l));   
  }
  else {
    return ATfalse;
  }
}

/*}}}  */
/*{{{  void SG_AddPTGrammar(parse_table *pt, ATermList grammar) */
/*
 Adds the literal ATerm for a production to the production table.
 The label is the pointer in the table. It is used in reduce actions
 to refer to the production.
 */

void SG_AddPTGrammar(parse_table *pt, ATermList grammar)
{
  ATerm prod;

  for (; !ATisEmpty(grammar); grammar = ATgetNext(grammar)) {
    if (ATgetAFun(prod = ATgetFirst(grammar)) == SG_Label_AFun) {
      production pr_prod  = (production) ATgetArgument(prod, 0);
      label      pr_label = ATgetInt((ATermInt) ATgetArgument(prod, 1));

      if (pr_label == SG_EOF) {
        ATerror("error, obsolete parse table format\n");
      }
      if (pr_label <  SG_PROD_START
         || pr_label >= SG_PROD_START+SG_PT_NUMPRODS(pt)) {
        ATerror("SG_AddPTGrammar: production %d out of range (%d..%d)\n",
                pr_label, SG_PROD_START, SG_PROD_START+SG_PT_NUMPRODS(pt)-1);
      }
      SG_AddProduction(SG_PT_PRODUCTIONS(pt), pr_label, pr_prod);
      SG_AddInjection(SG_PT_INJECTIONS(pt), pr_label, SG_Injection(pr_prod));
    } 
    else {
      ATerror("SG_AddPTGrammar: bad production %t\n", prod);
    }
  }
}

/*}}}  */

enum SG_PRIORITIES { P_IGNORE, P_ARGGTR, P_GTR };

/*{{{  void SG_AddPTPriorities(parse_table *pt, register ATermList prios) */

void SG_AddPTPriorities(parse_table *pt, register ATermList prios)
{
  ATerm     prio;
  AFun      fun;
  ATermList args;
  ATermInt  pr_num1, pr_num2, arg_num;
  int       ptype = P_IGNORE;

  for (; !ATisEmpty(prios); prios = ATgetNext(prios)) {
    prio = ATgetFirst(prios);
    fun = ATgetAFun(prio);
    if(ATisEqualAFun(fun, SG_GtrPrio_AFun)) {
      ptype = P_GTR;
    }
    else if (ATisEqualAFun(fun, SG_ArgGtrPrio_AFun)) {
      ptype = P_ARGGTR;
    } else {
      ptype = P_IGNORE;
    }
    if(ptype != P_IGNORE) {

      pt->has_priorities = ATtrue;
      args = ATgetArguments((ATermAppl) prio);
      pr_num1 = (ATermInt) ATelementAt(args, 0);
      switch(ptype) {
        case P_GTR:
          pr_num2 = (ATermInt) ATelementAt(args, 1);
          if (!ATisEqual(pr_num1, pr_num2)) {
            SG_StoreGtrPriority(pt, pr_num1, pr_num2);
          }
          break;
        case P_ARGGTR:
          arg_num = (ATermInt) ATelementAt(args, 1);
          pr_num2 = (ATermInt) ATelementAt(args, 2);
          SG_StoreArgGtrPriority(pt, pr_num1, arg_num, pr_num2);
          break;
        default:
          break;
      }
    }
  }
}

/*}}}  */
/*{{{  parse_table *SG_NewParseTable(state initial, size_t numstates, size_t numprods, */

parse_table *SG_NewParseTable(state initial, size_t numstates, size_t numprods,
                              size_t action_entries, size_t goto_entries)
{
  parse_table *pt;
  size_t      tableclass, tablesize;

  IF_STATISTICS(fprintf(SG_log(), "No. of states: %ld\n"
                        "No. of productions: %ld\n"
                        "No. of action entries: %ld\n"
                        "No. of goto entries: %ld\n",
                        (long) numstates, (long) numprods,
                        (long) action_entries, (long) goto_entries));

  pt               = SG_Calloc(1, sizeof(struct _parse_table));
  pt->initial      = initial;
  pt->numstates    = numstates;
  pt->numprods     = numprods;

  /* Allocate table to hold all action terms */
#if 0
  if (action_term_table) {
    ATunprotectArray(action_term_table);
  }
  action_term_table = (ATerm *)SG_Realloc(action_term_table, 
					  sizeof(ATerm), action_entries);
  if (!action_term_table) {
    ATerror("could not allocation action_term_table of size %d\n",
	    action_entries);
  }
  action_term_index = 0;
  memset(action_term_table, 0, sizeof(ATerm)*action_entries);
  ATprotectArray(action_term_table, action_entries);
#endif

  pt->actiontable = SG_Calloc(numstates*STATE_SIZE, sizeof(actions));
  if(!pt->actiontable) {
    ATerror("could not allocate action table of size %d\n", numstates);
  }
  ATprotectArray((ATerm *)pt->actiontable, numstates*STATE_SIZE);

  /*  Goto table -- determine upper size/class bound, and initialize  */
  for(tableclass=4, tablesize=(1 << tableclass) ; tablesize < goto_entries;
      tablesize <<= 1) {
    tableclass++;
  }
  pt->gotos.sizeclass = tableclass;
  pt->gotos.size      = tablesize;
  pt->gotos.table     = SG_Calloc(tablesize, sizeof(gotobucket *));
  if(!pt->gotos.table) {
    ATerror("could not allocate goto table of size %d\n", tablesize);
  }

  pt->productions  = SG_Calloc(numprods, sizeof(production));
  if(!pt->productions) {
    ATerror("could not allocate %d productions\n", numprods);
  }
  pt->injections  = SG_Calloc(numprods, sizeof(ATbool));
  if(!pt->injections) {
    ATerror("could not allocate %d booleans\n", numprods);
  }
  pt->production_has_priorities   = ATindexedSetCreate(numprods, 75);
  pt->gtr_priorities   = ATtableCreate(numprods, 75);
  pt->arg_gtr_priorities   = ATtableCreate(numprods, 75);
  pt->associativities   = ATtableCreate(numprods, 75);

  pt->has_priorities = pt->has_rejects  = ATfalse;
  pt->has_prefers = pt->has_avoids = ATfalse;


  /*  Prefetch a sensible number in the ATerm<->integer conversion cache  */
  SG_GetATint(0, numprods+SG_CHAR_CLASS_EOF+1);

  return pt;
}

/*}}}  */


/*  Parse Table Destruction  */
/*{{{  void SG_DiscardActions(parse_table *pt) */

void SG_DiscardActions(parse_table *pt)
{
  SG_Free(pt->actiontable);
}

/*}}}  */
/*{{{  void SG_DiscardGotos(parse_table *pt) */

void SG_DiscardGotos(parse_table *pt)
{
  register size_t s;
  gotobucket *g, *next;

  for(s=0; s<pt->gotos.size; s++) {
    for(g = pt->gotos.table[s]; g; g=next) {
      next = g->next;
      g->next = sg_goto_pool_free;          /*  Feed pool for later perusal  */
      sg_goto_pool_free = g;
    }
  }
  SG_Free(pt->gotos.table);
}

/*}}}  */
/*{{{  void SG_DiscardProductions(parse_table *pt) */

void SG_DiscardProductions(parse_table *pt)
{
  register size_t p;

  for(p=0; p<SG_PT_NUMPRODS(pt); p++) {
    if(pt->productions[p] != NULL) {
      ATunprotect((ATerm *) &pt->productions[p]);
    }
  }
  SG_Free(pt->productions);
}

/*}}}  */
/*{{{  void SG_DiscardInjections(parse_table *pt) */

void SG_DiscardInjections(parse_table *pt)
{
  SG_Free(pt->injections);
}

/*}}}  */
/*{{{  void SG_DiscardPriorities(parse_table *pt) */

void SG_DiscardPriorities(parse_table *pt)
{
  ATindexedSetDestroy(pt->production_has_priorities);
  ATtableDestroy(pt->gtr_priorities);
  ATtableDestroy(pt->arg_gtr_priorities);
  ATtableDestroy(pt->associativities);
}

/*}}}  */
/*{{{  void SG_DiscardParseTable(parse_table *pt) */

void SG_DiscardParseTable(parse_table *pt)
{
  SG_DiscardActions(pt);
  SG_DiscardGotos(pt);
  SG_DiscardProductions(pt);
  SG_DiscardInjections(pt);
  SG_DiscardPriorities(pt);

  ATunprotectArray((ATerm *)pt->actiontable);
  SG_Free(pt);
}

/*}}}  */
/*{{{  parse_table *SG_AddParseTable(language L, char *FN) */

/*
 Add Parse Table

 Read a parse table term, build a parse table, and add it to the
 parse table database.
 */

parse_table *SG_AddParseTable(language L, const char *FN, const char *inFile)
{
  FILE        *input_file;
  parse_table *pt = NULL;
  ATerm t;

  if (!(input_file = SG_OpenFile("parse table not specified", FN))) {
    return NULL;
  }

  IF_STATISTICS(ATfprintf(SG_log(), "Language: %t\n", L); SG_Timer());

  t = ATreadFromFile(input_file);

  pt = SG_BuildParseTable((ATermAppl) t, inFile);

  IF_STATISTICS(ATfprintf(SG_log(),
                        "Obtaining parse table for %t took %.6fs\n",
                        L, SG_Timer()));

  SG_CloseFile(input_file);

  if (pt) {
    SG_SaveParseTable(L, pt);
  }

  return pt;
}

/*}}}  */
/*{{{  parse_table *SG_BuildParseTable(ATermAppl t, const char *path) */
/*
 Build Parse Table

 Translating term representation of parse table into parse table
 data structure.
 */


parse_table *SG_BuildParseTable(ATermAppl t, const char *path)
{
  ATermList   prods, states;
  register ATermList sts, prios = ATempty;
  state       initial_state;
  int         version_nr;
  parse_table *pt = NULL;
  AFun        ptfun;
  size_t      goto_entries = 0, action_entries = 0;
  long        maxrss = 0, allocated;
  int         nrOfStates;

  SG_InitPTGlobals();  /*  Make sure the PT globals are initialised  */
  SG_InitParseTableErrorList(); 

  ptfun = ATgetAFun(t);

  if (ptfun != SG_PT5_AFun) {
    SG_addParseTableErrorError(path, "Parse table format error");
    t = NULL;
    return NULL;
  }

  version_nr = ATgetInt((ATermInt) ATgetArgument(t, 0));

  if (version_nr < 4 || version_nr > 6) {
    fprintf(stderr, "sglr: warning: parse table version %d might not be supported. (expecting 4-6).", version_nr);
    // SG_addParseTableErrorError(path, "Invalid parse table version");
    // t = NULL;
    // return NULL;
  }

  initial_state = ATgetInt((ATermInt) ATgetArgument(t, 1));
  prods = (ATermList) ATgetArgument(t, 2);
  states = (ATermList) ATgetArgument(ATgetArgument(t, 3), 0);
  prios = (ATermList) ATgetArgument(ATgetArgument(t, 4), 0);
  t = NULL;

  nrOfStates = ATgetLength(states);

  if (nrOfStates == 2 &&
      ATgetLength((ATermList)ATgetArgument(ATgetFirst(states), 2)) == 0 &&
      ATgetLength((ATermList)ATgetArgument(ATgetFirst(ATgetNext(states)), 
					   2)) == 0) {
    SG_addParseTableErrorError(path, "No start state defined");
    return NULL;
  }
  else {
    for (sts=states; !ATisEmpty(sts); sts=ATgetNext(sts)) {
      ATerm     curstate = ATgetFirst(sts);
      if (ATgetAFun(curstate) == SG_StateRec_AFun) {
        ATermList gotos = (ATermList) ATgetArgument(curstate, 1);
        ATermList acts  = (ATermList) ATgetArgument(curstate, 2);

        goto_entries += SG_CountPTGotos(gotos);
        action_entries += SG_CountPTActions(acts);
      }
    }

    IF_STATISTICS(maxrss = SG_ResidentSetSize());
  
    pt = SG_NewParseTable(initial_state, 
			  ATgetLength(states), 
			  ATgetLength(prods),
                          action_entries, 
			  goto_entries);

    IF_STATISTICS(
      allocated = SG_Allocated();
      if (allocated > 0) {
        fprintf(SG_log(), 
		"[mem] extra ATerm memory allocated for empty table: %ld\n",
                allocated);
      }
      if (maxrss) {
        fprintf(SG_log(), 
		"[mem] PT build: %ld before, %ld after table creation\n",
                maxrss, SG_ResidentSetSize());
      }
      maxrss = SG_ResidentSetSize();
    );

    SG_AddPTStates(pt, states);
    states = NULL;
    SG_AddPTGrammar(pt, prods);
    prods = NULL;
  
    if (!ATisEmpty(prios)) {
      /*  Successful match, priorities included  */
      SG_AddPTPriorities(pt, prios);
      prios = NULL;
    } else {
      IF_VERBOSE(ATwarning("warning: no priority information in parse table\n"))
    }

    IF_STATISTICS(
      fprintf(SG_log(), "%scludes rejects\n",
        SG_PT_HAS_REJECTS(pt)?"In":"Ex");
      fprintf(SG_log(), "%scludes priorities\n",
      SG_PT_HAS_PRIORITIES(pt)?"In":"Ex");
      fprintf(SG_log(), "%scludes prefer actions\n",
        SG_PT_HAS_PREFERS(pt)   ?"In":"Ex");
      fprintf(SG_log(), "%scludes avoid actions\n",
        SG_PT_HAS_AVOIDS(pt)    ?"In":"Ex");
      allocated = SG_Allocated();
      if (allocated > 0) {
        fprintf(SG_log(), 
		"[mem] extra ATerm memory allocated while filling table: %ld\n",
                allocated);
      }
      if (maxrss) {
        fprintf(SG_log(), 
		"[mem] PT build: %ld before, %ld after filling table\n",
                maxrss, SG_ResidentSetSize());
      }
    );
    return pt;
  }
}

/*}}}  */

/*  Parse Table Database  */

#define MAX_TABLES 1

typedef struct _ptdb {
  language name;
  parse_table *table;
} PTDB;
static PTDB tables[MAX_TABLES];

/*{{{  void SG_SaveParseTable(language L, parse_table *pt) */

/*
 Store parse table in parse table database; if the parse table
 database is full, ditch its first entry to make room.
 */

void SG_SaveParseTable(language L, parse_table *pt)
{
  if (tables[0].table) {
    SG_DiscardParseTable(tables[0].table);
  }
  tables[0].name  = L;
  tables[0].table = pt;
  IF_DEBUG(ATfprintf(SG_log(),
                     "Table for %t added to parse table database\n", L));
}

/*}}}  */
/*{{{  parse_table *SG_LookupParseTable(language L, , const char *inFile) */

parse_table *SG_LookupParseTable(language L, const char *inFile)
{
  int i = 0;
  static char contentDescription[1024];

  SG_InitParseTableErrorList();

  IF_DEBUG(ATfprintf(SG_log(), "Request for language %t\n",
                     SG_SAFE_LANGUAGE(L)));

  if (!L) {
    SG_addParseTableErrorError(inFile,
			       "can not lookup undefined language\n");
    return NULL;
  }
  if (ATisEqual(L, tables[0].name)) {
    IF_DEBUG(ATfprintf(SG_log(),
                       "Table for language %t available\n", 
                       L))
    return tables[i].table;
  }

  sprintf(contentDescription, "Table for %s not stored", 
	  L ? "XXX" : "[undefined]");

  SG_addParseTableErrorError(inFile, contentDescription);

  return NULL;
}

/*}}}  */

