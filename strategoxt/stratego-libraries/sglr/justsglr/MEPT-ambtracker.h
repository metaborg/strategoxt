#ifndef MEPT_AMBTRACKER
#define MEPT_AMBTRACKER
#include <aterm2.h>
#include <MEPT.h>

ATerm PT_reportTreeAmbiguities(const char *path, PT_Tree tree);
ATerm PT_reportParseTreeAmbiguities(const char *path, PT_ParseTree parsetree);
PT_Tree PT_findTopAmbiguity(PT_Tree tree);

#endif
