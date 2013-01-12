/*  $Id: parse-table.h 16976 2005-11-10 13:40:12Z jurgenv $  */

#ifndef _PARSE_TABLE_
#define _PARSE_TABLE_  1

#include <aterm2.h>
/*  Internal ATerm function: sglr happens to know to collect garbage.  */
void AT_collect(int size);
#define ATcollect()  AT_collect(2)

#include "sglr.h"
#include <Error-utils.h>

#define STATE_SIZE 257
#define ACTION_INDEX(s, c)        ((s)*STATE_SIZE + (c))
#define SG_LookupAction(pt, s, c) ((pt)->actiontable[ACTION_INDEX(s,c)])

/*  Representation/data structures  */

#define HASH_PRIME    677;
typedef unsigned int  hashkey;

typedef struct _gbucket {
  struct _gbucket *next;
  state            from;
  label            l;
  state            to;
} gotobucket;

typedef struct _gototable {
  gotobucket **table;
  size_t     size;
  size_t     sizeclass;
} gototable;

typedef production      *productiontable;
typedef ATbool          *injectiontable;
typedef ATermTable       prioritytable;
typedef ATermTable       argprioritytable;
typedef ATermIndexedSet  productionset;

typedef struct _parse_table  {
  state            initial;
  size_t           numstates;
  size_t           numprods;
  actions         *actiontable;
  gototable        gotos;
  productiontable  productions;
  injectiontable   injections;
  productionset    production_has_priorities;
  prioritytable    gtr_priorities;
  argprioritytable arg_gtr_priorities;
  prioritytable    associativities;
  ATbool           has_priorities;
  ATbool           has_rejects;
#ifndef NO_EAGERNESS
  ATbool           has_prefers;
  ATbool           has_avoids;
#endif
} parse_table;

typedef enum ActionKind {ERROR, SHIFT, REDUCE, REDUCE_LA, ACCEPT}  actionkind;


/*  Some global variables/macros  */

extern  token SG_EOF_Token;
extern  token SG_Zero_Token;

extern  AFun  SG_Regular_AFun, SG_Reject_AFun,
#ifndef NO_EAGERNESS
SG_Eager_AFun, SG_Uneager_AFun,
#endif
SG_Aprod_AFun, SG_Amb_AFun, SG_Cycle_AFun;

/*  Function prototypes  */

#define SG_Max(a,b)  ((a>b)?a:b)

void          SG_InitPTGlobals(void);
state         SG_LookupGoto(parse_table *pt, state s, label l);
production    SG_LookupProduction(parse_table *pt, label c);
production    SG_LookupBracketProd(parse_table *pt, PT_Symbol r);
label         SG_LookupLabel(parse_table *pt, production p);
ATbool        SG_ProdIsInjection(parse_table *pt, label l);
ATbool        SG_ProdIsUserDefinedInjection(parse_table *pt, label l);
ATbool        SGGtrPriority(parse_table *pt, int argNumber, label l0, label l1);
ATbool        SG_hasProductionPriority(parse_table *pt, ATermInt l);
ATermList     SG_LookupGtrPriority(parse_table *pt, ATermInt l);
ATermList     SG_LookupArgGtrPriority(parse_table *pt, ATermInt l, ATermInt argNum);
ATermInt      SG_GetATint(int l, size_t numprods);

actionkind    SG_ActionKind(action a);
ATbool        SG_ReduceAction(action a);

#if 0
state         SG_A_STATE(action a);
int           SG_A_NR_ARGS(action a);
label         SG_A_PROD(action a);
int           SG_A_ATTRIBUTE(action a);
lookahead     SG_A_LOOKAHEAD(action a);

ATbool        SG_RegularAction(action a);
ATbool        SG_RejectAction(action a);
#ifndef NO_EAGERNESS
ATbool        SG_EagerAction(action a);
ATbool        SG_UneagerAction(action a);
ATbool        SG_PreferenceAction(action a);
#endif
#endif

void SG_InitParseTableErrorList();
void SG_addParseTableErrorError(const char *path, const char *desc);
ATbool SG_IsParseTableErrorListEmpty();
ERR_Error SG_makeParseTableErrorError();
ERR_Summary SG_makeParseTableErrorSummary(const char *path);

parse_table  *SG_AddParseTable(language L, const char *FN, const char *inFile);
parse_table  *SG_BuildParseTable(ATermAppl t, const char *path);
void          SG_DiscardParseTable(parse_table *pt);
void          SG_SaveParseTable(language L, parse_table *pt);
parse_table  *SG_LookupParseTable(language L, const char *path);

/*  Constants in parse tables  */
#define       SG_PT_REGULAR         0
#define       SG_PT_REJECT          1    /*  Reject reduce in action table  */
#define       SG_PT_EAGER           2    /*  Preferred reduce  */
#define       SG_PT_UNEAGER         4    /*  Emergency-only reduction  */

#define       SG_PT_INITIAL(pt)         ((pt)->initial)
#define       SG_PT_NUMSTATES(pt)       ((pt)->numstates)
#define       SG_PT_NUMPRODS(pt)        ((pt)->numprods)
#define       SG_PT_ACTIONS(pt)         ((pt)->actions)
#define       SG_PT_GOTOS(pt)           ((pt)->gotos)
#define       SG_PT_PRODUCTIONS(pt)     ((pt)->productions)
#define       SG_PT_INJECTIONS(pt)      ((pt)->injections)
#define       SG_PT_PRODUCTION_HAS_PRIORITIES(pt)  ((pt)->production_has_priorities)
#define       SG_PT_GTR_PRIORITIES(pt)  ((pt)->gtr_priorities)
#define       SG_PT_ARG_GTR_PRIORITIES(pt)  ((pt)->arg_gtr_priorities)
#define       SG_PT_ASSOCIATIVITIES(pt) ((pt)->associativities)
#define       SG_PT_HAS_PRIORITIES(pt)  ((pt)->has_priorities)
#define       SG_PT_HAS_REJECTS(pt)     ((pt)->has_rejects)

#ifndef NO_EAGERNESS
#define       SG_PT_HAS_PREFERS(pt)     ((pt)->has_prefers)
#define       SG_PT_HAS_AVOIDS(pt)      ((pt)->has_avoids)
#define       SG_PT_HAS_PREFERENCES(pt) (SG_PT_HAS_REJECTS(pt)||SG_PT_HAS_PREFERS(pt)||SG_PT_HAS_AVOIDS(pt))
#endif

#define       SG_A_STATE(a)         ATgetInt((ATermInt) ATgetArgument(a, 0))
#define       SG_A_TOKEN(a)         ATgetArgument(a, 1)
#define       SG_A_NR_ARGS(a)       ATgetInt((ATermInt) ATgetArgument(a, 0))
#define       SG_A_PROD(a)          ATgetInt((ATermInt) ATgetArgument(a, 1))
#define       SG_A_KWPROD(a)        ATgetInt((ATermInt) ATgetArgument(a, 0))
#define       SG_A_ATTRIBUTE(a)     ATgetInt((ATermInt) ATgetArgument(a, 2))
#define       SG_A_LOOKAHEAD(a)     (lookahead) ATgetArgument(a, 3)

#define       SG_RegularAction(a)   (SG_A_ATTRIBUTE(a) == SG_PT_REGULAR)
#define       SG_RejectAction(a)    (SG_ReduceAction(a) && SG_A_ATTRIBUTE(a) == SG_PT_REJECT)

#ifndef NO_EAGERNESS
#define       SG_EagerAction(a)     (SG_A_ATTRIBUTE(a) == SG_PT_EAGER)
#define       SG_UneagerAction(a)   (SG_A_ATTRIBUTE(a) == SG_PT_UNEAGER)
#define       SG_PreferenceAction(a)(SG_EagerAction(a) || SG_UneagerAction(a))
#endif
#endif /*  _PARSE_TABLE_  */
