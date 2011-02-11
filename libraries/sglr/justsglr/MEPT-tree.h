#ifndef MEPT_TREE
#define MEPT_TREE
#include <MEPT.h>
#include <aterm2.h>

PT_Tree PT_getTreeBracketTree(PT_Tree tree);


PT_Tree PT_makeTreeLexToCf(PT_Symbol sym, PT_Tree tree);
PT_Tree PT_makeTreeLit(const char* string);
PT_Tree PT_makeTreeCilit(const char* string);
PT_Tree PT_makeTreeFlatLexical(PT_Args charList);
PT_Tree PT_makeTreeFlatLexicalFromString(const char *str);

ATbool PT_isTreeApplList(PT_Tree tree);
ATbool PT_isTreeAlt(PT_Tree tree);
ATbool PT_isTreeLit(PT_Tree tree);
ATbool PT_isTreeCilit(PT_Tree tree);
ATbool PT_isTreeSeq(PT_Tree tree);
ATbool PT_isTreeOpt(PT_Tree tree);
ATbool PT_isTreeVar(PT_Tree tree);
ATbool PT_isTreeVarList(PT_Tree tree);
ATbool PT_isTreeVarListStar(PT_Tree tree);
ATbool PT_isTreeVarListPlus(PT_Tree tree);
ATbool PT_isTreeLexical(PT_Tree tree);
ATbool PT_isTreeLexicalInjection(PT_Tree tree);
ATbool PT_isTreeFlatLexical(PT_Tree tree);
ATbool PT_isTreeBracket(PT_Tree tree);

#endif
