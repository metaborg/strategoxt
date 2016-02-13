/*
 * $Id: stack-collect.c 5413 2001-07-11 10:53:56Z markvdb $
 */

#include <assert.h>

#include "mem-alloc.h"
#include "stack.h"

/*
 Using the related stack- and link data structures, a suitable
 method of garbage collection must be performed.

 The parser consists of a number of parallel parsers that may be
 discarded on shift (and accept), or merge on reduce.

 When shifting, a new set of parsers is derived; whatever lived
 in the old set of parsers, but not in either the new one or in
 the accepting stack, can (and hence must) be disposed.

 Stacks can be substacks of one another; a simple traversal will not
 do, because shared (sub)stacks will be visited multiple times.  For
 that reason, garbage collection uses the classic two `mark' and
 `sweep' passes.
 */


/*
 *  Mark phase:  traverse stacks, increment counters of visited nodes
 */

void SG_MarkStack(stack *st)
{
  if(st) {
    if (SG_ST_COUNT(st) == 0) {
      register st_links *lks;
      SG_ST_INCCOUNT(st);

      for(lks = SG_ST_LINKS(st); lks; lks = SG_TAIL(lks)) {
        SG_MarkStack(SG_LK_STACK(SG_HEAD(lks)));
      }
    }
  }
}

void SG_MarkStacks(stacks *sts)
{
  for(; sts; sts = SG_TAIL(sts)) {
    SG_MarkStack(SG_HEAD(sts));
  }
}

/*
 *  Sweep phase: traverse, decrement counters while doing so,
 *               free a node when in delete mode, and the counter hits 0
 */

void SG_SweepStack(stack *st)
{
  if(st) {
    if(SG_ST_COUNT(st) == 0) {
      register st_links *lks, *lks2;

      SG_ST_DECCOUNT(st);
      for(lks = SG_ST_LINKS(st); lks;) {
        st_link  *lk = SG_HEAD(lks);

        lks2 = lks;
        lks = SG_TAIL(lks);
        SG_SweepStack(SG_LK_STACK(lk));
	SG_DeleteLink(lk);
	SG_DeleteLinks(lks2);
      }
      SG_DeleteStack(st);
    }
  }
}

void SG_SweepStacks(stacks *sts)
{
  while(sts) {
    stacks *osts;

    SG_SweepStack(SG_HEAD(sts));
    osts = sts;
    sts = SG_TAIL(sts);
    SG_DeleteStacks(osts);
  }
}

void SG_UnmarkStack(stack *st)
{
  if(st) {
    if (SG_ST_COUNT(st) == 1) {
      register st_links *lks;

      SG_ST_DECCOUNT(st);
      for(lks = SG_ST_LINKS(st); lks; lks = SG_TAIL(lks)) {
        SG_UnmarkStack(SG_LK_STACK(SG_HEAD(lks)));
      }
    } else {
      assert(SG_ST_COUNT(st) == 0);
    }
  }
}


void SG_UnmarkStacks(stacks *sts)
{
  while(sts) {
    SG_UnmarkStack(SG_HEAD(sts));
    sts = SG_TAIL(sts);
  }
}

stacks *SG_CollectOldStacks(stacks **old, int nr_old, stacks *new, stack *accept)
{
  int i;

#ifdef MEMSTATS
  if(SG_DEBUG) {
    fprintf(SG_log(), "[Before GC] ");
    SG_PrintCurAllocStats();
  }
#endif


  /*  Count references: mark...  */
  if(accept)
    SG_MarkStack(accept);
  if(new)
    SG_MarkStacks(new);

  /*  Remove unreferenced items: sweep... */
  for (i=0; i<nr_old; i++) {
    SG_SweepStacks(old[i]);
  }

  if (accept) {
    SG_UnmarkStack(accept);
  }

  if (new) {
    SG_UnmarkStacks(new);
  }

#ifdef MEMSTATS
  if(SG_DEBUG) {
    fprintf(SG_log(), "[After  GC] ");
    SG_PrintCurAllocStats();
  }
#endif

  return new;
}
