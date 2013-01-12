#ifndef MEPT_START
#define MEPT_START
#include <MEPT.h>

PT_ParseTree PT_makeValidParseTreeFromTree(PT_Tree tree);
PT_ParseTree PT_makeParseTreeTree(PT_Symbols lhs, PT_Tree wsBefore,
				  PT_Tree tree, PT_Tree wsAfter, int ambs);
PT_Tree PT_getParseTreeTree(PT_ParseTree parsetree);
PT_Tree PT_getParseTreeLayoutBeforeTree(PT_ParseTree parsetree);
PT_Tree PT_getParseTreeLayoutAfterTree(PT_ParseTree parsetree);
PT_ParseTree PT_setParseTreeTree(PT_ParseTree parsetree, PT_Tree tree);
PT_ParseTree PT_setParseTreeLayoutBeforeTree(PT_ParseTree parsetree,
					     PT_Tree tree);
PT_ParseTree PT_setParseTreeLayoutAfterTree(PT_ParseTree parsetree,
					    PT_Tree tree);
PT_Tree PT_getParseTreeTop(PT_ParseTree parseTree);
PT_ParseTree PT_setParseTreeTop(PT_ParseTree parseTree, PT_Tree top);

#endif
