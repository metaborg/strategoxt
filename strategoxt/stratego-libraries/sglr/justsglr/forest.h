/*
 $Id: forest.h 16976 2005-11-10 13:40:12Z jurgenv $

 Parse forests

 The parser maintains a compact representation of a set of parse trees
 in the form of a parse forest. We use the generic terms to represent
 these.

 Parse forests are constructed using the functions |SG_Apply|, and
 |SG_Amb|. |SG_Apply| denotes the application of a function to a list
 of arguments.  The function |SG_Amb| actually constructs forests, by
 maintaining a lookup structure that maps terms onto sets of terms: an
 ambiguity cluster.
 */

#ifndef _FOREST_H_
#define _FOREST_H_  1

#include  "parser.h"
#include  "ambi-tables.h"

typedef   ATermTable      multiset;

#define SG_IS_MARKED(t)     IS_MARKED(t->header)
#define SG_MARK(t)          SET_MARK(t->header)
#define SG_UNMARK(t)        CLR_MARK(t->header)
#define SG_PROD_TO_NR(l)    (l-257)
#define SG_NR_TO_PROD(l)    (ATmakeInt(ATgetInt((ATermInt)l)+257))

int        SG_InjectionFilterSucceeded(int mode);
int        SG_CountEagernessFilterSucceeded(int mode);
int        SG_InjectionCountCalls(int Mode);
int        SG_CountEagernessGtrCalls(int Mode);
int        SG_AmbCalls(int Mode);

int        SG_MaxNrAmb(int Mode);

void       SG_Amb(parse_table *, tree, tree, size_t pos);

tree       SG_FilterTree(parse_table *pt, tree t);
tree       SG_SelectOnTopSort(parse_table *pt, tree t, const char *sort); 
forest     SG_YieldTree(parse_table *pt, tree t);
tree       SG_Apply(parse_table *, label, ATermList, int attr);
ATerm      SG_TreeType(ATerm);
label      SG_GetRejectProdLabel(tree applprod);
label      SG_GetApplProdLabel(tree appl);

#endif  /* _FOREST_H_ */
