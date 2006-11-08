#ifndef MEPT_LENGTH
#define MEPT_LENGTH
#include <MEPT.h>

PT_Tree PT_annotateTreeWithLength(PT_Tree tree);
PT_ParseTree PT_annotateParseTreeWithLength(PT_ParseTree parse_tree);
int PT_getParseTreeLengthAnno(PT_ParseTree parse_tree);
int PT_getTreeLengthAnno(PT_Tree tree);
PT_Tree PT_setTreeLengthAnno(PT_Tree tree, int length);
PT_ParseTree PT_setParseTreeLengthAnno(PT_ParseTree parse_tree, int length);
unsigned long PT_getTreeLength(PT_Tree tree);

#endif
