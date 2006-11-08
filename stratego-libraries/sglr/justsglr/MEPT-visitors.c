#include <MEPT-visitors.h>


PT_Symbols PT_foreachSymbolInSymbols(PT_Symbols symbols,
				     PT_SymbolVisitor visitor,
                                     PT_SymbolVisitorData data)
{
  ATermList store;
  PT_Symbols newSymbols = PT_makeSymbolsEmpty();

  /* apply func to each element */
  store = ATempty;
  while (PT_hasSymbolsHead(symbols)) {
    store = ATinsert(store,
                     PT_SymbolToTerm(
                     visitor(PT_getSymbolsHead(symbols), data)));
    if (PT_hasSymbolsTail(symbols)) {
      symbols = PT_getSymbolsTail(symbols);
    }
    else {
      break;
    }
  }

  /* create new list */
  for (; !ATisEmpty(store); store = ATgetNext(store)) {
    PT_Symbol newSymbol = PT_SymbolFromTerm(ATgetFirst(store));
    newSymbols = PT_makeSymbolsMany(newSymbol, newSymbols);
  }

  return newSymbols;
}


PT_Args PT_foreachTreeInArgs(PT_Args args, PT_TreeVisitor visitor,
                             PT_TreeVisitorData data)
{
  ATermList store;
  PT_Args newArgs = PT_makeArgsEmpty();

  /* apply func to each element */
  for (store = ATempty;
      PT_hasArgsHead(args);
      args = PT_getArgsTail(args)) {
    store = ATinsert(store,
                     PT_TreeToTerm(
                     visitor(PT_getArgsHead(args),data)));
  }

  /* create new list */
  for (; !ATisEmpty(store); store = ATgetNext(store)) {
    PT_Tree newTree = PT_TreeFromTerm(ATgetFirst(store));
    newArgs = PT_makeArgsMany(newTree, newArgs);
  }

  return newArgs;
}


PT_Attrs PT_foreachAttrInAttrs(PT_Attrs attrs, PT_AttrVisitor visitor,
                               PT_AttrVisitorData data)
{
  ATermList store;
  PT_Attrs newAttrs;

  /* apply func to each element */
  store = ATempty;
  while (PT_hasAttrsHead(attrs)) {
    store = ATinsert(store,
                     PT_AttrToTerm(
                     visitor(PT_getAttrsHead(attrs), data)));
    if (PT_hasAttrsTail(attrs)) {
      attrs = PT_getAttrsTail(attrs);
    }
    else {
      break;
    }
  }        

  if (ATisEmpty(store)) {
    ATabort("PT_foreachAttrInAttrs: plus list contains no elements");
    return (PT_Attrs) NULL;
  }

  newAttrs = PT_makeAttrsSingle(PT_AttrFromTerm(ATgetFirst(store)));
  store = ATgetNext(store);

  /* create new list */
  for (; !ATisEmpty(store); store = ATgetNext(store)) {
    PT_Attr newAttr = PT_AttrFromTerm(ATgetFirst(store));
    newAttrs = PT_makeAttrsMany(newAttr,newAttrs);
  }

  return newAttrs;
}

