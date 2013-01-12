#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "MEPT.h"

/**
 * Converts a string to an ATermList of integers (ASCII values). 
 * \param[in] str An ASCII string
 * \return An ATermList containing the ASCII values of #arg as ATermInts
 */
ATerm PT_stringToChars(const char *str) {
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

/**
 * Converts an ASCII char to an ATermInt. 
 * \param[in] ch an ASCII character
 * \return An ATerm representing the ASCII value of #arg
 */
ATerm PT_byteToChar(char ch) {
    return (ATerm) ATmakeInt(ch);
}

/**
 * Converts a list of integers (ASCII values) to a C string. 
 * \param[in] arg An ATermList with ATermInts, such as [32,32,10]
 * \return String containing the characters from #arg as characters
 */
char *PT_charsToString(ATerm arg) {
  ATermList list = (ATermList) arg;
  int len = ATgetLength(list);
  int i;
  char *str;

  str = (char *) malloc(len+1);
  if (str == NULL) {
      return NULL;
  }

  for (i = 0; !ATisEmpty(list); list = ATgetNext(list), i++) {
    str[i] = (char) ATgetInt((ATermInt) ATgetFirst(list));
  }
  str[i] = '\0';

  return str;
}

char PT_charToByte(ATerm arg) {
    return (char) ATgetInt((ATermInt) arg);
}


typedef struct ATerm _PT_ParseTree;
typedef struct ATerm _PT_Tree;
typedef struct ATerm _PT_Args;
typedef struct ATerm _PT_Production;
typedef struct ATerm _PT_Attributes;
typedef struct ATerm _PT_Attrs;
typedef struct ATerm _PT_Attr;
typedef struct ATerm _PT_Associativity;
typedef struct ATerm _PT_Symbol;
typedef struct ATerm _PT_Symbols;
typedef struct ATerm _PT_CharRange;
typedef struct ATerm _PT_CharRanges;

/**
 * Initializes the full API. Forgetting to call this function before using the API will lead to strange behaviour. ATinit() needs to be called before this function.
 */
void PT_initMEPTApi(void) {
  init_MEPT_dict();
}

/**
 * Protect a PT_ParseTree from the ATerm garbage collector. Every PT_ParseTree that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_ParseTree
 */
void PT_protectParseTree(PT_ParseTree *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_ParseTree from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_ParseTree
 */
void PT_unprotectParseTree(PT_ParseTree *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Tree from the ATerm garbage collector. Every PT_Tree that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Tree
 */
void PT_protectTree(PT_Tree *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Tree from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Tree
 */
void PT_unprotectTree(PT_Tree *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Args from the ATerm garbage collector. Every PT_Args that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Args
 */
void PT_protectArgs(PT_Args *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Args from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Args
 */
void PT_unprotectArgs(PT_Args *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Production from the ATerm garbage collector. Every PT_Production that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Production
 */
void PT_protectProduction(PT_Production *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Production from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Production
 */
void PT_unprotectProduction(PT_Production *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Attributes from the ATerm garbage collector. Every PT_Attributes that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Attributes
 */
void PT_protectAttributes(PT_Attributes *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Attributes from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Attributes
 */
void PT_unprotectAttributes(PT_Attributes *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Attrs from the ATerm garbage collector. Every PT_Attrs that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Attrs
 */
void PT_protectAttrs(PT_Attrs *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Attrs from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Attrs
 */
void PT_unprotectAttrs(PT_Attrs *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Attr from the ATerm garbage collector. Every PT_Attr that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Attr
 */
void PT_protectAttr(PT_Attr *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Attr from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Attr
 */
void PT_unprotectAttr(PT_Attr *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Associativity from the ATerm garbage collector. Every PT_Associativity that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Associativity
 */
void PT_protectAssociativity(PT_Associativity *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Associativity from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Associativity
 */
void PT_unprotectAssociativity(PT_Associativity *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Symbol from the ATerm garbage collector. Every PT_Symbol that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Symbol
 */
void PT_protectSymbol(PT_Symbol *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Symbol from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Symbol
 */
void PT_unprotectSymbol(PT_Symbol *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_Symbols from the ATerm garbage collector. Every PT_Symbols that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_Symbols
 */
void PT_protectSymbols(PT_Symbols *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_Symbols from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_Symbols
 */
void PT_unprotectSymbols(PT_Symbols *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_CharRange from the ATerm garbage collector. Every PT_CharRange that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_CharRange
 */
void PT_protectCharRange(PT_CharRange *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_CharRange from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_CharRange
 */
void PT_unprotectCharRange(PT_CharRange *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a PT_CharRanges from the ATerm garbage collector. Every PT_CharRanges that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a PT_CharRanges
 */
void PT_protectCharRanges(PT_CharRanges *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a PT_CharRanges from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a PT_CharRanges
 */
void PT_unprotectCharRanges(PT_CharRanges *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Transforms an ATerm to a PT_ParseTree. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_ParseTree that was encoded by \arg
 */
PT_ParseTree PT_ParseTreeFromTerm(ATerm t) {
  return (PT_ParseTree)t;
}

/**
 * Transforms a PT_ParseTreeto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_ParseTree to be converted
 * \return ATerm that represents the PT_ParseTree
 */
ATerm PT_ParseTreeToTerm(PT_ParseTree arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Tree. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Tree that was encoded by \arg
 */
PT_Tree PT_TreeFromTerm(ATerm t) {
  return (PT_Tree)t;
}

/**
 * Transforms a PT_Treeto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Tree to be converted
 * \return ATerm that represents the PT_Tree
 */
ATerm PT_TreeToTerm(PT_Tree arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Args. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Args that was encoded by \arg
 */
PT_Args PT_ArgsFromTerm(ATerm t) {
  return (PT_Args)t;
}

/**
 * Transforms a PT_Argsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Args to be converted
 * \return ATerm that represents the PT_Args
 */
ATerm PT_ArgsToTerm(PT_Args arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Production. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Production that was encoded by \arg
 */
PT_Production PT_ProductionFromTerm(ATerm t) {
  return (PT_Production)t;
}

/**
 * Transforms a PT_Productionto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Production to be converted
 * \return ATerm that represents the PT_Production
 */
ATerm PT_ProductionToTerm(PT_Production arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Attributes. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Attributes that was encoded by \arg
 */
PT_Attributes PT_AttributesFromTerm(ATerm t) {
  return (PT_Attributes)t;
}

/**
 * Transforms a PT_Attributesto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Attributes to be converted
 * \return ATerm that represents the PT_Attributes
 */
ATerm PT_AttributesToTerm(PT_Attributes arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Attrs. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Attrs that was encoded by \arg
 */
PT_Attrs PT_AttrsFromTerm(ATerm t) {
  return (PT_Attrs)t;
}

/**
 * Transforms a PT_Attrsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Attrs to be converted
 * \return ATerm that represents the PT_Attrs
 */
ATerm PT_AttrsToTerm(PT_Attrs arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Attr. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Attr that was encoded by \arg
 */
PT_Attr PT_AttrFromTerm(ATerm t) {
  return (PT_Attr)t;
}

/**
 * Transforms a PT_Attrto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Attr to be converted
 * \return ATerm that represents the PT_Attr
 */
ATerm PT_AttrToTerm(PT_Attr arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Associativity. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Associativity that was encoded by \arg
 */
PT_Associativity PT_AssociativityFromTerm(ATerm t) {
  return (PT_Associativity)t;
}

/**
 * Transforms a PT_Associativityto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Associativity to be converted
 * \return ATerm that represents the PT_Associativity
 */
ATerm PT_AssociativityToTerm(PT_Associativity arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Symbol. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Symbol that was encoded by \arg
 */
PT_Symbol PT_SymbolFromTerm(ATerm t) {
  return (PT_Symbol)t;
}

/**
 * Transforms a PT_Symbolto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Symbol to be converted
 * \return ATerm that represents the PT_Symbol
 */
ATerm PT_SymbolToTerm(PT_Symbol arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_Symbols. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_Symbols that was encoded by \arg
 */
PT_Symbols PT_SymbolsFromTerm(ATerm t) {
  return (PT_Symbols)t;
}

/**
 * Transforms a PT_Symbolsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_Symbols to be converted
 * \return ATerm that represents the PT_Symbols
 */
ATerm PT_SymbolsToTerm(PT_Symbols arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_CharRange. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_CharRange that was encoded by \arg
 */
PT_CharRange PT_CharRangeFromTerm(ATerm t) {
  return (PT_CharRange)t;
}

/**
 * Transforms a PT_CharRangeto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_CharRange to be converted
 * \return ATerm that represents the PT_CharRange
 */
ATerm PT_CharRangeToTerm(PT_CharRange arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a PT_CharRanges. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return PT_CharRanges that was encoded by \arg
 */
PT_CharRanges PT_CharRangesFromTerm(ATerm t) {
  return (PT_CharRanges)t;
}

/**
 * Transforms a PT_CharRangesto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg PT_CharRanges to be converted
 * \return ATerm that represents the PT_CharRanges
 */
ATerm PT_CharRangesToTerm(PT_CharRanges arg) {
  return (ATerm)arg;
}

/**
 * Retrieve the length of a PT_Args. 
 * \param[in] arg input PT_Args
 * \return The number of elements in the PT_Args
 */
int PT_getArgsLength (PT_Args arg) {
  return ATgetLength((ATermList) arg);
}

/**
 * Reverse a PT_Args. 
 * \param[in] arg PT_Args to be reversed
 * \return a reversed #arg
 */
PT_Args PT_reverseArgs(PT_Args arg) {
  return (PT_Args) ATreverse((ATermList) arg);
}

/**
 * Append a PT_Tree to the end of a PT_Args. 
 * \param[in] arg PT_Args to append the PT_Tree to
 * \param[in] elem PT_Tree to be appended
 * \return new PT_Args with #elem appended
 */
PT_Args PT_appendArgs(PT_Args arg, PT_Tree elem) {
  return (PT_Args) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

/**
 * Concatenate two PT_Argss. 
 * \param[in] arg0 first PT_Args
 * \param[in] arg1 second PT_Args
 * \return PT_Args with the elements of #arg0 before the elements of #arg1
 */
PT_Args PT_concatArgs(PT_Args arg0, PT_Args arg1) {
  return (PT_Args) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a PT_Args. 
 * \param[in] arg PT_Args to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new PT_Args with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
PT_Args PT_sliceArgs(PT_Args arg, int start, int end) {
  return (PT_Args) ATgetSlice((ATermList) arg, start, end);
}

/**
 * Retrieve the PT_Tree at #index from a PT_Args. 
 * \param[in] arg PT_Args to retrieve the PT_Tree from
 * \param[in] index index to use to point in the PT_Args
 * \return PT_Tree at position #index in #arg
 */
PT_Tree PT_getArgsTreeAt(PT_Args arg, int index) {
 return (PT_Tree)ATelementAt((ATermList) arg,index);
}

/**
 * Replace the PT_Tree at #index from a PT_Args by a new one. 
 * \param[in] arg PT_Args to retrieve the PT_Tree from
 * \param[in] elem new PT_Tree to replace another
 * \param[in] index index to use to point in the PT_Args
 * \return A new PT_Argswith #elem replaced in #arg at position #index
 */
PT_Args PT_replaceArgsTreeAt(PT_Args arg, PT_Tree elem, int index) {
 return (PT_Args) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

/**
 * Builds a PT_Args of 2 consecutive elements. 
 * \param[in] elem1 One PT_Tree element of the new PT_Args
 * \param[in] elem2 One PT_Tree element of the new PT_Args
 * \return A new PT_Args consisting of 2 PT_Trees
 */
PT_Args PT_makeArgs2(PT_Tree elem1, PT_Tree elem2) {
  return (PT_Args) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2));
}

/**
 * Builds a PT_Args of 3 consecutive elements. 
 * \param[in] elem1 One PT_Tree element of the new PT_Args
 * \param[in] elem2 One PT_Tree element of the new PT_Args
 * \param[in] elem3 One PT_Tree element of the new PT_Args
 * \return A new PT_Args consisting of 3 PT_Trees
 */
PT_Args PT_makeArgs3(PT_Tree elem1, PT_Tree elem2, PT_Tree elem3) {
  return (PT_Args) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3));
}

/**
 * Builds a PT_Args of 4 consecutive elements. 
 * \param[in] elem1 One PT_Tree element of the new PT_Args
 * \param[in] elem2 One PT_Tree element of the new PT_Args
 * \param[in] elem3 One PT_Tree element of the new PT_Args
 * \param[in] elem4 One PT_Tree element of the new PT_Args
 * \return A new PT_Args consisting of 4 PT_Trees
 */
PT_Args PT_makeArgs4(PT_Tree elem1, PT_Tree elem2, PT_Tree elem3, PT_Tree elem4) {
  return (PT_Args) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4));
}

/**
 * Builds a PT_Args of 5 consecutive elements. 
 * \param[in] elem1 One PT_Tree element of the new PT_Args
 * \param[in] elem2 One PT_Tree element of the new PT_Args
 * \param[in] elem3 One PT_Tree element of the new PT_Args
 * \param[in] elem4 One PT_Tree element of the new PT_Args
 * \param[in] elem5 One PT_Tree element of the new PT_Args
 * \return A new PT_Args consisting of 5 PT_Trees
 */
PT_Args PT_makeArgs5(PT_Tree elem1, PT_Tree elem2, PT_Tree elem3, PT_Tree elem4, PT_Tree elem5) {
  return (PT_Args) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5));
}

/**
 * Builds a PT_Args of 6 consecutive elements. 
 * \param[in] elem1 One PT_Tree element of the new PT_Args
 * \param[in] elem2 One PT_Tree element of the new PT_Args
 * \param[in] elem3 One PT_Tree element of the new PT_Args
 * \param[in] elem4 One PT_Tree element of the new PT_Args
 * \param[in] elem5 One PT_Tree element of the new PT_Args
 * \param[in] elem6 One PT_Tree element of the new PT_Args
 * \return A new PT_Args consisting of 6 PT_Trees
 */
PT_Args PT_makeArgs6(PT_Tree elem1, PT_Tree elem2, PT_Tree elem3, PT_Tree elem4, PT_Tree elem5, PT_Tree elem6) {
  return (PT_Args) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem6));
}

/**
 * Retrieve the length of a PT_Attrs. 
 * \param[in] arg input PT_Attrs
 * \return The number of elements in the PT_Attrs
 */
int PT_getAttrsLength (PT_Attrs arg) {
  return ATgetLength((ATermList) arg);
}

/**
 * Reverse a PT_Attrs. 
 * \param[in] arg PT_Attrs to be reversed
 * \return a reversed #arg
 */
PT_Attrs PT_reverseAttrs(PT_Attrs arg) {
  return (PT_Attrs) ATreverse((ATermList) arg);
}

/**
 * Append a PT_Attr to the end of a PT_Attrs. 
 * \param[in] arg PT_Attrs to append the PT_Attr to
 * \param[in] elem PT_Attr to be appended
 * \return new PT_Attrs with #elem appended
 */
PT_Attrs PT_appendAttrs(PT_Attrs arg, PT_Attr elem) {
  return (PT_Attrs) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

/**
 * Concatenate two PT_Attrss. 
 * \param[in] arg0 first PT_Attrs
 * \param[in] arg1 second PT_Attrs
 * \return PT_Attrs with the elements of #arg0 before the elements of #arg1
 */
PT_Attrs PT_concatAttrs(PT_Attrs arg0, PT_Attrs arg1) {
  return (PT_Attrs) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a PT_Attrs. 
 * \param[in] arg PT_Attrs to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new PT_Attrs with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
PT_Attrs PT_sliceAttrs(PT_Attrs arg, int start, int end) {
  return (PT_Attrs) ATgetSlice((ATermList) arg, start, end);
}

/**
 * Retrieve the PT_Attr at #index from a PT_Attrs. 
 * \param[in] arg PT_Attrs to retrieve the PT_Attr from
 * \param[in] index index to use to point in the PT_Attrs
 * \return PT_Attr at position #index in #arg
 */
PT_Attr PT_getAttrsAttrAt(PT_Attrs arg, int index) {
 return (PT_Attr)ATelementAt((ATermList) arg,index);
}

/**
 * Replace the PT_Attr at #index from a PT_Attrs by a new one. 
 * \param[in] arg PT_Attrs to retrieve the PT_Attr from
 * \param[in] elem new PT_Attr to replace another
 * \param[in] index index to use to point in the PT_Attrs
 * \return A new PT_Attrswith #elem replaced in #arg at position #index
 */
PT_Attrs PT_replaceAttrsAttrAt(PT_Attrs arg, PT_Attr elem, int index) {
 return (PT_Attrs) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

/**
 * Builds a PT_Attrs of 2 consecutive elements. 
 * \param[in] elem1 One PT_Attr element of the new PT_Attrs
 * \param[in] elem2 One PT_Attr element of the new PT_Attrs
 * \return A new PT_Attrs consisting of 2 PT_Attrs
 */
PT_Attrs PT_makeAttrs2(PT_Attr elem1, PT_Attr elem2) {
  return (PT_Attrs) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2));
}

/**
 * Builds a PT_Attrs of 3 consecutive elements. 
 * \param[in] elem1 One PT_Attr element of the new PT_Attrs
 * \param[in] elem2 One PT_Attr element of the new PT_Attrs
 * \param[in] elem3 One PT_Attr element of the new PT_Attrs
 * \return A new PT_Attrs consisting of 3 PT_Attrs
 */
PT_Attrs PT_makeAttrs3(PT_Attr elem1, PT_Attr elem2, PT_Attr elem3) {
  return (PT_Attrs) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3));
}

/**
 * Builds a PT_Attrs of 4 consecutive elements. 
 * \param[in] elem1 One PT_Attr element of the new PT_Attrs
 * \param[in] elem2 One PT_Attr element of the new PT_Attrs
 * \param[in] elem3 One PT_Attr element of the new PT_Attrs
 * \param[in] elem4 One PT_Attr element of the new PT_Attrs
 * \return A new PT_Attrs consisting of 4 PT_Attrs
 */
PT_Attrs PT_makeAttrs4(PT_Attr elem1, PT_Attr elem2, PT_Attr elem3, PT_Attr elem4) {
  return (PT_Attrs) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4));
}

/**
 * Builds a PT_Attrs of 5 consecutive elements. 
 * \param[in] elem1 One PT_Attr element of the new PT_Attrs
 * \param[in] elem2 One PT_Attr element of the new PT_Attrs
 * \param[in] elem3 One PT_Attr element of the new PT_Attrs
 * \param[in] elem4 One PT_Attr element of the new PT_Attrs
 * \param[in] elem5 One PT_Attr element of the new PT_Attrs
 * \return A new PT_Attrs consisting of 5 PT_Attrs
 */
PT_Attrs PT_makeAttrs5(PT_Attr elem1, PT_Attr elem2, PT_Attr elem3, PT_Attr elem4, PT_Attr elem5) {
  return (PT_Attrs) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5));
}

/**
 * Builds a PT_Attrs of 6 consecutive elements. 
 * \param[in] elem1 One PT_Attr element of the new PT_Attrs
 * \param[in] elem2 One PT_Attr element of the new PT_Attrs
 * \param[in] elem3 One PT_Attr element of the new PT_Attrs
 * \param[in] elem4 One PT_Attr element of the new PT_Attrs
 * \param[in] elem5 One PT_Attr element of the new PT_Attrs
 * \param[in] elem6 One PT_Attr element of the new PT_Attrs
 * \return A new PT_Attrs consisting of 6 PT_Attrs
 */
PT_Attrs PT_makeAttrs6(PT_Attr elem1, PT_Attr elem2, PT_Attr elem3, PT_Attr elem4, PT_Attr elem5, PT_Attr elem6) {
  return (PT_Attrs) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem6));
}

/**
 * Retrieve the length of a PT_Symbols. 
 * \param[in] arg input PT_Symbols
 * \return The number of elements in the PT_Symbols
 */
int PT_getSymbolsLength (PT_Symbols arg) {
  return ATgetLength((ATermList) arg);
}

/**
 * Reverse a PT_Symbols. 
 * \param[in] arg PT_Symbols to be reversed
 * \return a reversed #arg
 */
PT_Symbols PT_reverseSymbols(PT_Symbols arg) {
  return (PT_Symbols) ATreverse((ATermList) arg);
}

/**
 * Append a PT_Symbol to the end of a PT_Symbols. 
 * \param[in] arg PT_Symbols to append the PT_Symbol to
 * \param[in] elem PT_Symbol to be appended
 * \return new PT_Symbols with #elem appended
 */
PT_Symbols PT_appendSymbols(PT_Symbols arg, PT_Symbol elem) {
  return (PT_Symbols) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

/**
 * Concatenate two PT_Symbolss. 
 * \param[in] arg0 first PT_Symbols
 * \param[in] arg1 second PT_Symbols
 * \return PT_Symbols with the elements of #arg0 before the elements of #arg1
 */
PT_Symbols PT_concatSymbols(PT_Symbols arg0, PT_Symbols arg1) {
  return (PT_Symbols) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a PT_Symbols. 
 * \param[in] arg PT_Symbols to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new PT_Symbols with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
PT_Symbols PT_sliceSymbols(PT_Symbols arg, int start, int end) {
  return (PT_Symbols) ATgetSlice((ATermList) arg, start, end);
}

/**
 * Retrieve the PT_Symbol at #index from a PT_Symbols. 
 * \param[in] arg PT_Symbols to retrieve the PT_Symbol from
 * \param[in] index index to use to point in the PT_Symbols
 * \return PT_Symbol at position #index in #arg
 */
PT_Symbol PT_getSymbolsSymbolAt(PT_Symbols arg, int index) {
 return (PT_Symbol)ATelementAt((ATermList) arg,index);
}

/**
 * Replace the PT_Symbol at #index from a PT_Symbols by a new one. 
 * \param[in] arg PT_Symbols to retrieve the PT_Symbol from
 * \param[in] elem new PT_Symbol to replace another
 * \param[in] index index to use to point in the PT_Symbols
 * \return A new PT_Symbolswith #elem replaced in #arg at position #index
 */
PT_Symbols PT_replaceSymbolsSymbolAt(PT_Symbols arg, PT_Symbol elem, int index) {
 return (PT_Symbols) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

/**
 * Builds a PT_Symbols of 2 consecutive elements. 
 * \param[in] elem1 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem2 One PT_Symbol element of the new PT_Symbols
 * \return A new PT_Symbols consisting of 2 PT_Symbols
 */
PT_Symbols PT_makeSymbols2(PT_Symbol elem1, PT_Symbol elem2) {
  return (PT_Symbols) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2));
}

/**
 * Builds a PT_Symbols of 3 consecutive elements. 
 * \param[in] elem1 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem2 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem3 One PT_Symbol element of the new PT_Symbols
 * \return A new PT_Symbols consisting of 3 PT_Symbols
 */
PT_Symbols PT_makeSymbols3(PT_Symbol elem1, PT_Symbol elem2, PT_Symbol elem3) {
  return (PT_Symbols) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3));
}

/**
 * Builds a PT_Symbols of 4 consecutive elements. 
 * \param[in] elem1 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem2 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem3 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem4 One PT_Symbol element of the new PT_Symbols
 * \return A new PT_Symbols consisting of 4 PT_Symbols
 */
PT_Symbols PT_makeSymbols4(PT_Symbol elem1, PT_Symbol elem2, PT_Symbol elem3, PT_Symbol elem4) {
  return (PT_Symbols) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4));
}

/**
 * Builds a PT_Symbols of 5 consecutive elements. 
 * \param[in] elem1 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem2 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem3 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem4 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem5 One PT_Symbol element of the new PT_Symbols
 * \return A new PT_Symbols consisting of 5 PT_Symbols
 */
PT_Symbols PT_makeSymbols5(PT_Symbol elem1, PT_Symbol elem2, PT_Symbol elem3, PT_Symbol elem4, PT_Symbol elem5) {
  return (PT_Symbols) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5));
}

/**
 * Builds a PT_Symbols of 6 consecutive elements. 
 * \param[in] elem1 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem2 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem3 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem4 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem5 One PT_Symbol element of the new PT_Symbols
 * \param[in] elem6 One PT_Symbol element of the new PT_Symbols
 * \return A new PT_Symbols consisting of 6 PT_Symbols
 */
PT_Symbols PT_makeSymbols6(PT_Symbol elem1, PT_Symbol elem2, PT_Symbol elem3, PT_Symbol elem4, PT_Symbol elem5, PT_Symbol elem6) {
  return (PT_Symbols) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem6));
}

/**
 * Retrieve the length of a PT_CharRanges. 
 * \param[in] arg input PT_CharRanges
 * \return The number of elements in the PT_CharRanges
 */
int PT_getCharRangesLength (PT_CharRanges arg) {
  return ATgetLength((ATermList) arg);
}

/**
 * Reverse a PT_CharRanges. 
 * \param[in] arg PT_CharRanges to be reversed
 * \return a reversed #arg
 */
PT_CharRanges PT_reverseCharRanges(PT_CharRanges arg) {
  return (PT_CharRanges) ATreverse((ATermList) arg);
}

/**
 * Append a PT_CharRange to the end of a PT_CharRanges. 
 * \param[in] arg PT_CharRanges to append the PT_CharRange to
 * \param[in] elem PT_CharRange to be appended
 * \return new PT_CharRanges with #elem appended
 */
PT_CharRanges PT_appendCharRanges(PT_CharRanges arg, PT_CharRange elem) {
  return (PT_CharRanges) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

/**
 * Concatenate two PT_CharRangess. 
 * \param[in] arg0 first PT_CharRanges
 * \param[in] arg1 second PT_CharRanges
 * \return PT_CharRanges with the elements of #arg0 before the elements of #arg1
 */
PT_CharRanges PT_concatCharRanges(PT_CharRanges arg0, PT_CharRanges arg1) {
  return (PT_CharRanges) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a PT_CharRanges. 
 * \param[in] arg PT_CharRanges to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new PT_CharRanges with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
PT_CharRanges PT_sliceCharRanges(PT_CharRanges arg, int start, int end) {
  return (PT_CharRanges) ATgetSlice((ATermList) arg, start, end);
}

/**
 * Retrieve the PT_CharRange at #index from a PT_CharRanges. 
 * \param[in] arg PT_CharRanges to retrieve the PT_CharRange from
 * \param[in] index index to use to point in the PT_CharRanges
 * \return PT_CharRange at position #index in #arg
 */
PT_CharRange PT_getCharRangesCharRangeAt(PT_CharRanges arg, int index) {
 return (PT_CharRange)ATelementAt((ATermList) arg,index);
}

/**
 * Replace the PT_CharRange at #index from a PT_CharRanges by a new one. 
 * \param[in] arg PT_CharRanges to retrieve the PT_CharRange from
 * \param[in] elem new PT_CharRange to replace another
 * \param[in] index index to use to point in the PT_CharRanges
 * \return A new PT_CharRangeswith #elem replaced in #arg at position #index
 */
PT_CharRanges PT_replaceCharRangesCharRangeAt(PT_CharRanges arg, PT_CharRange elem, int index) {
 return (PT_CharRanges) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

/**
 * Builds a PT_CharRanges of 2 consecutive elements. 
 * \param[in] elem1 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem2 One PT_CharRange element of the new PT_CharRanges
 * \return A new PT_CharRanges consisting of 2 PT_CharRanges
 */
PT_CharRanges PT_makeCharRanges2(PT_CharRange elem1, PT_CharRange elem2) {
  return (PT_CharRanges) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2));
}

/**
 * Builds a PT_CharRanges of 3 consecutive elements. 
 * \param[in] elem1 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem2 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem3 One PT_CharRange element of the new PT_CharRanges
 * \return A new PT_CharRanges consisting of 3 PT_CharRanges
 */
PT_CharRanges PT_makeCharRanges3(PT_CharRange elem1, PT_CharRange elem2, PT_CharRange elem3) {
  return (PT_CharRanges) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3));
}

/**
 * Builds a PT_CharRanges of 4 consecutive elements. 
 * \param[in] elem1 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem2 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem3 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem4 One PT_CharRange element of the new PT_CharRanges
 * \return A new PT_CharRanges consisting of 4 PT_CharRanges
 */
PT_CharRanges PT_makeCharRanges4(PT_CharRange elem1, PT_CharRange elem2, PT_CharRange elem3, PT_CharRange elem4) {
  return (PT_CharRanges) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4));
}

/**
 * Builds a PT_CharRanges of 5 consecutive elements. 
 * \param[in] elem1 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem2 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem3 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem4 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem5 One PT_CharRange element of the new PT_CharRanges
 * \return A new PT_CharRanges consisting of 5 PT_CharRanges
 */
PT_CharRanges PT_makeCharRanges5(PT_CharRange elem1, PT_CharRange elem2, PT_CharRange elem3, PT_CharRange elem4, PT_CharRange elem5) {
  return (PT_CharRanges) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5));
}

/**
 * Builds a PT_CharRanges of 6 consecutive elements. 
 * \param[in] elem1 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem2 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem3 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem4 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem5 One PT_CharRange element of the new PT_CharRanges
 * \param[in] elem6 One PT_CharRange element of the new PT_CharRanges
 * \return A new PT_CharRanges consisting of 6 PT_CharRanges
 */
PT_CharRanges PT_makeCharRanges6(PT_CharRange elem1, PT_CharRange elem2, PT_CharRange elem3, PT_CharRange elem4, PT_CharRange elem5, PT_CharRange elem6) {
  return (PT_CharRanges) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem6));
}

/**
 * Constructs a top of type PT_ParseTree. Like all ATerm types, PT_ParseTrees are maximally shared.
 * \param[in] top a child of the new top
 * \param[in] ambCnt a child of the new top
 * \return A pointer to a top, either newly constructed or shared
 */
PT_ParseTree PT_makeParseTreeTop(PT_Tree top, int ambCnt) {
  return (PT_ParseTree)(ATerm)ATmakeAppl2(PT_afun0, (ATerm) top, (ATerm) (ATerm) ATmakeInt(ambCnt));
}
/**
 * Constructs a appl of type PT_Tree. Like all ATerm types, PT_Trees are maximally shared.
 * \param[in] prod a child of the new appl
 * \param[in] args a child of the new appl
 * \return A pointer to a appl, either newly constructed or shared
 */
PT_Tree PT_makeTreeAppl(PT_Production prod, PT_Args args) {
  return (PT_Tree)(ATerm)ATmakeAppl2(PT_afun1, (ATerm) prod, (ATerm) args);
}
/**
 * Constructs a cycle of type PT_Tree. Like all ATerm types, PT_Trees are maximally shared.
 * \param[in] symbol a child of the new cycle
 * \param[in] cycleLength a child of the new cycle
 * \return A pointer to a cycle, either newly constructed or shared
 */
PT_Tree PT_makeTreeCycle(PT_Symbol symbol, int cycleLength) {
  return (PT_Tree)(ATerm)ATmakeAppl2(PT_afun2, (ATerm) symbol, (ATerm) (ATerm) ATmakeInt(cycleLength));
}
/**
 * Constructs a amb of type PT_Tree. Like all ATerm types, PT_Trees are maximally shared.
 * \param[in] args a child of the new amb
 * \return A pointer to a amb, either newly constructed or shared
 */
PT_Tree PT_makeTreeAmb(PT_Args args) {
  return (PT_Tree)(ATerm)ATmakeAppl1(PT_afun3, (ATerm) args);
}
/**
 * Constructs a char of type PT_Tree. Like all ATerm types, PT_Trees are maximally shared.
 * \param[in] character a child of the new char
 * \return A pointer to a char, either newly constructed or shared
 */
PT_Tree PT_makeTreeChar(int character) {
  return (PT_Tree)(ATerm) (ATerm) ATmakeInt(character);
}
/**
 * Constructs a empty of type PT_Args. Like all ATerm types, PT_Argss are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
PT_Args PT_makeArgsEmpty(void) {
  return (PT_Args)(ATerm)ATempty;
}
/**
 * Constructs a single of type PT_Args. Like all ATerm types, PT_Argss are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
PT_Args PT_makeArgsSingle(PT_Tree head) {
  return (PT_Args)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type PT_Args. Like all ATerm types, PT_Argss are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
PT_Args PT_makeArgsMany(PT_Tree head, PT_Args tail) {
  return (PT_Args)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
/**
 * Constructs a Default of type PT_Production. Like all ATerm types, PT_Productions are maximally shared.
 * \param[in] lhs a child of the new Default
 * \param[in] rhs a child of the new Default
 * \param[in] attributes a child of the new Default
 * \return A pointer to a Default, either newly constructed or shared
 */
PT_Production PT_makeProductionDefault(PT_Symbols lhs, PT_Symbol rhs, PT_Attributes attributes) {
  return (PT_Production)(ATerm)ATmakeAppl3(PT_afun4, (ATerm) lhs, (ATerm) rhs, (ATerm) attributes);
}
/**
 * Constructs a List of type PT_Production. Like all ATerm types, PT_Productions are maximally shared.
 * \param[in] rhs a child of the new List
 * \return A pointer to a List, either newly constructed or shared
 */
PT_Production PT_makeProductionList(PT_Symbol rhs) {
  return (PT_Production)(ATerm)ATmakeAppl1(PT_afun5, (ATerm) rhs);
}
/**
 * Constructs a no-attrs of type PT_Attributes. Like all ATerm types, PT_Attributess are maximally shared.
 * \return A pointer to a no-attrs, either newly constructed or shared
 */
PT_Attributes PT_makeAttributesNoAttrs(void) {
  return (PT_Attributes)(ATerm)ATmakeAppl0(PT_afun6);
}
/**
 * Constructs a attrs of type PT_Attributes. Like all ATerm types, PT_Attributess are maximally shared.
 * \param[in] attrs a child of the new attrs
 * \return A pointer to a attrs, either newly constructed or shared
 */
PT_Attributes PT_makeAttributesAttrs(PT_Attrs attrs) {
  return (PT_Attributes)(ATerm)ATmakeAppl1(PT_afun7, (ATerm) attrs);
}
/**
 * Constructs a empty of type PT_Attrs. Like all ATerm types, PT_Attrss are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
PT_Attrs PT_makeAttrsEmpty(void) {
  return (PT_Attrs)(ATerm)ATempty;
}
/**
 * Constructs a single of type PT_Attrs. Like all ATerm types, PT_Attrss are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
PT_Attrs PT_makeAttrsSingle(PT_Attr head) {
  return (PT_Attrs)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type PT_Attrs. Like all ATerm types, PT_Attrss are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
PT_Attrs PT_makeAttrsMany(PT_Attr head, PT_Attrs tail) {
  return (PT_Attrs)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
/**
 * Constructs a assoc of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \param[in] assoc a child of the new assoc
 * \return A pointer to a assoc, either newly constructed or shared
 */
PT_Attr PT_makeAttrAssoc(PT_Associativity assoc) {
  return (PT_Attr)(ATerm)ATmakeAppl1(PT_afun8, (ATerm) assoc);
}
/**
 * Constructs a term of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \param[in] term a child of the new term
 * \return A pointer to a term, either newly constructed or shared
 */
PT_Attr PT_makeAttrTerm(ATerm term) {
  return (PT_Attr)(ATerm)ATmakeAppl1(PT_afun9, (ATerm) term);
}
/**
 * Constructs a id of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \param[in] moduleName a child of the new id
 * \return A pointer to a id, either newly constructed or shared
 */
PT_Attr PT_makeAttrId(const char* moduleName) {
  return (PT_Attr)(ATerm)ATmakeAppl1(PT_afun10, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(moduleName, 0, ATtrue)));
}
/**
 * Constructs a bracket of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \return A pointer to a bracket, either newly constructed or shared
 */
PT_Attr PT_makeAttrBracket(void) {
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun11);
}
/**
 * Constructs a reject of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \return A pointer to a reject, either newly constructed or shared
 */
PT_Attr PT_makeAttrReject(void) {
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun12);
}
/**
 * Constructs a prefer of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \return A pointer to a prefer, either newly constructed or shared
 */
PT_Attr PT_makeAttrPrefer(void) {
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun13);
}
/**
 * Constructs a avoid of type PT_Attr. Like all ATerm types, PT_Attrs are maximally shared.
 * \return A pointer to a avoid, either newly constructed or shared
 */
PT_Attr PT_makeAttrAvoid(void) {
  return (PT_Attr)(ATerm)ATmakeAppl0(PT_afun14);
}
/**
 * Constructs a left of type PT_Associativity. Like all ATerm types, PT_Associativitys are maximally shared.
 * \return A pointer to a left, either newly constructed or shared
 */
PT_Associativity PT_makeAssociativityLeft(void) {
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun15);
}
/**
 * Constructs a right of type PT_Associativity. Like all ATerm types, PT_Associativitys are maximally shared.
 * \return A pointer to a right, either newly constructed or shared
 */
PT_Associativity PT_makeAssociativityRight(void) {
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun16);
}
/**
 * Constructs a assoc of type PT_Associativity. Like all ATerm types, PT_Associativitys are maximally shared.
 * \return A pointer to a assoc, either newly constructed or shared
 */
PT_Associativity PT_makeAssociativityAssoc(void) {
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun17);
}
/**
 * Constructs a non-assoc of type PT_Associativity. Like all ATerm types, PT_Associativitys are maximally shared.
 * \return A pointer to a non-assoc, either newly constructed or shared
 */
PT_Associativity PT_makeAssociativityNonAssoc(void) {
  return (PT_Associativity)(ATerm)ATmakeAppl0(PT_afun18);
}
/**
 * Constructs a lit of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] string a child of the new lit
 * \return A pointer to a lit, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolLit(const char* string) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun19, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
}
/**
 * Constructs a cilit of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] string a child of the new cilit
 * \return A pointer to a cilit, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolCilit(const char* string) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun20, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
}
/**
 * Constructs a cf of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new cf
 * \return A pointer to a cf, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolCf(PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun21, (ATerm) symbol);
}
/**
 * Constructs a lex of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new lex
 * \return A pointer to a lex, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolLex(PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun22, (ATerm) symbol);
}
/**
 * Constructs a empty of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolEmpty(void) {
  return (PT_Symbol)(ATerm)ATmakeAppl0(PT_afun23);
}
/**
 * Constructs a seq of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbols a child of the new seq
 * \return A pointer to a seq, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolSeq(PT_Symbols symbols) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun24, (ATerm) symbols);
}
/**
 * Constructs a opt of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new opt
 * \return A pointer to a opt, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolOpt(PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun25, (ATerm) symbol);
}
/**
 * Constructs a alt of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] lhs a child of the new alt
 * \param[in] rhs a child of the new alt
 * \return A pointer to a alt, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolAlt(PT_Symbol lhs, PT_Symbol rhs) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun26, (ATerm) lhs, (ATerm) rhs);
}
/**
 * Constructs a tuple of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] head a child of the new tuple
 * \param[in] rest a child of the new tuple
 * \return A pointer to a tuple, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolTuple(PT_Symbol head, PT_Symbols rest) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun27, (ATerm) head, (ATerm) rest);
}
/**
 * Constructs a sort of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] string a child of the new sort
 * \return A pointer to a sort, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolSort(const char* string) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun28, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue)));
}
/**
 * Constructs a iter-plus of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new iter-plus
 * \return A pointer to a iter-plus, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolIterPlus(PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun29, (ATerm) symbol);
}
/**
 * Constructs a iter-star of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new iter-star
 * \return A pointer to a iter-star, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolIterStar(PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun30, (ATerm) symbol);
}
/**
 * Constructs a iter-plus-sep of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new iter-plus-sep
 * \param[in] separator a child of the new iter-plus-sep
 * \return A pointer to a iter-plus-sep, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolIterPlusSep(PT_Symbol symbol, PT_Symbol separator) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun31, (ATerm) symbol, (ATerm) separator);
}
/**
 * Constructs a iter-star-sep of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new iter-star-sep
 * \param[in] separator a child of the new iter-star-sep
 * \return A pointer to a iter-star-sep, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolIterStarSep(PT_Symbol symbol, PT_Symbol separator) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun32, (ATerm) symbol, (ATerm) separator);
}
/**
 * Constructs a iter-n of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new iter-n
 * \param[in] number a child of the new iter-n
 * \return A pointer to a iter-n, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolIterN(PT_Symbol symbol, int number) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun33, (ATerm) symbol, (ATerm) (ATerm) ATmakeInt(number));
}
/**
 * Constructs a iter-sep-n of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new iter-sep-n
 * \param[in] separator a child of the new iter-sep-n
 * \param[in] number a child of the new iter-sep-n
 * \return A pointer to a iter-sep-n, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolIterSepN(PT_Symbol symbol, PT_Symbol separator, int number) {
  return (PT_Symbol)(ATerm)ATmakeAppl3(PT_afun34, (ATerm) symbol, (ATerm) separator, (ATerm) (ATerm) ATmakeInt(number));
}
/**
 * Constructs a func of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbols a child of the new func
 * \param[in] symbol a child of the new func
 * \return A pointer to a func, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolFunc(PT_Symbols symbols, PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun35, (ATerm) symbols, (ATerm) symbol);
}
/**
 * Constructs a parameterized-sort of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] sort a child of the new parameterized-sort
 * \param[in] parameters a child of the new parameterized-sort
 * \return A pointer to a parameterized-sort, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolParameterizedSort(const char* sort, PT_Symbols parameters) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun36, (ATerm) (ATerm) ATmakeAppl(ATmakeAFun(sort, 0, ATtrue)), (ATerm) parameters);
}
/**
 * Constructs a strategy of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] lhs a child of the new strategy
 * \param[in] rhs a child of the new strategy
 * \return A pointer to a strategy, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolStrategy(PT_Symbol lhs, PT_Symbol rhs) {
  return (PT_Symbol)(ATerm)ATmakeAppl2(PT_afun37, (ATerm) lhs, (ATerm) rhs);
}
/**
 * Constructs a var-sym of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] symbol a child of the new var-sym
 * \return A pointer to a var-sym, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolVarSym(PT_Symbol symbol) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun38, (ATerm) symbol);
}
/**
 * Constructs a layout of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \return A pointer to a layout, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolLayout(void) {
  return (PT_Symbol)(ATerm)ATmakeAppl0(PT_afun39);
}
/**
 * Constructs a char-class of type PT_Symbol. Like all ATerm types, PT_Symbols are maximally shared.
 * \param[in] ranges a child of the new char-class
 * \return A pointer to a char-class, either newly constructed or shared
 */
PT_Symbol PT_makeSymbolCharClass(PT_CharRanges ranges) {
  return (PT_Symbol)(ATerm)ATmakeAppl1(PT_afun40, (ATerm) ranges);
}
/**
 * Constructs a empty of type PT_Symbols. Like all ATerm types, PT_Symbolss are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
PT_Symbols PT_makeSymbolsEmpty(void) {
  return (PT_Symbols)(ATerm)ATempty;
}
/**
 * Constructs a single of type PT_Symbols. Like all ATerm types, PT_Symbolss are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
PT_Symbols PT_makeSymbolsSingle(PT_Symbol head) {
  return (PT_Symbols)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type PT_Symbols. Like all ATerm types, PT_Symbolss are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
PT_Symbols PT_makeSymbolsMany(PT_Symbol head, PT_Symbols tail) {
  return (PT_Symbols)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
/**
 * Constructs a character of type PT_CharRange. Like all ATerm types, PT_CharRanges are maximally shared.
 * \param[in] start a child of the new character
 * \return A pointer to a character, either newly constructed or shared
 */
PT_CharRange PT_makeCharRangeCharacter(int start) {
  return (PT_CharRange)(ATerm) (ATerm) ATmakeInt(start);
}
/**
 * Constructs a range of type PT_CharRange. Like all ATerm types, PT_CharRanges are maximally shared.
 * \param[in] start a child of the new range
 * \param[in] end a child of the new range
 * \return A pointer to a range, either newly constructed or shared
 */
PT_CharRange PT_makeCharRangeRange(int start, int end) {
  return (PT_CharRange)(ATerm)ATmakeAppl2(PT_afun41, (ATerm) (ATerm) ATmakeInt(start), (ATerm) (ATerm) ATmakeInt(end));
}
/**
 * Constructs a empty of type PT_CharRanges. Like all ATerm types, PT_CharRangess are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
PT_CharRanges PT_makeCharRangesEmpty(void) {
  return (PT_CharRanges)(ATerm)ATempty;
}
/**
 * Constructs a single of type PT_CharRanges. Like all ATerm types, PT_CharRangess are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
PT_CharRanges PT_makeCharRangesSingle(PT_CharRange head) {
  return (PT_CharRanges)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type PT_CharRanges. Like all ATerm types, PT_CharRangess are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
PT_CharRanges PT_makeCharRangesMany(PT_CharRange head, PT_CharRanges tail) {
  return (PT_CharRanges)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}

/**
 * Tests equality of two PT_ParseTrees. A constant time operation.
 * \param[in] arg0 first PT_ParseTree to be compared
 * \param[in] arg1 second PT_ParseTree to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualParseTree(PT_ParseTree arg0, PT_ParseTree arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Trees. A constant time operation.
 * \param[in] arg0 first PT_Tree to be compared
 * \param[in] arg1 second PT_Tree to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualTree(PT_Tree arg0, PT_Tree arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Argss. A constant time operation.
 * \param[in] arg0 first PT_Args to be compared
 * \param[in] arg1 second PT_Args to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualArgs(PT_Args arg0, PT_Args arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Productions. A constant time operation.
 * \param[in] arg0 first PT_Production to be compared
 * \param[in] arg1 second PT_Production to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualProduction(PT_Production arg0, PT_Production arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Attributess. A constant time operation.
 * \param[in] arg0 first PT_Attributes to be compared
 * \param[in] arg1 second PT_Attributes to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualAttributes(PT_Attributes arg0, PT_Attributes arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Attrss. A constant time operation.
 * \param[in] arg0 first PT_Attrs to be compared
 * \param[in] arg1 second PT_Attrs to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualAttrs(PT_Attrs arg0, PT_Attrs arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Attrs. A constant time operation.
 * \param[in] arg0 first PT_Attr to be compared
 * \param[in] arg1 second PT_Attr to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualAttr(PT_Attr arg0, PT_Attr arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Associativitys. A constant time operation.
 * \param[in] arg0 first PT_Associativity to be compared
 * \param[in] arg1 second PT_Associativity to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualAssociativity(PT_Associativity arg0, PT_Associativity arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Symbols. A constant time operation.
 * \param[in] arg0 first PT_Symbol to be compared
 * \param[in] arg1 second PT_Symbol to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualSymbol(PT_Symbol arg0, PT_Symbol arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_Symbolss. A constant time operation.
 * \param[in] arg0 first PT_Symbols to be compared
 * \param[in] arg1 second PT_Symbols to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualSymbols(PT_Symbols arg0, PT_Symbols arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_CharRanges. A constant time operation.
 * \param[in] arg0 first PT_CharRange to be compared
 * \param[in] arg1 second PT_CharRange to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualCharRange(PT_CharRange arg0, PT_CharRange arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two PT_CharRangess. A constant time operation.
 * \param[in] arg0 first PT_CharRanges to be compared
 * \param[in] arg1 second PT_CharRanges to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool PT_isEqualCharRanges(PT_CharRanges arg0, PT_CharRanges arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Assert whether a PT_ParseTree is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_ParseTree
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidParseTree(PT_ParseTree arg) {
  if (PT_isParseTreeTop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_ParseTree is a top. Always returns ATtrue
 * \param[in] arg input PT_ParseTree
 * \return ATtrue if #arg corresponds to the signature of a top, or ATfalse otherwise
 */
inline ATbool PT_isParseTreeTop(PT_ParseTree arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternParseTreeTop, NULL, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_ParseTree has a top. 
 * \param[in] arg input PT_ParseTree
 * \return ATtrue if the PT_ParseTree had a top, or ATfalse otherwise
 */
ATbool PT_hasParseTreeTop(PT_ParseTree arg) {
  if (PT_isParseTreeTop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_ParseTree has a amb-cnt. 
 * \param[in] arg input PT_ParseTree
 * \return ATtrue if the PT_ParseTree had a amb-cnt, or ATfalse otherwise
 */
ATbool PT_hasParseTreeAmbCnt(PT_ParseTree arg) {
  if (PT_isParseTreeTop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the top PT_Tree of a PT_ParseTree. Note that the precondition is that this PT_ParseTree actually has a top
 * \param[in] arg input PT_ParseTree
 * \return the top of #arg, if it exist or an undefined value if it does not
 */
PT_Tree PT_getParseTreeTop(PT_ParseTree arg) {
  
    return (PT_Tree)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the amb-cnt int of a PT_ParseTree. Note that the precondition is that this PT_ParseTree actually has a amb-cnt
 * \param[in] arg input PT_ParseTree
 * \return the amb-cnt of #arg, if it exist or an undefined value if it does not
 */
int PT_getParseTreeAmbCnt(PT_ParseTree arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the top of a PT_ParseTree. The precondition being that this PT_ParseTree actually has a top
 * \param[in] arg input PT_ParseTree
 * \param[in] top new PT_Tree to set in #arg
 * \return A new PT_ParseTree with top at the right place, or a core dump if #arg did not have a top
 */
PT_ParseTree PT_setParseTreeTop(PT_ParseTree arg, PT_Tree top) {
  if (PT_isParseTreeTop(arg)) {
    return (PT_ParseTree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) top), 0);
  }

  ATabort("ParseTree has no Top: %t\n", arg);
  return (PT_ParseTree)NULL;
}

/**
 * Set the amb-cnt of a PT_ParseTree. The precondition being that this PT_ParseTree actually has a amb-cnt
 * \param[in] arg input PT_ParseTree
 * \param[in] ambCnt new int to set in #arg
 * \return A new PT_ParseTree with ambCnt at the right place, or a core dump if #arg did not have a ambCnt
 */
PT_ParseTree PT_setParseTreeAmbCnt(PT_ParseTree arg, int ambCnt) {
  if (PT_isParseTreeTop(arg)) {
    return (PT_ParseTree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }

  ATabort("ParseTree has no AmbCnt: %t\n", arg);
  return (PT_ParseTree)NULL;
}

/**
 * Assert whether a PT_Tree is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Tree
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidTree(PT_Tree arg) {
  if (PT_isTreeAppl(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeCycle(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeAmb(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Tree is a appl. . May not be used to assert correctness of the PT_Tree
 * \param[in] arg input PT_Tree
 * \return ATtrue if #arg corresponds to the signature of a appl, or ATfalse otherwise
 */
inline ATbool PT_isTreeAppl(PT_Tree arg) {
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeAppl, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Tree is a cycle. . May not be used to assert correctness of the PT_Tree
 * \param[in] arg input PT_Tree
 * \return ATtrue if #arg corresponds to the signature of a cycle, or ATfalse otherwise
 */
inline ATbool PT_isTreeCycle(PT_Tree arg) {
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeCycle, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Tree is a amb. . May not be used to assert correctness of the PT_Tree
 * \param[in] arg input PT_Tree
 * \return ATtrue if #arg corresponds to the signature of a amb, or ATfalse otherwise
 */
inline ATbool PT_isTreeAmb(PT_Tree arg) {
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternTreeAmb, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Tree is a char. . May not be used to assert correctness of the PT_Tree
 * \param[in] arg input PT_Tree
 * \return ATtrue if #arg corresponds to the signature of a char, or ATfalse otherwise
 */
inline ATbool PT_isTreeChar(PT_Tree arg) {
  if (ATgetType((ATerm)arg) != AT_INT) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternTreeChar, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_Tree has a prod. 
 * \param[in] arg input PT_Tree
 * \return ATtrue if the PT_Tree had a prod, or ATfalse otherwise
 */
ATbool PT_hasTreeProd(PT_Tree arg) {
  if (PT_isTreeAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Tree has a args. 
 * \param[in] arg input PT_Tree
 * \return ATtrue if the PT_Tree had a args, or ATfalse otherwise
 */
ATbool PT_hasTreeArgs(PT_Tree arg) {
  if (PT_isTreeAppl(arg)) {
    return ATtrue;
  }
  else if (PT_isTreeAmb(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Tree has a symbol. 
 * \param[in] arg input PT_Tree
 * \return ATtrue if the PT_Tree had a symbol, or ATfalse otherwise
 */
ATbool PT_hasTreeSymbol(PT_Tree arg) {
  if (PT_isTreeCycle(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Tree has a cycle-length. 
 * \param[in] arg input PT_Tree
 * \return ATtrue if the PT_Tree had a cycle-length, or ATfalse otherwise
 */
ATbool PT_hasTreeCycleLength(PT_Tree arg) {
  if (PT_isTreeCycle(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Tree has a character. 
 * \param[in] arg input PT_Tree
 * \return ATtrue if the PT_Tree had a character, or ATfalse otherwise
 */
ATbool PT_hasTreeCharacter(PT_Tree arg) {
  if (PT_isTreeChar(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the prod PT_Production of a PT_Tree. Note that the precondition is that this PT_Tree actually has a prod
 * \param[in] arg input PT_Tree
 * \return the prod of #arg, if it exist or an undefined value if it does not
 */
PT_Production PT_getTreeProd(PT_Tree arg) {
  
    return (PT_Production)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the args PT_Args of a PT_Tree. Note that the precondition is that this PT_Tree actually has a args
 * \param[in] arg input PT_Tree
 * \return the args of #arg, if it exist or an undefined value if it does not
 */
PT_Args PT_getTreeArgs(PT_Tree arg) {
  if (PT_isTreeAppl(arg)) {
    return (PT_Args)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Args)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the symbol PT_Symbol of a PT_Tree. Note that the precondition is that this PT_Tree actually has a symbol
 * \param[in] arg input PT_Tree
 * \return the symbol of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getTreeSymbol(PT_Tree arg) {
  
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the cycle-length int of a PT_Tree. Note that the precondition is that this PT_Tree actually has a cycle-length
 * \param[in] arg input PT_Tree
 * \return the cycle-length of #arg, if it exist or an undefined value if it does not
 */
int PT_getTreeCycleLength(PT_Tree arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Get the character int of a PT_Tree. Note that the precondition is that this PT_Tree actually has a character
 * \param[in] arg input PT_Tree
 * \return the character of #arg, if it exist or an undefined value if it does not
 */
int PT_getTreeCharacter(PT_Tree arg) {
  
    return (int)ATgetInt((ATermInt) arg);
}

/**
 * Set the prod of a PT_Tree. The precondition being that this PT_Tree actually has a prod
 * \param[in] arg input PT_Tree
 * \param[in] prod new PT_Production to set in #arg
 * \return A new PT_Tree with prod at the right place, or a core dump if #arg did not have a prod
 */
PT_Tree PT_setTreeProd(PT_Tree arg, PT_Production prod) {
  if (PT_isTreeAppl(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) prod), 0);
  }

  ATabort("Tree has no Prod: %t\n", arg);
  return (PT_Tree)NULL;
}

/**
 * Set the args of a PT_Tree. The precondition being that this PT_Tree actually has a args
 * \param[in] arg input PT_Tree
 * \param[in] args new PT_Args to set in #arg
 * \return A new PT_Tree with args at the right place, or a core dump if #arg did not have a args
 */
PT_Tree PT_setTreeArgs(PT_Tree arg, PT_Args args) {
  if (PT_isTreeAppl(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) args), 1);
  }
  else if (PT_isTreeAmb(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) args), 0);
  }

  ATabort("Tree has no Args: %t\n", arg);
  return (PT_Tree)NULL;
}

/**
 * Set the symbol of a PT_Tree. The precondition being that this PT_Tree actually has a symbol
 * \param[in] arg input PT_Tree
 * \param[in] symbol new PT_Symbol to set in #arg
 * \return A new PT_Tree with symbol at the right place, or a core dump if #arg did not have a symbol
 */
PT_Tree PT_setTreeSymbol(PT_Tree arg, PT_Symbol symbol) {
  if (PT_isTreeCycle(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }

  ATabort("Tree has no Symbol: %t\n", arg);
  return (PT_Tree)NULL;
}

/**
 * Set the cycle-length of a PT_Tree. The precondition being that this PT_Tree actually has a cycle-length
 * \param[in] arg input PT_Tree
 * \param[in] cycleLength new int to set in #arg
 * \return A new PT_Tree with cycleLength at the right place, or a core dump if #arg did not have a cycleLength
 */
PT_Tree PT_setTreeCycleLength(PT_Tree arg, int cycleLength) {
  if (PT_isTreeCycle(arg)) {
    return (PT_Tree)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(cycleLength)), 1);
  }

  ATabort("Tree has no CycleLength: %t\n", arg);
  return (PT_Tree)NULL;
}

/**
 * Set the character of a PT_Tree. The precondition being that this PT_Tree actually has a character
 * \param[in] arg input PT_Tree
 * \param[in] character new int to set in #arg
 * \return A new PT_Tree with character at the right place, or a core dump if #arg did not have a character
 */
PT_Tree PT_setTreeCharacter(PT_Tree arg, int character) {
  if (PT_isTreeChar(arg)) {
    return (PT_Tree)((ATerm) (ATerm) ATmakeInt(character));
  }

  ATabort("Tree has no Character: %t\n", arg);
  return (PT_Tree)NULL;
}

/**
 * Assert whether a PT_Args is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Args
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidArgs(PT_Args arg) {
  if (PT_isArgsEmpty(arg)) {
    return ATtrue;
  }
  else if (PT_isArgsSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isArgsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Args is a empty. . May not be used to assert correctness of the PT_Args
 * \param[in] arg input PT_Args
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool PT_isArgsEmpty(PT_Args arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternArgsEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_Args is a single. . May not be used to assert correctness of the PT_Args
 * \param[in] arg input PT_Args
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool PT_isArgsSingle(PT_Args arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternArgsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Args is a many. . May not be used to assert correctness of the PT_Args
 * \param[in] arg input PT_Args
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool PT_isArgsMany(PT_Args arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternArgsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Args has a head. 
 * \param[in] arg input PT_Args
 * \return ATtrue if the PT_Args had a head, or ATfalse otherwise
 */
ATbool PT_hasArgsHead(PT_Args arg) {
  if (PT_isArgsSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isArgsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Args has a tail. 
 * \param[in] arg input PT_Args
 * \return ATtrue if the PT_Args had a tail, or ATfalse otherwise
 */
ATbool PT_hasArgsTail(PT_Args arg) {
  if (PT_isArgsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the head PT_Tree of a PT_Args. Note that the precondition is that this PT_Args actually has a head
 * \param[in] arg input PT_Args
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
PT_Tree PT_getArgsHead(PT_Args arg) {
  if (PT_isArgsSingle(arg)) {
    return (PT_Tree)ATgetFirst((ATermList)arg);
  }
  else 
    return (PT_Tree)ATgetFirst((ATermList)arg);
}

/**
 * Get the tail PT_Args of a PT_Args. Note that the precondition is that this PT_Args actually has a tail
 * \param[in] arg input PT_Args
 * \return the tail of #arg, if it exist or an undefined value if it does not
 */
PT_Args PT_getArgsTail(PT_Args arg) {
  
    return (PT_Args)ATgetNext((ATermList)arg);
}

/**
 * Set the head of a PT_Args. The precondition being that this PT_Args actually has a head
 * \param[in] arg input PT_Args
 * \param[in] head new PT_Tree to set in #arg
 * \return A new PT_Args with head at the right place, or a core dump if #arg did not have a head
 */
PT_Args PT_setArgsHead(PT_Args arg, PT_Tree head) {
  if (PT_isArgsSingle(arg)) {
    return (PT_Args)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PT_isArgsMany(arg)) {
    return (PT_Args)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("Args has no Head: %t\n", arg);
  return (PT_Args)NULL;
}

/**
 * Set the tail of a PT_Args. The precondition being that this PT_Args actually has a tail
 * \param[in] arg input PT_Args
 * \param[in] tail new PT_Args to set in #arg
 * \return A new PT_Args with tail at the right place, or a core dump if #arg did not have a tail
 */
PT_Args PT_setArgsTail(PT_Args arg, PT_Args tail) {
  if (PT_isArgsMany(arg)) {
    return (PT_Args)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("Args has no Tail: %t\n", arg);
  return (PT_Args)NULL;
}

/**
 * Assert whether a PT_Production is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Production
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidProduction(PT_Production arg) {
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  else if (PT_isProductionList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Production is a Default. . May not be used to assert correctness of the PT_Production
 * \param[in] arg input PT_Production
 * \return ATtrue if #arg corresponds to the signature of a Default, or ATfalse otherwise
 */
inline ATbool PT_isProductionDefault(PT_Production arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternProductionDefault, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Production is a List. . May not be used to assert correctness of the PT_Production
 * \param[in] arg input PT_Production
 * \return ATtrue if #arg corresponds to the signature of a List, or ATfalse otherwise
 */
inline ATbool PT_isProductionList(PT_Production arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternProductionList, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Production has a lhs. 
 * \param[in] arg input PT_Production
 * \return ATtrue if the PT_Production had a lhs, or ATfalse otherwise
 */
ATbool PT_hasProductionLhs(PT_Production arg) {
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Production has a rhs. 
 * \param[in] arg input PT_Production
 * \return ATtrue if the PT_Production had a rhs, or ATfalse otherwise
 */
ATbool PT_hasProductionRhs(PT_Production arg) {
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  else if (PT_isProductionList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Production has a attributes. 
 * \param[in] arg input PT_Production
 * \return ATtrue if the PT_Production had a attributes, or ATfalse otherwise
 */
ATbool PT_hasProductionAttributes(PT_Production arg) {
  if (PT_isProductionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the lhs PT_Symbols of a PT_Production. Note that the precondition is that this PT_Production actually has a lhs
 * \param[in] arg input PT_Production
 * \return the lhs of #arg, if it exist or an undefined value if it does not
 */
PT_Symbols PT_getProductionLhs(PT_Production arg) {
  
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the rhs PT_Symbol of a PT_Production. Note that the precondition is that this PT_Production actually has a rhs
 * \param[in] arg input PT_Production
 * \return the rhs of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getProductionRhs(PT_Production arg) {
  if (PT_isProductionDefault(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the attributes PT_Attributes of a PT_Production. Note that the precondition is that this PT_Production actually has a attributes
 * \param[in] arg input PT_Production
 * \return the attributes of #arg, if it exist or an undefined value if it does not
 */
PT_Attributes PT_getProductionAttributes(PT_Production arg) {
  
    return (PT_Attributes)ATgetArgument((ATermAppl)arg, 2);
}

/**
 * Set the lhs of a PT_Production. The precondition being that this PT_Production actually has a lhs
 * \param[in] arg input PT_Production
 * \param[in] lhs new PT_Symbols to set in #arg
 * \return A new PT_Production with lhs at the right place, or a core dump if #arg did not have a lhs
 */
PT_Production PT_setProductionLhs(PT_Production arg, PT_Symbols lhs) {
  if (PT_isProductionDefault(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) lhs), 0);
  }

  ATabort("Production has no Lhs: %t\n", arg);
  return (PT_Production)NULL;
}

/**
 * Set the rhs of a PT_Production. The precondition being that this PT_Production actually has a rhs
 * \param[in] arg input PT_Production
 * \param[in] rhs new PT_Symbol to set in #arg
 * \return A new PT_Production with rhs at the right place, or a core dump if #arg did not have a rhs
 */
PT_Production PT_setProductionRhs(PT_Production arg, PT_Symbol rhs) {
  if (PT_isProductionDefault(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) rhs), 1);
  }
  else if (PT_isProductionList(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) rhs), 0);
  }

  ATabort("Production has no Rhs: %t\n", arg);
  return (PT_Production)NULL;
}

/**
 * Set the attributes of a PT_Production. The precondition being that this PT_Production actually has a attributes
 * \param[in] arg input PT_Production
 * \param[in] attributes new PT_Attributes to set in #arg
 * \return A new PT_Production with attributes at the right place, or a core dump if #arg did not have a attributes
 */
PT_Production PT_setProductionAttributes(PT_Production arg, PT_Attributes attributes) {
  if (PT_isProductionDefault(arg)) {
    return (PT_Production)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) attributes), 2);
  }

  ATabort("Production has no Attributes: %t\n", arg);
  return (PT_Production)NULL;
}

/**
 * Assert whether a PT_Attributes is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Attributes
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidAttributes(PT_Attributes arg) {
  if (PT_isAttributesNoAttrs(arg)) {
    return ATtrue;
  }
  else if (PT_isAttributesAttrs(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Attributes is a no-attrs. . May not be used to assert correctness of the PT_Attributes
 * \param[in] arg input PT_Attributes
 * \return ATtrue if #arg corresponds to the signature of a no-attrs, or ATfalse otherwise
 */
inline ATbool PT_isAttributesNoAttrs(PT_Attributes arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttributesNoAttrs);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attributes is a attrs. . May not be used to assert correctness of the PT_Attributes
 * \param[in] arg input PT_Attributes
 * \return ATtrue if #arg corresponds to the signature of a attrs, or ATfalse otherwise
 */
inline ATbool PT_isAttributesAttrs(PT_Attributes arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttributesAttrs, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attributes has a attrs. 
 * \param[in] arg input PT_Attributes
 * \return ATtrue if the PT_Attributes had a attrs, or ATfalse otherwise
 */
ATbool PT_hasAttributesAttrs(PT_Attributes arg) {
  if (PT_isAttributesAttrs(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the attrs PT_Attrs of a PT_Attributes. Note that the precondition is that this PT_Attributes actually has a attrs
 * \param[in] arg input PT_Attributes
 * \return the attrs of #arg, if it exist or an undefined value if it does not
 */
PT_Attrs PT_getAttributesAttrs(PT_Attributes arg) {
  
    return (PT_Attrs)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Set the attrs of a PT_Attributes. The precondition being that this PT_Attributes actually has a attrs
 * \param[in] arg input PT_Attributes
 * \param[in] attrs new PT_Attrs to set in #arg
 * \return A new PT_Attributes with attrs at the right place, or a core dump if #arg did not have a attrs
 */
PT_Attributes PT_setAttributesAttrs(PT_Attributes arg, PT_Attrs attrs) {
  if (PT_isAttributesAttrs(arg)) {
    return (PT_Attributes)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) attrs), 0);
  }

  ATabort("Attributes has no Attrs: %t\n", arg);
  return (PT_Attributes)NULL;
}

/**
 * Assert whether a PT_Attrs is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Attrs
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidAttrs(PT_Attrs arg) {
  if (PT_isAttrsEmpty(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrsSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Attrs is a empty. . May not be used to assert correctness of the PT_Attrs
 * \param[in] arg input PT_Attrs
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool PT_isAttrsEmpty(PT_Attrs arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternAttrsEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_Attrs is a single. . May not be used to assert correctness of the PT_Attrs
 * \param[in] arg input PT_Attrs
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool PT_isAttrsSingle(PT_Attrs arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attrs is a many. . May not be used to assert correctness of the PT_Attrs
 * \param[in] arg input PT_Attrs
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool PT_isAttrsMany(PT_Attrs arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attrs has a head. 
 * \param[in] arg input PT_Attrs
 * \return ATtrue if the PT_Attrs had a head, or ATfalse otherwise
 */
ATbool PT_hasAttrsHead(PT_Attrs arg) {
  if (PT_isAttrsSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Attrs has a tail. 
 * \param[in] arg input PT_Attrs
 * \return ATtrue if the PT_Attrs had a tail, or ATfalse otherwise
 */
ATbool PT_hasAttrsTail(PT_Attrs arg) {
  if (PT_isAttrsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the head PT_Attr of a PT_Attrs. Note that the precondition is that this PT_Attrs actually has a head
 * \param[in] arg input PT_Attrs
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
PT_Attr PT_getAttrsHead(PT_Attrs arg) {
  if (PT_isAttrsSingle(arg)) {
    return (PT_Attr)ATgetFirst((ATermList)arg);
  }
  else 
    return (PT_Attr)ATgetFirst((ATermList)arg);
}

/**
 * Get the tail PT_Attrs of a PT_Attrs. Note that the precondition is that this PT_Attrs actually has a tail
 * \param[in] arg input PT_Attrs
 * \return the tail of #arg, if it exist or an undefined value if it does not
 */
PT_Attrs PT_getAttrsTail(PT_Attrs arg) {
  
    return (PT_Attrs)ATgetNext((ATermList)arg);
}

/**
 * Set the head of a PT_Attrs. The precondition being that this PT_Attrs actually has a head
 * \param[in] arg input PT_Attrs
 * \param[in] head new PT_Attr to set in #arg
 * \return A new PT_Attrs with head at the right place, or a core dump if #arg did not have a head
 */
PT_Attrs PT_setAttrsHead(PT_Attrs arg, PT_Attr head) {
  if (PT_isAttrsSingle(arg)) {
    return (PT_Attrs)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PT_isAttrsMany(arg)) {
    return (PT_Attrs)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("Attrs has no Head: %t\n", arg);
  return (PT_Attrs)NULL;
}

/**
 * Set the tail of a PT_Attrs. The precondition being that this PT_Attrs actually has a tail
 * \param[in] arg input PT_Attrs
 * \param[in] tail new PT_Attrs to set in #arg
 * \return A new PT_Attrs with tail at the right place, or a core dump if #arg did not have a tail
 */
PT_Attrs PT_setAttrsTail(PT_Attrs arg, PT_Attrs tail) {
  if (PT_isAttrsMany(arg)) {
    return (PT_Attrs)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("Attrs has no Tail: %t\n", arg);
  return (PT_Attrs)NULL;
}

/**
 * Assert whether a PT_Attr is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidAttr(PT_Attr arg) {
  if (PT_isAttrAssoc(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrTerm(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrId(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrBracket(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrReject(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrPrefer(arg)) {
    return ATtrue;
  }
  else if (PT_isAttrAvoid(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Attr is a assoc. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a assoc, or ATfalse otherwise
 */
inline ATbool PT_isAttrAssoc(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrAssoc, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr is a term. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a term, or ATfalse otherwise
 */
inline ATbool PT_isAttrTerm(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrTerm, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr is a id. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a id, or ATfalse otherwise
 */
inline ATbool PT_isAttrId(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrId, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr is a bracket. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a bracket, or ATfalse otherwise
 */
inline ATbool PT_isAttrBracket(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrBracket);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr is a reject. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a reject, or ATfalse otherwise
 */
inline ATbool PT_isAttrReject(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrReject);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr is a prefer. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a prefer, or ATfalse otherwise
 */
inline ATbool PT_isAttrPrefer(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrPrefer);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr is a avoid. . May not be used to assert correctness of the PT_Attr
 * \param[in] arg input PT_Attr
 * \return ATtrue if #arg corresponds to the signature of a avoid, or ATfalse otherwise
 */
inline ATbool PT_isAttrAvoid(PT_Attr arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAttrAvoid);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Attr has a assoc. 
 * \param[in] arg input PT_Attr
 * \return ATtrue if the PT_Attr had a assoc, or ATfalse otherwise
 */
ATbool PT_hasAttrAssoc(PT_Attr arg) {
  if (PT_isAttrAssoc(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Attr has a term. 
 * \param[in] arg input PT_Attr
 * \return ATtrue if the PT_Attr had a term, or ATfalse otherwise
 */
ATbool PT_hasAttrTerm(PT_Attr arg) {
  if (PT_isAttrTerm(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Attr has a module-name. 
 * \param[in] arg input PT_Attr
 * \return ATtrue if the PT_Attr had a module-name, or ATfalse otherwise
 */
ATbool PT_hasAttrModuleName(PT_Attr arg) {
  if (PT_isAttrId(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the assoc PT_Associativity of a PT_Attr. Note that the precondition is that this PT_Attr actually has a assoc
 * \param[in] arg input PT_Attr
 * \return the assoc of #arg, if it exist or an undefined value if it does not
 */
PT_Associativity PT_getAttrAssoc(PT_Attr arg) {
  
    return (PT_Associativity)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the term ATerm of a PT_Attr. Note that the precondition is that this PT_Attr actually has a term
 * \param[in] arg input PT_Attr
 * \return the term of #arg, if it exist or an undefined value if it does not
 */
ATerm PT_getAttrTerm(PT_Attr arg) {
  
    return (ATerm)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the module-name char* of a PT_Attr. Note that the precondition is that this PT_Attr actually has a module-name
 * \param[in] arg input PT_Attr
 * \return the module-name of #arg, if it exist or an undefined value if it does not
 */
char* PT_getAttrModuleName(PT_Attr arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

/**
 * Set the assoc of a PT_Attr. The precondition being that this PT_Attr actually has a assoc
 * \param[in] arg input PT_Attr
 * \param[in] assoc new PT_Associativity to set in #arg
 * \return A new PT_Attr with assoc at the right place, or a core dump if #arg did not have a assoc
 */
PT_Attr PT_setAttrAssoc(PT_Attr arg, PT_Associativity assoc) {
  if (PT_isAttrAssoc(arg)) {
    return (PT_Attr)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) assoc), 0);
  }

  ATabort("Attr has no Assoc: %t\n", arg);
  return (PT_Attr)NULL;
}

/**
 * Set the term of a PT_Attr. The precondition being that this PT_Attr actually has a term
 * \param[in] arg input PT_Attr
 * \param[in] term new ATerm to set in #arg
 * \return A new PT_Attr with term at the right place, or a core dump if #arg did not have a term
 */
PT_Attr PT_setAttrTerm(PT_Attr arg, ATerm term) {
  if (PT_isAttrTerm(arg)) {
    return (PT_Attr)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) term), 0);
  }

  ATabort("Attr has no Term: %t\n", arg);
  return (PT_Attr)NULL;
}

/**
 * Set the module-name of a PT_Attr. The precondition being that this PT_Attr actually has a module-name
 * \param[in] arg input PT_Attr
 * \param[in] moduleName new const char* to set in #arg
 * \return A new PT_Attr with moduleName at the right place, or a core dump if #arg did not have a moduleName
 */
PT_Attr PT_setAttrModuleName(PT_Attr arg, const char* moduleName) {
  if (PT_isAttrId(arg)) {
    return (PT_Attr)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(moduleName, 0, ATtrue))), 0);
  }

  ATabort("Attr has no ModuleName: %t\n", arg);
  return (PT_Attr)NULL;
}

/**
 * Assert whether a PT_Associativity is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Associativity
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidAssociativity(PT_Associativity arg) {
  if (PT_isAssociativityLeft(arg)) {
    return ATtrue;
  }
  else if (PT_isAssociativityRight(arg)) {
    return ATtrue;
  }
  else if (PT_isAssociativityAssoc(arg)) {
    return ATtrue;
  }
  else if (PT_isAssociativityNonAssoc(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Associativity is a left. . May not be used to assert correctness of the PT_Associativity
 * \param[in] arg input PT_Associativity
 * \return ATtrue if #arg corresponds to the signature of a left, or ATfalse otherwise
 */
inline ATbool PT_isAssociativityLeft(PT_Associativity arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityLeft);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Associativity is a right. . May not be used to assert correctness of the PT_Associativity
 * \param[in] arg input PT_Associativity
 * \return ATtrue if #arg corresponds to the signature of a right, or ATfalse otherwise
 */
inline ATbool PT_isAssociativityRight(PT_Associativity arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityRight);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Associativity is a assoc. . May not be used to assert correctness of the PT_Associativity
 * \param[in] arg input PT_Associativity
 * \return ATtrue if #arg corresponds to the signature of a assoc, or ATfalse otherwise
 */
inline ATbool PT_isAssociativityAssoc(PT_Associativity arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityAssoc);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Associativity is a non-assoc. . May not be used to assert correctness of the PT_Associativity
 * \param[in] arg input PT_Associativity
 * \return ATtrue if #arg corresponds to the signature of a non-assoc, or ATfalse otherwise
 */
inline ATbool PT_isAssociativityNonAssoc(PT_Associativity arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternAssociativityNonAssoc);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidSymbol(PT_Symbol arg) {
  if (PT_isSymbolLit(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolCilit(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolCf(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolLex(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolEmpty(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolSeq(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolOpt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolAlt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolTuple(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolSort(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStar(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolFunc(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolParameterizedSort(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolStrategy(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolVarSym(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolLayout(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolCharClass(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol is a lit. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a lit, or ATfalse otherwise
 */
inline ATbool PT_isSymbolLit(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolLit, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a cilit. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a cilit, or ATfalse otherwise
 */
inline ATbool PT_isSymbolCilit(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolCilit, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a cf. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a cf, or ATfalse otherwise
 */
inline ATbool PT_isSymbolCf(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolCf, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a lex. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a lex, or ATfalse otherwise
 */
inline ATbool PT_isSymbolLex(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolLex, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a empty. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool PT_isSymbolEmpty(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolEmpty);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a seq. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a seq, or ATfalse otherwise
 */
inline ATbool PT_isSymbolSeq(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolSeq, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a opt. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a opt, or ATfalse otherwise
 */
inline ATbool PT_isSymbolOpt(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolOpt, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a alt. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a alt, or ATfalse otherwise
 */
inline ATbool PT_isSymbolAlt(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolAlt, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a tuple. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a tuple, or ATfalse otherwise
 */
inline ATbool PT_isSymbolTuple(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolTuple, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a sort. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a sort, or ATfalse otherwise
 */
inline ATbool PT_isSymbolSort(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolSort, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a iter-plus. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a iter-plus, or ATfalse otherwise
 */
inline ATbool PT_isSymbolIterPlus(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterPlus, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a iter-star. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a iter-star, or ATfalse otherwise
 */
inline ATbool PT_isSymbolIterStar(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterStar, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a iter-plus-sep. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a iter-plus-sep, or ATfalse otherwise
 */
inline ATbool PT_isSymbolIterPlusSep(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterPlusSep, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a iter-star-sep. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a iter-star-sep, or ATfalse otherwise
 */
inline ATbool PT_isSymbolIterStarSep(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterStarSep, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a iter-n. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a iter-n, or ATfalse otherwise
 */
inline ATbool PT_isSymbolIterN(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterN, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a iter-sep-n. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a iter-sep-n, or ATfalse otherwise
 */
inline ATbool PT_isSymbolIterSepN(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolIterSepN, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a func. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a func, or ATfalse otherwise
 */
inline ATbool PT_isSymbolFunc(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolFunc, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a parameterized-sort. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a parameterized-sort, or ATfalse otherwise
 */
inline ATbool PT_isSymbolParameterizedSort(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolParameterizedSort, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a strategy. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a strategy, or ATfalse otherwise
 */
inline ATbool PT_isSymbolStrategy(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolStrategy, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a var-sym. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a var-sym, or ATfalse otherwise
 */
inline ATbool PT_isSymbolVarSym(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolVarSym, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a layout. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a layout, or ATfalse otherwise
 */
inline ATbool PT_isSymbolLayout(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolLayout);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol is a char-class. . May not be used to assert correctness of the PT_Symbol
 * \param[in] arg input PT_Symbol
 * \return ATtrue if #arg corresponds to the signature of a char-class, or ATfalse otherwise
 */
inline ATbool PT_isSymbolCharClass(PT_Symbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolCharClass, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbol has a string. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a string, or ATfalse otherwise
 */
ATbool PT_hasSymbolString(PT_Symbol arg) {
  if (PT_isSymbolLit(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolCilit(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a symbol. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a symbol, or ATfalse otherwise
 */
ATbool PT_hasSymbolSymbol(PT_Symbol arg) {
  if (PT_isSymbolCf(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolLex(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolOpt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStar(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolFunc(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolVarSym(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a symbols. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a symbols, or ATfalse otherwise
 */
ATbool PT_hasSymbolSymbols(PT_Symbol arg) {
  if (PT_isSymbolSeq(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolFunc(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a lhs. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a lhs, or ATfalse otherwise
 */
ATbool PT_hasSymbolLhs(PT_Symbol arg) {
  if (PT_isSymbolAlt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolStrategy(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a rhs. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a rhs, or ATfalse otherwise
 */
ATbool PT_hasSymbolRhs(PT_Symbol arg) {
  if (PT_isSymbolAlt(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolStrategy(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a head. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a head, or ATfalse otherwise
 */
ATbool PT_hasSymbolHead(PT_Symbol arg) {
  if (PT_isSymbolTuple(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a rest. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a rest, or ATfalse otherwise
 */
ATbool PT_hasSymbolRest(PT_Symbol arg) {
  if (PT_isSymbolTuple(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a separator. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a separator, or ATfalse otherwise
 */
ATbool PT_hasSymbolSeparator(PT_Symbol arg) {
  if (PT_isSymbolIterPlusSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a number. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a number, or ATfalse otherwise
 */
ATbool PT_hasSymbolNumber(PT_Symbol arg) {
  if (PT_isSymbolIterN(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a sort. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a sort, or ATfalse otherwise
 */
ATbool PT_hasSymbolSort(PT_Symbol arg) {
  if (PT_isSymbolParameterizedSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a parameters. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a parameters, or ATfalse otherwise
 */
ATbool PT_hasSymbolParameters(PT_Symbol arg) {
  if (PT_isSymbolParameterizedSort(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbol has a ranges. 
 * \param[in] arg input PT_Symbol
 * \return ATtrue if the PT_Symbol had a ranges, or ATfalse otherwise
 */
ATbool PT_hasSymbolRanges(PT_Symbol arg) {
  if (PT_isSymbolCharClass(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the string char* of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a string
 * \param[in] arg input PT_Symbol
 * \return the string of #arg, if it exist or an undefined value if it does not
 */
char* PT_getSymbolString(PT_Symbol arg) {
  if (PT_isSymbolLit(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else if (PT_isSymbolCilit(arg)) {
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
  }
  else 
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

/**
 * Get the symbol PT_Symbol of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a symbol
 * \param[in] arg input PT_Symbol
 * \return the symbol of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getSymbolSymbol(PT_Symbol arg) {
  if (PT_isSymbolCf(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolLex(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolOpt(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterStar(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterN(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else if (PT_isSymbolFunc(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the symbols PT_Symbols of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a symbols
 * \param[in] arg input PT_Symbol
 * \return the symbols of #arg, if it exist or an undefined value if it does not
 */
PT_Symbols PT_getSymbolSymbols(PT_Symbol arg) {
  if (PT_isSymbolSeq(arg)) {
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the lhs PT_Symbol of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a lhs
 * \param[in] arg input PT_Symbol
 * \return the lhs of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getSymbolLhs(PT_Symbol arg) {
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the rhs PT_Symbol of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a rhs
 * \param[in] arg input PT_Symbol
 * \return the rhs of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getSymbolRhs(PT_Symbol arg) {
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
}

/**
 * Get the head PT_Symbol of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a head
 * \param[in] arg input PT_Symbol
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getSymbolHead(PT_Symbol arg) {
  
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Get the rest PT_Symbols of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a rest
 * \param[in] arg input PT_Symbol
 * \return the rest of #arg, if it exist or an undefined value if it does not
 */
PT_Symbols PT_getSymbolRest(PT_Symbol arg) {
  
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 1);
}

/**
 * Get the separator PT_Symbol of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a separator
 * \param[in] arg input PT_Symbol
 * \return the separator of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getSymbolSeparator(PT_Symbol arg) {
  if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
  }
  else 
    return (PT_Symbol)ATgetArgument((ATermAppl)arg, 1);
}

/**
 * Get the number int of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a number
 * \param[in] arg input PT_Symbol
 * \return the number of #arg, if it exist or an undefined value if it does not
 */
int PT_getSymbolNumber(PT_Symbol arg) {
  if (PT_isSymbolIterN(arg)) {
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
  }
  else 
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 2));
}

/**
 * Get the sort char* of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a sort
 * \param[in] arg input PT_Symbol
 * \return the sort of #arg, if it exist or an undefined value if it does not
 */
char* PT_getSymbolSort(PT_Symbol arg) {
  
    return (char*)ATgetName(ATgetAFun((ATermAppl) ATgetArgument((ATermAppl)arg, 0)));
}

/**
 * Get the parameters PT_Symbols of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a parameters
 * \param[in] arg input PT_Symbol
 * \return the parameters of #arg, if it exist or an undefined value if it does not
 */
PT_Symbols PT_getSymbolParameters(PT_Symbol arg) {
  
    return (PT_Symbols)ATgetArgument((ATermAppl)arg, 1);
}

/**
 * Get the ranges PT_CharRanges of a PT_Symbol. Note that the precondition is that this PT_Symbol actually has a ranges
 * \param[in] arg input PT_Symbol
 * \return the ranges of #arg, if it exist or an undefined value if it does not
 */
PT_CharRanges PT_getSymbolRanges(PT_Symbol arg) {
  
    return (PT_CharRanges)ATgetArgument((ATermAppl)arg, 0);
}

/**
 * Set the string of a PT_Symbol. The precondition being that this PT_Symbol actually has a string
 * \param[in] arg input PT_Symbol
 * \param[in] string new const char* to set in #arg
 * \return A new PT_Symbol with string at the right place, or a core dump if #arg did not have a string
 */
PT_Symbol PT_setSymbolString(PT_Symbol arg, const char* string) {
  if (PT_isSymbolLit(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue))), 0);
  }
  else if (PT_isSymbolCilit(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue))), 0);
  }
  else if (PT_isSymbolSort(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(string, 0, ATtrue))), 0);
  }

  ATabort("Symbol has no String: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the symbol of a PT_Symbol. The precondition being that this PT_Symbol actually has a symbol
 * \param[in] arg input PT_Symbol
 * \param[in] symbol new PT_Symbol to set in #arg
 * \return A new PT_Symbol with symbol at the right place, or a core dump if #arg did not have a symbol
 */
PT_Symbol PT_setSymbolSymbol(PT_Symbol arg, PT_Symbol symbol) {
  if (PT_isSymbolCf(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolLex(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolOpt(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolIterPlus(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolIterStar(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolIterN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }
  else if (PT_isSymbolFunc(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 1);
  }
  else if (PT_isSymbolVarSym(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbol), 0);
  }

  ATabort("Symbol has no Symbol: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the symbols of a PT_Symbol. The precondition being that this PT_Symbol actually has a symbols
 * \param[in] arg input PT_Symbol
 * \param[in] symbols new PT_Symbols to set in #arg
 * \return A new PT_Symbol with symbols at the right place, or a core dump if #arg did not have a symbols
 */
PT_Symbol PT_setSymbolSymbols(PT_Symbol arg, PT_Symbols symbols) {
  if (PT_isSymbolSeq(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbols), 0);
  }
  else if (PT_isSymbolFunc(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) symbols), 0);
  }

  ATabort("Symbol has no Symbols: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the lhs of a PT_Symbol. The precondition being that this PT_Symbol actually has a lhs
 * \param[in] arg input PT_Symbol
 * \param[in] lhs new PT_Symbol to set in #arg
 * \return A new PT_Symbol with lhs at the right place, or a core dump if #arg did not have a lhs
 */
PT_Symbol PT_setSymbolLhs(PT_Symbol arg, PT_Symbol lhs) {
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) lhs), 0);
  }
  else if (PT_isSymbolStrategy(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) lhs), 0);
  }

  ATabort("Symbol has no Lhs: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the rhs of a PT_Symbol. The precondition being that this PT_Symbol actually has a rhs
 * \param[in] arg input PT_Symbol
 * \param[in] rhs new PT_Symbol to set in #arg
 * \return A new PT_Symbol with rhs at the right place, or a core dump if #arg did not have a rhs
 */
PT_Symbol PT_setSymbolRhs(PT_Symbol arg, PT_Symbol rhs) {
  if (PT_isSymbolAlt(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) rhs), 1);
  }
  else if (PT_isSymbolStrategy(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) rhs), 1);
  }

  ATabort("Symbol has no Rhs: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the head of a PT_Symbol. The precondition being that this PT_Symbol actually has a head
 * \param[in] arg input PT_Symbol
 * \param[in] head new PT_Symbol to set in #arg
 * \return A new PT_Symbol with head at the right place, or a core dump if #arg did not have a head
 */
PT_Symbol PT_setSymbolHead(PT_Symbol arg, PT_Symbol head) {
  if (PT_isSymbolTuple(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("Symbol has no Head: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the rest of a PT_Symbol. The precondition being that this PT_Symbol actually has a rest
 * \param[in] arg input PT_Symbol
 * \param[in] rest new PT_Symbols to set in #arg
 * \return A new PT_Symbol with rest at the right place, or a core dump if #arg did not have a rest
 */
PT_Symbol PT_setSymbolRest(PT_Symbol arg, PT_Symbols rest) {
  if (PT_isSymbolTuple(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) rest), 1);
  }

  ATabort("Symbol has no Rest: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the separator of a PT_Symbol. The precondition being that this PT_Symbol actually has a separator
 * \param[in] arg input PT_Symbol
 * \param[in] separator new PT_Symbol to set in #arg
 * \return A new PT_Symbol with separator at the right place, or a core dump if #arg did not have a separator
 */
PT_Symbol PT_setSymbolSeparator(PT_Symbol arg, PT_Symbol separator) {
  if (PT_isSymbolIterPlusSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) separator), 1);
  }
  else if (PT_isSymbolIterStarSep(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) separator), 1);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) separator), 1);
  }

  ATabort("Symbol has no Separator: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the number of a PT_Symbol. The precondition being that this PT_Symbol actually has a number
 * \param[in] arg input PT_Symbol
 * \param[in] number new int to set in #arg
 * \return A new PT_Symbol with number at the right place, or a core dump if #arg did not have a number
 */
PT_Symbol PT_setSymbolNumber(PT_Symbol arg, int number) {
  if (PT_isSymbolIterN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(number)), 1);
  }
  else if (PT_isSymbolIterSepN(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(number)), 2);
  }

  ATabort("Symbol has no Number: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the sort of a PT_Symbol. The precondition being that this PT_Symbol actually has a sort
 * \param[in] arg input PT_Symbol
 * \param[in] sort new const char* to set in #arg
 * \return A new PT_Symbol with sort at the right place, or a core dump if #arg did not have a sort
 */
PT_Symbol PT_setSymbolSort(PT_Symbol arg, const char* sort) {
  if (PT_isSymbolParameterizedSort(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeAppl(ATmakeAFun(sort, 0, ATtrue))), 0);
  }

  ATabort("Symbol has no Sort: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the parameters of a PT_Symbol. The precondition being that this PT_Symbol actually has a parameters
 * \param[in] arg input PT_Symbol
 * \param[in] parameters new PT_Symbols to set in #arg
 * \return A new PT_Symbol with parameters at the right place, or a core dump if #arg did not have a parameters
 */
PT_Symbol PT_setSymbolParameters(PT_Symbol arg, PT_Symbols parameters) {
  if (PT_isSymbolParameterizedSort(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) parameters), 1);
  }

  ATabort("Symbol has no Parameters: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Set the ranges of a PT_Symbol. The precondition being that this PT_Symbol actually has a ranges
 * \param[in] arg input PT_Symbol
 * \param[in] ranges new PT_CharRanges to set in #arg
 * \return A new PT_Symbol with ranges at the right place, or a core dump if #arg did not have a ranges
 */
PT_Symbol PT_setSymbolRanges(PT_Symbol arg, PT_CharRanges ranges) {
  if (PT_isSymbolCharClass(arg)) {
    return (PT_Symbol)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) ranges), 0);
  }

  ATabort("Symbol has no Ranges: %t\n", arg);
  return (PT_Symbol)NULL;
}

/**
 * Assert whether a PT_Symbols is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_Symbols
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidSymbols(PT_Symbols arg) {
  if (PT_isSymbolsEmpty(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolsSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbols is a empty. . May not be used to assert correctness of the PT_Symbols
 * \param[in] arg input PT_Symbols
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool PT_isSymbolsEmpty(PT_Symbols arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternSymbolsEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_Symbols is a single. . May not be used to assert correctness of the PT_Symbols
 * \param[in] arg input PT_Symbols
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool PT_isSymbolsSingle(PT_Symbols arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbols is a many. . May not be used to assert correctness of the PT_Symbols
 * \param[in] arg input PT_Symbols
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool PT_isSymbolsMany(PT_Symbols arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternSymbolsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_Symbols has a head. 
 * \param[in] arg input PT_Symbols
 * \return ATtrue if the PT_Symbols had a head, or ATfalse otherwise
 */
ATbool PT_hasSymbolsHead(PT_Symbols arg) {
  if (PT_isSymbolsSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isSymbolsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_Symbols has a tail. 
 * \param[in] arg input PT_Symbols
 * \return ATtrue if the PT_Symbols had a tail, or ATfalse otherwise
 */
ATbool PT_hasSymbolsTail(PT_Symbols arg) {
  if (PT_isSymbolsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the head PT_Symbol of a PT_Symbols. Note that the precondition is that this PT_Symbols actually has a head
 * \param[in] arg input PT_Symbols
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
PT_Symbol PT_getSymbolsHead(PT_Symbols arg) {
  if (PT_isSymbolsSingle(arg)) {
    return (PT_Symbol)ATgetFirst((ATermList)arg);
  }
  else 
    return (PT_Symbol)ATgetFirst((ATermList)arg);
}

/**
 * Get the tail PT_Symbols of a PT_Symbols. Note that the precondition is that this PT_Symbols actually has a tail
 * \param[in] arg input PT_Symbols
 * \return the tail of #arg, if it exist or an undefined value if it does not
 */
PT_Symbols PT_getSymbolsTail(PT_Symbols arg) {
  
    return (PT_Symbols)ATgetNext((ATermList)arg);
}

/**
 * Set the head of a PT_Symbols. The precondition being that this PT_Symbols actually has a head
 * \param[in] arg input PT_Symbols
 * \param[in] head new PT_Symbol to set in #arg
 * \return A new PT_Symbols with head at the right place, or a core dump if #arg did not have a head
 */
PT_Symbols PT_setSymbolsHead(PT_Symbols arg, PT_Symbol head) {
  if (PT_isSymbolsSingle(arg)) {
    return (PT_Symbols)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PT_isSymbolsMany(arg)) {
    return (PT_Symbols)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("Symbols has no Head: %t\n", arg);
  return (PT_Symbols)NULL;
}

/**
 * Set the tail of a PT_Symbols. The precondition being that this PT_Symbols actually has a tail
 * \param[in] arg input PT_Symbols
 * \param[in] tail new PT_Symbols to set in #arg
 * \return A new PT_Symbols with tail at the right place, or a core dump if #arg did not have a tail
 */
PT_Symbols PT_setSymbolsTail(PT_Symbols arg, PT_Symbols tail) {
  if (PT_isSymbolsMany(arg)) {
    return (PT_Symbols)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("Symbols has no Tail: %t\n", arg);
  return (PT_Symbols)NULL;
}

/**
 * Assert whether a PT_CharRange is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_CharRange
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidCharRange(PT_CharRange arg) {
  if (PT_isCharRangeCharacter(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangeRange(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_CharRange is a character. . May not be used to assert correctness of the PT_CharRange
 * \param[in] arg input PT_CharRange
 * \return ATtrue if #arg corresponds to the signature of a character, or ATfalse otherwise
 */
inline ATbool PT_isCharRangeCharacter(PT_CharRange arg) {
  if (ATgetType((ATerm)arg) != AT_INT) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangeCharacter, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_CharRange is a range. . May not be used to assert correctness of the PT_CharRange
 * \param[in] arg input PT_CharRange
 * \return ATtrue if #arg corresponds to the signature of a range, or ATfalse otherwise
 */
inline ATbool PT_isCharRangeRange(PT_CharRange arg) {
  if (ATgetType((ATerm)arg) != AT_APPL) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangeRange, NULL, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_CharRange has a start. 
 * \param[in] arg input PT_CharRange
 * \return ATtrue if the PT_CharRange had a start, or ATfalse otherwise
 */
ATbool PT_hasCharRangeStart(PT_CharRange arg) {
  if (PT_isCharRangeCharacter(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangeRange(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_CharRange has a end. 
 * \param[in] arg input PT_CharRange
 * \return ATtrue if the PT_CharRange had a end, or ATfalse otherwise
 */
ATbool PT_hasCharRangeEnd(PT_CharRange arg) {
  if (PT_isCharRangeRange(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the start int of a PT_CharRange. Note that the precondition is that this PT_CharRange actually has a start
 * \param[in] arg input PT_CharRange
 * \return the start of #arg, if it exist or an undefined value if it does not
 */
int PT_getCharRangeStart(PT_CharRange arg) {
  if (PT_isCharRangeCharacter(arg)) {
    return (int)ATgetInt((ATermInt) arg);
  }
  else 
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 0));
}

/**
 * Get the end int of a PT_CharRange. Note that the precondition is that this PT_CharRange actually has a end
 * \param[in] arg input PT_CharRange
 * \return the end of #arg, if it exist or an undefined value if it does not
 */
int PT_getCharRangeEnd(PT_CharRange arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the start of a PT_CharRange. The precondition being that this PT_CharRange actually has a start
 * \param[in] arg input PT_CharRange
 * \param[in] start new int to set in #arg
 * \return A new PT_CharRange with start at the right place, or a core dump if #arg did not have a start
 */
PT_CharRange PT_setCharRangeStart(PT_CharRange arg, int start) {
  if (PT_isCharRangeCharacter(arg)) {
    return (PT_CharRange)((ATerm) (ATerm) ATmakeInt(start));
  }
  else if (PT_isCharRangeRange(arg)) {
    return (PT_CharRange)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(start)), 0);
  }

  ATabort("CharRange has no Start: %t\n", arg);
  return (PT_CharRange)NULL;
}

/**
 * Set the end of a PT_CharRange. The precondition being that this PT_CharRange actually has a end
 * \param[in] arg input PT_CharRange
 * \param[in] end new int to set in #arg
 * \return A new PT_CharRange with end at the right place, or a core dump if #arg did not have a end
 */
PT_CharRange PT_setCharRangeEnd(PT_CharRange arg, int end) {
  if (PT_isCharRangeRange(arg)) {
    return (PT_CharRange)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(end)), 1);
  }

  ATabort("CharRange has no End: %t\n", arg);
  return (PT_CharRange)NULL;
}

/**
 * Assert whether a PT_CharRanges is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input PT_CharRanges
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool PT_isValidCharRanges(PT_CharRanges arg) {
  if (PT_isCharRangesEmpty(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangesSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_CharRanges is a empty. . May not be used to assert correctness of the PT_CharRanges
 * \param[in] arg input PT_CharRanges
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool PT_isCharRangesEmpty(PT_CharRanges arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, PT_patternCharRangesEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a PT_CharRanges is a single. . May not be used to assert correctness of the PT_CharRanges
 * \param[in] arg input PT_CharRanges
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool PT_isCharRangesSingle(PT_CharRanges arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternCharRangesSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_CharRanges is a many. . May not be used to assert correctness of the PT_CharRanges
 * \param[in] arg input PT_CharRanges
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool PT_isCharRangesMany(PT_CharRanges arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, PT_patternCharRangesMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a PT_CharRanges has a head. 
 * \param[in] arg input PT_CharRanges
 * \return ATtrue if the PT_CharRanges had a head, or ATfalse otherwise
 */
ATbool PT_hasCharRangesHead(PT_CharRanges arg) {
  if (PT_isCharRangesSingle(arg)) {
    return ATtrue;
  }
  else if (PT_isCharRangesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a PT_CharRanges has a tail. 
 * \param[in] arg input PT_CharRanges
 * \return ATtrue if the PT_CharRanges had a tail, or ATfalse otherwise
 */
ATbool PT_hasCharRangesTail(PT_CharRanges arg) {
  if (PT_isCharRangesMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the head PT_CharRange of a PT_CharRanges. Note that the precondition is that this PT_CharRanges actually has a head
 * \param[in] arg input PT_CharRanges
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
PT_CharRange PT_getCharRangesHead(PT_CharRanges arg) {
  if (PT_isCharRangesSingle(arg)) {
    return (PT_CharRange)ATgetFirst((ATermList)arg);
  }
  else 
    return (PT_CharRange)ATgetFirst((ATermList)arg);
}

/**
 * Get the tail PT_CharRanges of a PT_CharRanges. Note that the precondition is that this PT_CharRanges actually has a tail
 * \param[in] arg input PT_CharRanges
 * \return the tail of #arg, if it exist or an undefined value if it does not
 */
PT_CharRanges PT_getCharRangesTail(PT_CharRanges arg) {
  
    return (PT_CharRanges)ATgetNext((ATermList)arg);
}

/**
 * Set the head of a PT_CharRanges. The precondition being that this PT_CharRanges actually has a head
 * \param[in] arg input PT_CharRanges
 * \param[in] head new PT_CharRange to set in #arg
 * \return A new PT_CharRanges with head at the right place, or a core dump if #arg did not have a head
 */
PT_CharRanges PT_setCharRangesHead(PT_CharRanges arg, PT_CharRange head) {
  if (PT_isCharRangesSingle(arg)) {
    return (PT_CharRanges)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (PT_isCharRangesMany(arg)) {
    return (PT_CharRanges)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("CharRanges has no Head: %t\n", arg);
  return (PT_CharRanges)NULL;
}

/**
 * Set the tail of a PT_CharRanges. The precondition being that this PT_CharRanges actually has a tail
 * \param[in] arg input PT_CharRanges
 * \param[in] tail new PT_CharRanges to set in #arg
 * \return A new PT_CharRanges with tail at the right place, or a core dump if #arg did not have a tail
 */
PT_CharRanges PT_setCharRangesTail(PT_CharRanges arg, PT_CharRanges tail) {
  if (PT_isCharRangesMany(arg)) {
    return (PT_CharRanges)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("CharRanges has no Tail: %t\n", arg);
  return (PT_CharRanges)NULL;
}

/**
 * Apply functions to the children of a PT_ParseTree. 
 * \return A new PT_ParseTree with new children where the argument functions might have applied
 */
PT_ParseTree PT_visitParseTree(PT_ParseTree arg, PT_Tree (*acceptTop)(PT_Tree), int (*acceptAmbCnt)(int)) {
  if (PT_isParseTreeTop(arg)) {
    return PT_makeParseTreeTop(
        acceptTop ? acceptTop(PT_getParseTreeTop(arg)) : PT_getParseTreeTop(arg),
        acceptAmbCnt ? acceptAmbCnt(PT_getParseTreeAmbCnt(arg)) : PT_getParseTreeAmbCnt(arg));
  }
  ATabort("not a ParseTree: %t\n", arg);
  return (PT_ParseTree)NULL;
}
/**
 * Apply functions to the children of a PT_Tree. 
 * \return A new PT_Tree with new children where the argument functions might have applied
 */
PT_Tree PT_visitTree(PT_Tree arg, PT_Production (*acceptProd)(PT_Production), PT_Args (*acceptArgs)(PT_Args), PT_Symbol (*acceptSymbol)(PT_Symbol), int (*acceptCycleLength)(int), int (*acceptCharacter)(int)) {
  if (PT_isTreeAppl(arg)) {
    return PT_makeTreeAppl(
        acceptProd ? acceptProd(PT_getTreeProd(arg)) : PT_getTreeProd(arg),
        acceptArgs ? acceptArgs(PT_getTreeArgs(arg)) : PT_getTreeArgs(arg));
  }
  if (PT_isTreeCycle(arg)) {
    return PT_makeTreeCycle(
        acceptSymbol ? acceptSymbol(PT_getTreeSymbol(arg)) : PT_getTreeSymbol(arg),
        acceptCycleLength ? acceptCycleLength(PT_getTreeCycleLength(arg)) : PT_getTreeCycleLength(arg));
  }
  if (PT_isTreeAmb(arg)) {
    return PT_makeTreeAmb(
        acceptArgs ? acceptArgs(PT_getTreeArgs(arg)) : PT_getTreeArgs(arg));
  }
  if (PT_isTreeChar(arg)) {
    return PT_makeTreeChar(
        acceptCharacter ? acceptCharacter(PT_getTreeCharacter(arg)) : PT_getTreeCharacter(arg));
  }
  ATabort("not a Tree: %t\n", arg);
  return (PT_Tree)NULL;
}
/**
 * Apply functions to the children of a PT_Args. 
 * \return A new PT_Args with new children where the argument functions might have applied
 */
PT_Args PT_visitArgs(PT_Args arg, PT_Tree (*acceptHead)(PT_Tree)) {
  if (PT_isArgsEmpty(arg)) {
    return PT_makeArgsEmpty();
  }
  if (PT_isArgsSingle(arg)) {
    return PT_makeArgsSingle(
        acceptHead ? acceptHead(PT_getArgsHead(arg)) : PT_getArgsHead(arg));
  }
  if (PT_isArgsMany(arg)) {
    return PT_makeArgsMany(
        acceptHead ? acceptHead(PT_getArgsHead(arg)) : PT_getArgsHead(arg),
        PT_visitArgs(PT_getArgsTail(arg), acceptHead));
  }
  ATabort("not a Args: %t\n", arg);
  return (PT_Args)NULL;
}
/**
 * Apply functions to the children of a PT_Production. 
 * \return A new PT_Production with new children where the argument functions might have applied
 */
PT_Production PT_visitProduction(PT_Production arg, PT_Symbols (*acceptLhs)(PT_Symbols), PT_Symbol (*acceptRhs)(PT_Symbol), PT_Attributes (*acceptAttributes)(PT_Attributes)) {
  if (PT_isProductionDefault(arg)) {
    return PT_makeProductionDefault(
        acceptLhs ? acceptLhs(PT_getProductionLhs(arg)) : PT_getProductionLhs(arg),
        acceptRhs ? acceptRhs(PT_getProductionRhs(arg)) : PT_getProductionRhs(arg),
        acceptAttributes ? acceptAttributes(PT_getProductionAttributes(arg)) : PT_getProductionAttributes(arg));
  }
  if (PT_isProductionList(arg)) {
    return PT_makeProductionList(
        acceptRhs ? acceptRhs(PT_getProductionRhs(arg)) : PT_getProductionRhs(arg));
  }
  ATabort("not a Production: %t\n", arg);
  return (PT_Production)NULL;
}
/**
 * Apply functions to the children of a PT_Attributes. 
 * \return A new PT_Attributes with new children where the argument functions might have applied
 */
PT_Attributes PT_visitAttributes(PT_Attributes arg, PT_Attrs (*acceptAttrs)(PT_Attrs)) {
  if (PT_isAttributesNoAttrs(arg)) {
    return PT_makeAttributesNoAttrs();
  }
  if (PT_isAttributesAttrs(arg)) {
    return PT_makeAttributesAttrs(
        acceptAttrs ? acceptAttrs(PT_getAttributesAttrs(arg)) : PT_getAttributesAttrs(arg));
  }
  ATabort("not a Attributes: %t\n", arg);
  return (PT_Attributes)NULL;
}
/**
 * Apply functions to the children of a PT_Attrs. 
 * \return A new PT_Attrs with new children where the argument functions might have applied
 */
PT_Attrs PT_visitAttrs(PT_Attrs arg, PT_Attr (*acceptHead)(PT_Attr)) {
  if (PT_isAttrsEmpty(arg)) {
    return PT_makeAttrsEmpty();
  }
  if (PT_isAttrsSingle(arg)) {
    return PT_makeAttrsSingle(
        acceptHead ? acceptHead(PT_getAttrsHead(arg)) : PT_getAttrsHead(arg));
  }
  if (PT_isAttrsMany(arg)) {
    return PT_makeAttrsMany(
        acceptHead ? acceptHead(PT_getAttrsHead(arg)) : PT_getAttrsHead(arg),
        PT_visitAttrs(PT_getAttrsTail(arg), acceptHead));
  }
  ATabort("not a Attrs: %t\n", arg);
  return (PT_Attrs)NULL;
}
/**
 * Apply functions to the children of a PT_Attr. 
 * \return A new PT_Attr with new children where the argument functions might have applied
 */
PT_Attr PT_visitAttr(PT_Attr arg, PT_Associativity (*acceptAssoc)(PT_Associativity), ATerm (*acceptTerm)(ATerm), char* (*acceptModuleName)(char*)) {
  if (PT_isAttrAssoc(arg)) {
    return PT_makeAttrAssoc(
        acceptAssoc ? acceptAssoc(PT_getAttrAssoc(arg)) : PT_getAttrAssoc(arg));
  }
  if (PT_isAttrTerm(arg)) {
    return PT_makeAttrTerm(
        acceptTerm ? acceptTerm(PT_getAttrTerm(arg)) : PT_getAttrTerm(arg));
  }
  if (PT_isAttrId(arg)) {
    return PT_makeAttrId(
        acceptModuleName ? acceptModuleName(PT_getAttrModuleName(arg)) : PT_getAttrModuleName(arg));
  }
  if (PT_isAttrBracket(arg)) {
    return PT_makeAttrBracket();
  }
  if (PT_isAttrReject(arg)) {
    return PT_makeAttrReject();
  }
  if (PT_isAttrPrefer(arg)) {
    return PT_makeAttrPrefer();
  }
  if (PT_isAttrAvoid(arg)) {
    return PT_makeAttrAvoid();
  }
  ATabort("not a Attr: %t\n", arg);
  return (PT_Attr)NULL;
}
/**
 * Apply functions to the children of a PT_Associativity. 
 * \return A new PT_Associativity with new children where the argument functions might have applied
 */
PT_Associativity PT_visitAssociativity(PT_Associativity arg) {
  if (PT_isAssociativityLeft(arg)) {
    return PT_makeAssociativityLeft();
  }
  if (PT_isAssociativityRight(arg)) {
    return PT_makeAssociativityRight();
  }
  if (PT_isAssociativityAssoc(arg)) {
    return PT_makeAssociativityAssoc();
  }
  if (PT_isAssociativityNonAssoc(arg)) {
    return PT_makeAssociativityNonAssoc();
  }
  ATabort("not a Associativity: %t\n", arg);
  return (PT_Associativity)NULL;
}
/**
 * Apply functions to the children of a PT_Symbol. 
 * \return A new PT_Symbol with new children where the argument functions might have applied
 */
PT_Symbol PT_visitSymbol(PT_Symbol arg, char* (*acceptString)(char*), PT_Symbols (*acceptSymbols)(PT_Symbols), PT_Symbols (*acceptRest)(PT_Symbols), int (*acceptNumber)(int), char* (*acceptSort)(char*), PT_Symbols (*acceptParameters)(PT_Symbols), PT_CharRanges (*acceptRanges)(PT_CharRanges)) {
  if (PT_isSymbolLit(arg)) {
    return PT_makeSymbolLit(
        acceptString ? acceptString(PT_getSymbolString(arg)) : PT_getSymbolString(arg));
  }
  if (PT_isSymbolCilit(arg)) {
    return PT_makeSymbolCilit(
        acceptString ? acceptString(PT_getSymbolString(arg)) : PT_getSymbolString(arg));
  }
  if (PT_isSymbolCf(arg)) {
    return PT_makeSymbolCf(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolLex(arg)) {
    return PT_makeSymbolLex(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolEmpty(arg)) {
    return PT_makeSymbolEmpty();
  }
  if (PT_isSymbolSeq(arg)) {
    return PT_makeSymbolSeq(
        acceptSymbols ? acceptSymbols(PT_getSymbolSymbols(arg)) : PT_getSymbolSymbols(arg));
  }
  if (PT_isSymbolOpt(arg)) {
    return PT_makeSymbolOpt(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolAlt(arg)) {
    return PT_makeSymbolAlt(
        PT_visitSymbol(PT_getSymbolLhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolRhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolTuple(arg)) {
    return PT_makeSymbolTuple(
        PT_visitSymbol(PT_getSymbolHead(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        acceptRest ? acceptRest(PT_getSymbolRest(arg)) : PT_getSymbolRest(arg));
  }
  if (PT_isSymbolSort(arg)) {
    return PT_makeSymbolSort(
        acceptString ? acceptString(PT_getSymbolString(arg)) : PT_getSymbolString(arg));
  }
  if (PT_isSymbolIterPlus(arg)) {
    return PT_makeSymbolIterPlus(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterStar(arg)) {
    return PT_makeSymbolIterStar(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterPlusSep(arg)) {
    return PT_makeSymbolIterPlusSep(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolSeparator(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterStarSep(arg)) {
    return PT_makeSymbolIterStarSep(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolSeparator(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolIterN(arg)) {
    return PT_makeSymbolIterN(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        acceptNumber ? acceptNumber(PT_getSymbolNumber(arg)) : PT_getSymbolNumber(arg));
  }
  if (PT_isSymbolIterSepN(arg)) {
    return PT_makeSymbolIterSepN(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolSeparator(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        acceptNumber ? acceptNumber(PT_getSymbolNumber(arg)) : PT_getSymbolNumber(arg));
  }
  if (PT_isSymbolFunc(arg)) {
    return PT_makeSymbolFunc(
        acceptSymbols ? acceptSymbols(PT_getSymbolSymbols(arg)) : PT_getSymbolSymbols(arg),
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolParameterizedSort(arg)) {
    return PT_makeSymbolParameterizedSort(
        acceptSort ? acceptSort(PT_getSymbolSort(arg)) : PT_getSymbolSort(arg),
        acceptParameters ? acceptParameters(PT_getSymbolParameters(arg)) : PT_getSymbolParameters(arg));
  }
  if (PT_isSymbolStrategy(arg)) {
    return PT_makeSymbolStrategy(
        PT_visitSymbol(PT_getSymbolLhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges),
        PT_visitSymbol(PT_getSymbolRhs(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolVarSym(arg)) {
    return PT_makeSymbolVarSym(
        PT_visitSymbol(PT_getSymbolSymbol(arg), acceptString, acceptSymbols, acceptRest, acceptNumber, acceptSort, acceptParameters, acceptRanges));
  }
  if (PT_isSymbolLayout(arg)) {
    return PT_makeSymbolLayout();
  }
  if (PT_isSymbolCharClass(arg)) {
    return PT_makeSymbolCharClass(
        acceptRanges ? acceptRanges(PT_getSymbolRanges(arg)) : PT_getSymbolRanges(arg));
  }
  ATabort("not a Symbol: %t\n", arg);
  return (PT_Symbol)NULL;
}
/**
 * Apply functions to the children of a PT_Symbols. 
 * \return A new PT_Symbols with new children where the argument functions might have applied
 */
PT_Symbols PT_visitSymbols(PT_Symbols arg, PT_Symbol (*acceptHead)(PT_Symbol)) {
  if (PT_isSymbolsEmpty(arg)) {
    return PT_makeSymbolsEmpty();
  }
  if (PT_isSymbolsSingle(arg)) {
    return PT_makeSymbolsSingle(
        acceptHead ? acceptHead(PT_getSymbolsHead(arg)) : PT_getSymbolsHead(arg));
  }
  if (PT_isSymbolsMany(arg)) {
    return PT_makeSymbolsMany(
        acceptHead ? acceptHead(PT_getSymbolsHead(arg)) : PT_getSymbolsHead(arg),
        PT_visitSymbols(PT_getSymbolsTail(arg), acceptHead));
  }
  ATabort("not a Symbols: %t\n", arg);
  return (PT_Symbols)NULL;
}
/**
 * Apply functions to the children of a PT_CharRange. 
 * \return A new PT_CharRange with new children where the argument functions might have applied
 */
PT_CharRange PT_visitCharRange(PT_CharRange arg, int (*acceptStart)(int), int (*acceptEnd)(int)) {
  if (PT_isCharRangeCharacter(arg)) {
    return PT_makeCharRangeCharacter(
        acceptStart ? acceptStart(PT_getCharRangeStart(arg)) : PT_getCharRangeStart(arg));
  }
  if (PT_isCharRangeRange(arg)) {
    return PT_makeCharRangeRange(
        acceptStart ? acceptStart(PT_getCharRangeStart(arg)) : PT_getCharRangeStart(arg),
        acceptEnd ? acceptEnd(PT_getCharRangeEnd(arg)) : PT_getCharRangeEnd(arg));
  }
  ATabort("not a CharRange: %t\n", arg);
  return (PT_CharRange)NULL;
}
/**
 * Apply functions to the children of a PT_CharRanges. 
 * \return A new PT_CharRanges with new children where the argument functions might have applied
 */
PT_CharRanges PT_visitCharRanges(PT_CharRanges arg, PT_CharRange (*acceptHead)(PT_CharRange)) {
  if (PT_isCharRangesEmpty(arg)) {
    return PT_makeCharRangesEmpty();
  }
  if (PT_isCharRangesSingle(arg)) {
    return PT_makeCharRangesSingle(
        acceptHead ? acceptHead(PT_getCharRangesHead(arg)) : PT_getCharRangesHead(arg));
  }
  if (PT_isCharRangesMany(arg)) {
    return PT_makeCharRangesMany(
        acceptHead ? acceptHead(PT_getCharRangesHead(arg)) : PT_getCharRangesHead(arg),
        PT_visitCharRanges(PT_getCharRangesTail(arg), acceptHead));
  }
  ATabort("not a CharRanges: %t\n", arg);
  return (PT_CharRanges)NULL;
}

