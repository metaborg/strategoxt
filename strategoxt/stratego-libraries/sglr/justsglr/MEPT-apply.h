#ifndef MEPT_APPLY
#define MEPT_APPLY
#include <MEPT.h>

PT_Tree PT_applyFunctionToArgs(const char *function, const char *sort,
			       PT_Args args);
PT_ParseTree PT_applyFunctionToArgsParseTree(const char *function,
					     const char *sort, PT_Args args);
PT_Tree PT_applyFunctionToTree(const char *function, const char *sort,
			       int nArgs, ...);
PT_Tree PT_applyFunction(const char* function, PT_Symbol rhs, PT_Args args,
			 PT_Attributes attributes);

#endif
