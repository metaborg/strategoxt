#ifndef POS_INFO_H
#define POS_INFO_H
#include <Location.h>
#include <MEPT.h>
#include <aterm2.h>

PT_ParseTree PT_addParseTreePosInfoSome(const char *path,
					PT_ParseTree parsetree, int depth,
					ATbool layout, ATbool literals);
PT_ParseTree PT_addParseTreePosInfo(const char *pathInfo, PT_ParseTree tree);
PT_ParseTree PT_addParseTreePosInfoToDepth(const char *pathInfo,
					   PT_ParseTree tree, int maxDepth);
PT_Tree PT_addTreePosInfoToDepth(const char *pathInfo, PT_Tree tree,
				 int maxDepth, int start_line, int start_col);
PT_Tree PT_addTreePosInfoSome(const char *path, PT_Tree tree, int depth,
			      ATbool layout, ATbool literals, int start_line,
			      int start_col);

ATbool PT_hasTreeLocation(PT_Tree tree);
LOC_Location PT_getTreeLocation(PT_Tree tree);
PT_Tree PT_removeTreeLocation(PT_Tree tree);
ATbool PT_getTreePosInfo(PT_Tree tree, char **path, int *start_line,
			 int *start_col, int *end_line, int *end_col);
PT_Tree PT_findTreeAtOffset(PT_Tree tree, int offset);
PT_Tree PT_findTreeAtLineColumn(PT_Tree tree, int line, int column);

PT_Args PT_findArgsWithLocation(PT_Args args);
PT_Tree PT_findTreeParent(PT_Tree needle, PT_Tree haystack);

#endif
