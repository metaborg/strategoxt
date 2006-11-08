#include <MEPT.h>

/** 
 * \file
 * Functions that manipulate generic ATerm annotations on parse trees.
 */


ATerm PT_getTreeAnnotations(PT_Tree tree)
{
  return AT_getAnnotations((ATerm) tree);
}


PT_Tree PT_setTreeAnnotations(PT_Tree tree, ATerm annos)
{
  return (PT_Tree)AT_setAnnotations((ATerm) tree, annos);
}


PT_Tree PT_removeTreeAnnotations(PT_Tree arg)
{
  ATerm atArg = PT_TreeToTerm(arg);

  if (AT_getAnnotations(atArg) != NULL) {
    atArg = AT_removeAnnotations(atArg);
  }

  return PT_TreeFromTerm(atArg);
}


ATerm PT_getTreeAnnotation(PT_Tree tree, ATerm key)
{
  ATerm atTree = PT_TreeToTerm(tree);

  return ATgetAnnotation(atTree, key);
}

PT_Tree PT_setTreeAnnotation(PT_Tree tree, ATerm key, ATerm value)
{
  ATerm t = PT_TreeToTerm(tree);

  t = ATsetAnnotation(t, key, value);

  return PT_TreeFromTerm(t);
}


ATerm PT_getParseTreeAnnotation(PT_ParseTree parse_tree, ATerm key)
{
  ATerm atParseTree = PT_ParseTreeToTerm(parse_tree);

  return ATgetAnnotation(atParseTree, key);
}


PT_ParseTree PT_setParseTreeAnnotation(PT_ParseTree parse_tree, ATerm key, ATerm value)
{
  ATerm t = PT_ParseTreeToTerm(parse_tree);

  t = ATsetAnnotation(t, key, value);

  return PT_ParseTreeFromTerm(t);
}


ATerm PT_getParseTreeAnnotations(PT_ParseTree pt)
{
  return AT_getAnnotations((ATerm) pt);
}

