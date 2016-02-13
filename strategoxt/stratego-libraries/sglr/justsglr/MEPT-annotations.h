#ifndef MEPT_ANNOTATIONS_H
#define MEPT_ANNOTATIONS_H
#include <MEPT.h>
#include <aterm2.h>

ATerm PT_getTreeAnnotations(PT_Tree tree);
PT_Tree PT_setTreeAnnotations(PT_Tree tree, ATerm annos);
ATerm PT_getParseTreeAnnotations(PT_ParseTree tree);
ATerm PT_getParseTreeAnnotation(PT_ParseTree parse_tree, ATerm key);
PT_ParseTree PT_setParseTreeAnnotation(PT_ParseTree parse_tree, ATerm key, ATerm value);
ATerm PT_getTreeAnnotation(PT_Tree tree, ATerm key);
PT_Tree PT_setTreeAnnotation(PT_Tree tree, ATerm key, ATerm value);
PT_Tree PT_removeTreeAnnotations(PT_Tree arg);

#endif
