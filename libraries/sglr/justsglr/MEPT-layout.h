#ifndef MEPT_LAYOUT
#define MEPT_LAYOUT
#include <MEPT.h>

PT_ParseTree PT_replaceParseTreeLayout(PT_ParseTree tree, PT_Tree layout);
PT_Tree PT_replaceTreeLayout(PT_Tree tree, PT_Tree layout);
PT_Tree PT_removeTreeAllLayoutAndAnnotations(PT_Tree tree);
PT_Tree PT_makeTreeLayoutEmpty();
ATbool PT_isTreeLayout(PT_Tree tree);
PT_Tree PT_makeTreeLayoutNonEmpty(PT_Args args);
PT_Tree PT_makeTreeLayoutFromString(const char *str);

#endif
