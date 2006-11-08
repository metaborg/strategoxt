#ifndef MEPT_RENAMING
#define MEPT_RENAMING
#include <MEPT.h>

PT_Tree PT_renameInTree(PT_Tree tree, PT_Symbol formalParam,
			PT_Symbol actualParam);
PT_ParseTree PT_renameInParseTree(PT_ParseTree parsetree,
				  PT_Symbol formalParam,
				  PT_Symbol actualParam);

#endif
