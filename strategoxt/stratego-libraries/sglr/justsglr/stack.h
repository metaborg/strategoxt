/*  $Id: stack.h 10403 2003-08-08 07:50:19Z markvdb $  */

/*
 Graph Structured Stack

 The parser maintains a graph structured stack to keep track
 of all possible parses in parallel. If there is more than
 one possible continuation for a stack, a new stack is created
 for each possibility. All these stacks share the common prefix
 of the stack. If later on different stacks reach the same state,
 they can be joined again. This leads to a graph structure.

 Stacks are defined by means of dedicated data structures.
 */

#ifndef _STACK_H_
#define _STACK_H_ 1

#include "parse-table.h"


#define SG_HEAD(l)    ((l)->head)
#define SG_TAIL(l)    ((l)->tail)


typedef struct list {
  struct list   *tail;
  void          *head;
} list;


/*  Stack/link datastructures  */

typedef list stacks;
typedef list st_links;

typedef struct link {
  struct stack   *stack;
  tree           tree;
  size_t         length;
  ATbool         rejected;
} st_link;

typedef struct stack {
  st_links       *links;
  state          state;
  short          refcount;
  ATbool         isshift;
#ifdef DEBUG
  struct stack   *parent;
#endif
} stack;


#define SG_ST_STATE(s)          (((stack *)s)->state)     /* State of a stack */
#define SG_ST_LINKS(s)          (((stack *)s)->links)     /* List of links of a stack */
#define SG_ST_PARENT(s)         (((stack *)s)->parent     /* Parent stack of a stack */
#define SG_ST_INCCOUNT(s)       (((stack *)s)->refcount++)
#define SG_ST_DECCOUNT(s)       (((stack *)s)->refcount--)
#define SG_ST_COUNT(s)          (((stack *)s)->refcount)
#define SG_ST_ISSHIFT(s)        (((stack *)s)->isshift)

#define SG_LK_TREE(l)           (((st_link *)l)->tree)      /* Tree of a link */
#define SG_LK_LENGTH(l)         (((st_link *)l)->length)    /* Length of tree of a link */
#define SG_LK_STACK(l)          (((st_link *)l)->stack)     /* Stack of a link */
#define SG_LK_REJECTED(l)       (((st_link *)l)->rejected)  /* Rejected attr. of link */

#ifdef  MEMSTATS
void      SG_ZeroAllocStats(void);
void      SG_PrintCurAllocStats(void);
void      SG_PrintMaxAllocStats(void);
void      SG_MaxAllocStats(void);
#endif

#ifndef DEBUG
stack    *SG_NewStack(state s, ATbool isshift);
#else
stack    *SG_NewStack(state s, stack *st, ATbool isshift);
#endif
#define   SG_NewStacks(s)  SG_AddStack(s, NULL)
stacks   *SG_AddStack(stack *st, stacks *sts);
st_link  *SG_AddLink(stack *st0, stack *st1,  tree t, size_t tl);
st_links *SG_AddLinks(st_link *l, st_links *ls);

stacks   *SG_CollectOldStacks(stacks **old, int nr_old, stacks *new, stack *accept);

void      SG_DeleteStacks(stacks *sts);
void      SG_DeleteStack(stack *st);
void      SG_DeleteLinks(st_links *lks);
void      SG_DeleteLink(st_link *lk);

void      SG_SweepStack(stack *accept);
#define   SG_ClearStack(st)  SG_SweepStack(st)

stack    *SG_FindStack(state, stacks *);
st_link  *SG_FindDirectLink(stack *, stack *);

void      SG_MarkStackRejected(stack *);
void      SG_MarkLinkRejected(st_link *);
ATbool    SG_Rejected(stack *);
ATbool    SG_DeeplyRejected(stack *);
ATbool    SG_InReduceStacks(stack *, stacks *);

#endif  /* _STACK_H_ */
