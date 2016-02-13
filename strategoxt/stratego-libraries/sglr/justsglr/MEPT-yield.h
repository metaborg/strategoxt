#ifndef YIELD_PT
#define YIELD_PT
#include <MEPT.h>
#include <aterm2.h>

char *PT_yieldTree(PT_Tree tree);
char *PT_yieldTreeToString(PT_Tree tree, ATbool yieldAllAmbiguities);
char *PT_yieldArgsToString(PT_Args args, ATbool yieldAllAmbiguities);
char *PT_yieldParseTreeToString(PT_ParseTree pt, ATbool yieldAllAmbiguities);
char *PT_yieldAnyToString(ATerm t, ATbool yieldAllAmbiguities);

void PT_yieldTreeToFile(PT_Tree tree, FILE *f, ATbool yieldAllAmbiguities);
void PT_yieldArgsToFile(PT_Args args, FILE *f, ATbool yieldAllAmbiguities);
void PT_yieldParseTreeToFile(PT_ParseTree pt, FILE *f, ATbool yieldAllAmbiguities);
void PT_yieldAnyToFile(ATerm t, FILE *f, ATbool yieldAllAmbiguities);

#endif
