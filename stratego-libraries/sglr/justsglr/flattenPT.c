/*
    $Id: flattenPT.c,v 1.2.4.4 2004/10/18 13:12:17 uid507 Exp $  
*/

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <MEPT-utils.h>

ATbool char_to_string = ATfalse;
 
static PT_Tree flattenTerm(PT_Tree t, ATbool inList);
static PT_Tree flattenLayout(PT_Tree t);

/*{{{  patterns for matching SDF2 regular syntax in AsFix2 trees */

/* Pattern for literal */
static ATerm asfix2_literal = NULL;

/* Patterns to deal with unflattened lists for lexicals */
static ATerm asfix2_empty_to_star_lex_sort = NULL;
static ATerm asfix2_single_to_plus_lex_sort = NULL;
static ATerm asfix2_plus_to_star_lex_sort = NULL;
static ATerm asfix2_plus_plus_to_plus_lex_sort = NULL;
static ATerm asfix2_star_star_to_star_lex_sort = NULL;
static ATerm asfix2_star_plus_to_plus_lex_sort = NULL;
static ATerm asfix2_plus_star_to_plus_lex_sort = NULL;

/* Patterns to deal with unflattened lists for charclasses */
static ATerm asfix2_empty_to_star_lex_charclass = NULL;
static ATerm asfix2_single_to_plus_lex_charclass = NULL;
static ATerm asfix2_plus_to_star_lex_charclass = NULL;
static ATerm asfix2_plus_plus_to_plus_lex_charclass = NULL;
static ATerm asfix2_star_star_to_star_lex_charclass = NULL;
static ATerm asfix2_star_plus_to_plus_lex_charclass = NULL;
static ATerm asfix2_plus_star_to_plus_lex_charclass = NULL;

/* Patterns to deal with unflattened lists without separators */
static ATerm asfix2_empty_to_star = NULL;
static ATerm asfix2_single_to_plus = NULL;
static ATerm asfix2_plus_to_star = NULL;
static ATerm asfix2_plus_plus_to_plus = NULL;
static ATerm asfix2_star_star_to_star = NULL;
static ATerm asfix2_star_plus_to_plus = NULL;
static ATerm asfix2_plus_star_to_plus = NULL;  

/* Patterns to deal with unflattened lists with separators */
static ATerm asfix2_empty_to_star_sep = NULL;
static ATerm asfix2_single_to_plus_sep = NULL;
static ATerm asfix2_plus_sep_to_star_sep = NULL;
static ATerm asfix2_plus_sep_plus_sep_to_plus_sep = NULL;
static ATerm asfix2_star_sep_star_sep_to_star_sep = NULL;
static ATerm asfix2_star_sep_plus_sep_to_plus_sep = NULL;
static ATerm asfix2_plus_sep_star_sep_to_plus_sep = NULL; 

/*}}}  */
/*{{{  static void init_asfix_patterns() */

static void init_asfix_patterns()
{
  ATprotect(&asfix2_literal);
  asfix2_literal = ATparse("lit(<term>)"); 

  ATprotect(&asfix2_empty_to_star_lex_sort);
  asfix2_empty_to_star_lex_sort  =
    ATparse("prod([],lex(iter-star(sort(<term>))),no-attrs)"); 

  ATprotect(&asfix2_single_to_plus_lex_sort);
  asfix2_single_to_plus_lex_sort =
    ATparse("prod([lex(sort(<term>))],lex(iter(sort(<term>))),no-attrs)");

  ATprotect(&asfix2_plus_to_star_lex_sort);
  asfix2_plus_to_star_lex_sort =
    ATparse("prod([lex(iter(sort(<term>)))]," \
            "lex(iter-star(sort(<term>))),no-attrs)");

  ATprotect(&asfix2_plus_plus_to_plus_lex_sort);
  asfix2_plus_plus_to_plus_lex_sort =
    ATparse("prod([lex(iter(sort(<term>))),lex(iter(sort(<term>)))]," \
            "lex(iter(sort(<term>))),<term>)"); 

  ATprotect(&asfix2_star_star_to_star_lex_sort);
  asfix2_star_star_to_star_lex_sort =
    ATparse("prod([lex(sort(iter-star(<term>)))," \
            "lex(iter-star(sort(<term>)))]," \
            "lex(iter-star(sort(<term>))),<term>)");  

  ATprotect(&asfix2_star_plus_to_plus_lex_sort);
  asfix2_star_plus_to_plus_lex_sort =
    ATparse("prod([lex(iter-star(sort(<term>))),lex(iter(sort(<term>)))]," \
            "lex(iter(sort(<term>))),<term>)");     

  ATprotect(&asfix2_plus_star_to_plus_lex_sort);
  asfix2_plus_star_to_plus_lex_sort =
    ATparse("prod([lex(iter(sort(<term>))),lex(iter-star(sort(<term>)))]," \
            "lex(iter(sort(<term>))),<term>)");  

  ATprotect(&asfix2_empty_to_star_lex_charclass);
  asfix2_empty_to_star_lex_charclass  =
    ATparse("prod([],lex(iter-star(char-class(<term>))),no-attrs)"); 

  ATprotect(&asfix2_single_to_plus_lex_charclass);
  asfix2_single_to_plus_lex_charclass =
    ATparse("prod([char-class(<term>)]," \
            "lex(iter(char-class(<term>))),no-attrs)");             

  ATprotect(&asfix2_plus_to_star_lex_charclass);
  asfix2_plus_to_star_lex_charclass =
    ATparse("prod([lex(iter(char-class(<term>)))]," \
            "lex(iter-star(char-class(<term>))),no-attrs)");  

  ATprotect(&asfix2_plus_plus_to_plus_lex_charclass);
  asfix2_plus_plus_to_plus_lex_charclass =
    ATparse("prod([lex(iter(char-class(<term>)))," \
            "lex(iter(char-class(<term>)))]," \
            "lex(iter(char-class(<term>))),<term>)");       

  ATprotect(&asfix2_star_star_to_star_lex_charclass);
  asfix2_star_star_to_star_lex_charclass =
    ATparse("prod([lex(iter-star(char-class(<term>)))," \
            "lex(iter-star(char-class(<term>)))]," \
            "lex(iter-star(char-class(<term>))),<term>)");  

  ATprotect(&asfix2_star_plus_to_plus_lex_charclass);
  asfix2_star_plus_to_plus_lex_charclass =
    ATparse("prod([lex(iter-star(char-class(<term>)))," \
            "lex(iter(char-class(<term>)))]," \
            "lex(iter(char-class(<term>))),<term>)");      

  ATprotect(&asfix2_plus_star_to_plus_lex_charclass);
  asfix2_plus_star_to_plus_lex_charclass =
    ATparse("prod([lex(iter(char-class(<term>)))," \
            "lex(iter-star(char-class(<term>)))]," \
            "lex(iter(char-class(<term>))),<term>)");   

  ATprotect(&asfix2_empty_to_star);
  asfix2_empty_to_star  =
    ATparse("prod([],cf(iter-star(<term>)),no-attrs)"); 

  ATprotect(&asfix2_single_to_plus);
  asfix2_single_to_plus =
    ATparse("prod([cf(<term>)],cf(iter(<term>)),no-attrs)");    

  ATprotect(&asfix2_plus_to_star);
  asfix2_plus_to_star =
    ATparse("prod([cf(iter(<term>))],cf(iter-star(<term>)),no-attrs)");   

  ATprotect(&asfix2_plus_plus_to_plus);
  asfix2_plus_plus_to_plus =
    ATparse("prod([cf(iter(<term>)),cf(opt(layout)),cf(iter(<term>))]," \
            "cf(iter(<term>)),<term>)");

  ATprotect(&asfix2_star_star_to_star);
  asfix2_star_star_to_star =
    ATparse("prod([cf(iter-star(<term>)),cf(opt(layout))," \
            "cf(iter-star(<term>))],cf(iter-star(<term>)),<term>)"); 

  ATprotect(&asfix2_star_plus_to_plus);
  asfix2_star_plus_to_plus =
    ATparse("prod([cf(iter-star(<term>)),cf(opt(layout)),cf(iter(<term>))]," \
            "cf(iter(<term>)),<term>)"); 

  ATprotect(&asfix2_plus_star_to_plus);
  asfix2_plus_star_to_plus =
    ATparse("prod([cf(iter(<term>)),cf(opt(layout)),cf(iter-star(<term>))]," \
            "cf(iter(<term>)),<term>)");

  ATprotect(&asfix2_empty_to_star_sep);
  asfix2_empty_to_star_sep =
    ATparse("prod([],cf(iter-star-sep(<term>,<term>)),no-attrs)");   

  ATprotect(&asfix2_single_to_plus_sep);
  asfix2_single_to_plus_sep =
    ATparse("prod([cf(<term>)],cf(iter-sep(<term>,<term>)),no-attrs)");  

  ATprotect(&asfix2_plus_sep_to_star_sep);
  asfix2_plus_sep_to_star_sep =
    ATparse("prod([cf(iter-sep(<list>))],cf(iter-star-sep(<list>)),no-attrs)"); 

  ATprotect(&asfix2_plus_sep_plus_sep_to_plus_sep);
  asfix2_plus_sep_plus_sep_to_plus_sep =
    ATparse("prod([cf(iter-sep(<list>)),cf(opt(layout)),<term>," \
            "cf(opt(layout)),cf(iter-sep(<list>))],cf(iter-sep(<list>))," \
            "<term>)");

  ATprotect(&asfix2_star_sep_star_sep_to_star_sep);
  asfix2_star_sep_star_sep_to_star_sep =
    ATparse("prod([cf(iter-star-sep(<list>)),cf(opt(layout)),<term>," \
            "cf(opt(layout)),cf(iter-star-sep(<list>))]," \
            "cf(iter-star-sep(<list>)),<term>)");    

  ATprotect(&asfix2_star_sep_plus_sep_to_plus_sep);
  asfix2_star_sep_plus_sep_to_plus_sep =
    ATparse("prod([cf(iter-star-sep(<list>)),cf(opt(layout)),<term>," \
            "cf(opt(layout)),cf(iter-sep(<list>))],cf(iter-sep(<list>))," \
            "<term>)");                             

  ATprotect(&asfix2_plus_sep_star_sep_to_plus_sep);
  asfix2_plus_sep_star_sep_to_plus_sep =
    ATparse("prod([cf(iter-sep(<list>)),cf(opt(layout)),<term>," \
            "cf(opt(layout)),cf(iter-star-sep(<list>))],cf(iter-sep(<list>))," \
            "<term>)"); 

}

/*}}}  */
/*{{{  static void init_patterns(void) */

static void init_patterns(void)
{
  static int patterns_initialized = 0;

  if (patterns_initialized) {
    return;
  }
  patterns_initialized = 1;

  init_asfix_patterns();
}

/*}}}  */

/*{{{  static PT_Args collectCharsRec(PT_Tree tree, PT_Args tail) */

static PT_Args collectCharsRec(PT_Tree tree, PT_Args tail)
{
  if (PT_isTreeChar(tree)) {
    return PT_makeArgsList(tree, tail);
  }
  else if (PT_isTreeAmb(tree)) {
    return collectCharsRec(PT_getArgsHead(PT_getTreeArgs(tree)), tail);
  }
  else if (PT_isTreeAppl(tree)) {
    PT_Args args = PT_getTreeArgs(tree);

    for ( ; !PT_isArgsEmpty(args); args = PT_getArgsTail(args)) {
      PT_Tree head = PT_getArgsHead(args);
      tail = collectCharsRec(head, tail);
    }

    return tail;
  }

  ATerror("collectCharsRec: this function only supports AsFix2 trees");
  return NULL;
}

/*}}}  */
/*{{{  static PT_Args collectChars(PT_Tree tree) */

static PT_Args collectChars(PT_Tree tree)
{
  return PT_reverseArgs(collectCharsRec(tree, PT_makeArgsEmpty()));
}

/*}}}  */

/*{{{  ATbool isLexicalListProd(PT_Production prod) */

ATbool isLexicalListProd(PT_Production prod)
{
  ATerm sort1, sort2, sort3;

  if (ATmatchTerm((ATerm)prod, asfix2_empty_to_star_lex_sort, NULL)) {
    return ATtrue;
  }

  if (ATmatchTerm((ATerm)prod, asfix2_single_to_plus_lex_sort, &sort1, &sort2)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_to_star_lex_sort, &sort1, &sort2)) {
    return ATisEqual(sort1, sort2);
  } 

  if (ATmatchTerm((ATerm)prod, asfix2_plus_plus_to_plus_lex_sort,
                  &sort1, &sort2, &sort3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_star_to_star_lex_sort,
                  &sort1, &sort2, &sort3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_plus_to_plus_lex_sort,
                  &sort1, &sort2, &sort3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_star_to_plus_lex_sort,
                  &sort1, &sort2, &sort3, NULL)) {
    return ATisEqual(sort1, sort2) && ATisEqual(sort1, sort3);
  }

  return ATfalse;
}

/*}}}  */

/*{{{  ATbool isCharClassListProd(PT_Production prod) */

ATbool isCharClassListProd(PT_Production prod)
{
  ATerm cc1, cc2, cc3;

  if (ATmatchTerm((ATerm)prod, asfix2_empty_to_star_lex_charclass, NULL)) {
    return ATtrue;
  }

  if (ATmatchTerm((ATerm)prod, asfix2_single_to_plus_lex_charclass, &cc1, &cc2)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_to_star_lex_charclass, &cc1, &cc2)) {
    return ATisEqual(cc1, cc2);
  }

  if (ATmatchTerm((ATerm)prod, asfix2_plus_plus_to_plus_lex_charclass,
                  &cc1, &cc2, &cc3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_star_to_star_lex_charclass,
                  &cc1, &cc2, &cc3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_plus_to_plus_lex_charclass,
                  &cc1, &cc2, &cc3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_star_to_plus_lex_charclass,
                  &cc1, &cc2, &cc3, NULL)) {
    return ATisEqual(cc1, cc2) && ATisEqual(cc1, cc3);
  }

  return ATfalse;
}

/*}}}  */

/*{{{  ATbool isListProd(PT_Production prod) */

ATbool isListProd(PT_Production prod)
{
  ATerm sort1, sort2, sort3;

  if (ATmatchTerm((ATerm)prod, asfix2_empty_to_star, NULL)) {
    return ATtrue;
  }

  if (ATmatchTerm((ATerm)prod, asfix2_single_to_plus, &sort1, &sort2)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_to_star, &sort1, &sort2)) {
    return ATisEqual(sort1, sort2);
  }

  if (ATmatchTerm((ATerm)prod, asfix2_plus_plus_to_plus,
                  &sort1, &sort2, &sort3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_star_to_star,
                  &sort1, &sort2, &sort3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_plus_to_plus,
                  &sort1, &sort2, &sort3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_star_to_plus,
                  &sort1, &sort2, &sort3, NULL)) {
    return ATisEqual(sort1, sort2) && ATisEqual(sort1, sort3);
  }

  return ATfalse;
}

/*}}}  */

/*{{{  ATbool isSepListProd(PT_Production prod) */

ATbool isSepListProd(PT_Production prod)
{
  ATerm sep1, sep2;
  ATerm sort1, sort2;
  ATermList sortSep1, sortSep2, sortSep3;

  if (ATmatchTerm((ATerm)prod, asfix2_empty_to_star_sep, NULL, NULL)) {
    return ATtrue;
  }

  if (ATmatchTerm((ATerm)prod, 
		  asfix2_single_to_plus_sep, &sort1, &sort2, NULL)) {
    return ATisEqual(sort1, sort2);
  }

  if (ATmatchTerm((ATerm)prod, 
		  asfix2_plus_sep_to_star_sep, &sortSep1, &sortSep2, NULL)) {
    return ATisEqual(sortSep1, sortSep2);
  }

  if (ATmatchTerm((ATerm)prod, asfix2_plus_sep_plus_sep_to_plus_sep,
                  &sortSep1, &sep1, &sortSep2, &sortSep3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_sep_star_sep_to_star_sep,
                  &sortSep1, &sep1, &sortSep2, &sortSep3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_star_sep_plus_sep_to_plus_sep,
                  &sortSep1, &sep1, &sortSep2, &sortSep3, NULL)
      ||
      ATmatchTerm((ATerm)prod, asfix2_plus_sep_star_sep_to_plus_sep,
                  &sortSep1, &sep1, &sortSep2, &sortSep3, NULL)) {
    if (ATmatchTerm(sep1, asfix2_literal, NULL)) {
      sep2 = ATgetLast(sortSep1);
      return ATisEqual(sortSep1, sortSep2) && 
             ATisEqual(sortSep1, sortSep3) &&
             ATisEqual(sep1, sep2);
    }
    else {
      return ATisEqual(sortSep1, sortSep2) && 
             ATisEqual(sortSep1, sortSep3);
    }
  }

  return ATfalse;
} 

/*}}}  */

/*{{{  void PT_initAsFix2Api() */

void PT_initAsFix2Api()
{
  init_patterns();
}

/*}}}  */

/*{{{  static ATbool sameListSymbol(PT_Symbol sym1, PT_Symbol sym2) */

static ATbool sameListSymbol(PT_Symbol sym1, PT_Symbol sym2)
{
  PT_Symbol elem1, elem2;
  PT_Symbol sep1, sep2;

  if ((PT_isSymbolCf(sym1) && PT_isSymbolCf(sym2)) ||
      (PT_isSymbolLex(sym1) && PT_isSymbolLex(sym2))) {
    sym1 = PT_getSymbolSymbol(sym1);
    sym2 = PT_getSymbolSymbol(sym2);
  }
  else if (PT_isSymbolCf(sym1) || PT_isSymbolCf(sym2) ||
	   PT_isSymbolLex(sym1) || PT_isSymbolLex(sym2)) {
    return ATfalse;
  }

  elem1 = PT_getSymbolSymbol(sym1);
  elem2 = PT_getSymbolSymbol(sym1);

  if (!PT_isEqualSymbol(elem1, elem2)) {
    return ATfalse;
  }

  if (PT_hasSymbolSeparator(sym1) && PT_hasSymbolSeparator(sym2)) {
    sep1 = PT_getSymbolSeparator(sym1);
    sep2 = PT_getSymbolSeparator(sym2);

    if (PT_isEqualSymbol(sep1, sep2)) {
      return ATtrue;
    }
    else {
      return ATfalse;
    }
  }
  else if (PT_hasSymbolSeparator(sym1) ||
	   PT_hasSymbolSeparator(sym2)) {
    return ATfalse;
  }

  return ATtrue;
}

/*}}}  */

/*{{{  static PT_Args flattenArgs(PT_Args tl) */

static PT_Args flattenArgs(PT_Args tl)
{
  PT_Tree newTerm;

  if (PT_isArgsEmpty(tl)) {
    return tl;
  }

  newTerm = flattenTerm(PT_getArgsHead(tl), ATfalse);
  if (newTerm) {
    return PT_makeArgsList(newTerm, flattenArgs(PT_getArgsTail(tl)));
  }
  else {
    return flattenArgs(PT_getArgsTail(tl));
  }
}

/*}}}  */

/*{{{  static PT_Tree makeCharFromInt(PT_Tree i) */

static PT_Tree makeCharFromInt(PT_Tree i)
{
  if (char_to_string) {
    char strbuf[2];  
    
    strbuf[0] = (char)ATgetInt((ATermInt)i);
    strbuf[1] = '\0';
    return (PT_Tree)ATmake("<str>", strbuf);
  }
  else {
    return i;
  }
}

/*}}}  */
/*{{{  static PT_Args flattenLexicalList(PT_Tree t, PT_Args tail) */

static PT_Args flattenLexicalList(PT_Tree t, PT_Args tail)
{
  PT_Production prod;
  PT_Args       args;
  PT_Tree       leftBranch, rightBranch;

  if (!PT_isTreeAppl(t)) {
    ATerror("flattenLexicalList: not an application: %t\n", t);
  } 
  
  prod = PT_getTreeProd(t);
  args = PT_getTreeArgs(t);

  if (!isLexicalListProd(prod)) {
    PT_Tree newTerm = flattenTerm(t, ATtrue);
    if (newTerm) {
      return PT_makeArgsList(newTerm, tail);
    }
    else {
      return tail;
    }
  }  

  if (PT_isArgsEmpty(args)) {
    return tail;
  }

  leftBranch = PT_getArgsHead(args);
  args = PT_getArgsTail(args);

  if (PT_isArgsEmpty(args)) {
    return flattenLexicalList(leftBranch, tail);
  }
  
  rightBranch = PT_getArgsHead(args);
  args = PT_getArgsTail(args);

  if (PT_isArgsEmpty(args)) {
    tail = flattenLexicalList(rightBranch, tail);
    tail = flattenLexicalList(leftBranch, tail);

    return tail;
  }
  
  ATerror("flattenLexicalList: illegal list: %t\n", t);
  return PT_makeArgsEmpty();
}

/*}}}  */
/*{{{  static PT_Args flattenCharClassList(PT_Tree tree, PT_Args tail) */

static PT_Args flattenCharClassList(PT_Tree tree, PT_Args tail)
{
  PT_Production prod;
  PT_Args       args;
  PT_Tree       leftBranch, rightBranch;

  if (PT_isTreeAppl(tree)) { 
    prod = PT_getTreeProd(tree);
    args = PT_getTreeArgs(tree);

    if (!isCharClassListProd(prod)) {
      PT_Tree newTerm = flattenTerm(tree, ATtrue);
      if (newTerm) {
        return PT_makeArgsList(newTerm, tail);
      }
      else {
        return tail;
      }
    }
  
    if (PT_isArgsEmpty(args)) {
      return tail;
    }
  
    leftBranch = PT_getArgsHead(args);
    args = PT_getArgsTail(args);

    if (PT_isArgsEmpty(args)) {
      return flattenCharClassList(leftBranch, tail);
    }
  
    rightBranch = PT_getArgsHead(args);
    args = PT_getArgsTail(args);

    if (PT_isArgsEmpty(args)) {
      tail = flattenCharClassList(rightBranch, tail);
      tail = flattenCharClassList(leftBranch, tail);

      return tail;
    }                 

    ATerror("flattenCharClassList: illegal list: %t\n", tree);
    return PT_makeArgsEmpty();
  }
  else /*if (ATgetType(t) == AT_INT)*/ {
    return PT_makeArgsList(makeCharFromInt(tree), tail);
  }
}

/*}}}  */
/*{{{  static PT_Args flattenList(PT_Tree tree, PT_Symbol listSymbol, PT_Args tail) */

static PT_Args flattenList(PT_Tree tree, PT_Symbol listSymbol, PT_Args tail)
{
  PT_Production prod;
  PT_Args       args;
  PT_Tree       leftBranch, layoutAfterLeft, rightBranch;
  PT_Symbol     sym;

  if (PT_isTreeAmb(tree)) {
    PT_Tree amb = flattenTree(tree);
    return PT_makeArgsList(amb, tail);
  }

  if (PT_isTreeAppl(tree)) {
    prod = PT_getTreeProd(tree);
    sym = PT_getProductionRhs(prod);
    args = PT_getTreeArgs(tree);

    if (!isListProd(prod)) {
      PT_Tree newTerm;
      newTerm = flattenTerm(tree, sameListSymbol(PT_getProductionRhs(prod),
			                         listSymbol));
      if (newTerm) {
	return PT_makeArgsList(newTerm, tail);
      }
      else {
	return tail;
      }
    }

    sym = PT_getProductionRhs(prod);

    if (!sameListSymbol(sym, listSymbol)) {
      PT_Tree newTerm;
      newTerm = flattenTerm(tree, ATfalse);
      if (newTerm) {
	return PT_makeArgsList(newTerm, tail);
      } 
      else {
	return tail;
      } 
    }
    
    if (PT_isArgsEmpty(args)) {  
      return tail;
    }

    leftBranch = PT_getArgsHead(args);
    args = PT_getArgsTail(args);

    if (PT_isArgsEmpty(args)) {
      return flattenList(leftBranch, listSymbol, tail);
    }                                    
    
    layoutAfterLeft = PT_getArgsHead(args);
    args = PT_getArgsTail(args);

    if (PT_hasArgsHead(args)) {
      rightBranch = PT_getArgsHead(args);
      args = PT_getArgsTail(args);

      if (PT_isArgsEmpty(args)) {
	tail = flattenList(rightBranch, listSymbol, tail);
	tail = PT_makeArgsList(flattenLayout(layoutAfterLeft), tail);
	tail = flattenList(leftBranch, listSymbol, tail);
    
	return tail;
      }
    }
  }
  
  ATerror("flattenList: illegal list: %t\n", tree);
  return PT_makeArgsEmpty();
}

/*}}}  */
/*{{{  static PT_Args flattenSepList(PT_Tree tree, PT_Symbol listSymbol, PT_Args tail) */

static PT_Args flattenSepList(PT_Tree tree, PT_Symbol listSymbol, PT_Args tail)
{
  PT_Production prod;
  PT_Args       args;
  PT_Tree       leftBranch, layoutAfterLeft, 
                separator, layoutAfterSep, rightBranch;
  PT_Symbol     sym;

  if (PT_isTreeAmb(tree)) {
    PT_Tree amb = flattenTree(tree);
    return PT_makeArgsList(amb, tail);
  }
  
  if (PT_isTreeAppl(tree)) {
    prod = PT_getTreeProd(tree);
    args = PT_getTreeArgs(tree);

    if (!isSepListProd(prod)) {
      PT_Tree newTerm;
      newTerm = flattenTerm(tree, sameListSymbol(PT_getProductionRhs(prod),
			                         listSymbol));
      if (newTerm) {
	return PT_makeArgsList(newTerm, tail);
      }
      else {
	return tail;
      }
    }

    sym = PT_getProductionRhs(prod);

    if (!sameListSymbol(sym, listSymbol)) {
      PT_Tree newTerm;
      newTerm = flattenTerm(tree, ATfalse);
      if (newTerm) {
	return PT_makeArgsList(newTerm, tail);
      } 
      else {
	return tail;
      } 
    }

    if (PT_isArgsEmpty(args)) {  
      return tail;
    }

    leftBranch = PT_getArgsHead(args);
    args = PT_getArgsTail(args);

    if (PT_isArgsEmpty(args)) {
      return flattenSepList(leftBranch, listSymbol, tail);
    }                                    

    layoutAfterLeft = PT_getArgsHead(args);
    args = PT_getArgsTail(args);

    if (PT_hasArgsHead(args)) {
      separator = PT_getArgsHead(args);
      args = PT_getArgsTail(args);

      if (PT_hasArgsHead(args)) {
	layoutAfterSep = PT_getArgsHead(args);
	args = PT_getArgsTail(args);

	if (PT_hasArgsHead(args)) {
	  rightBranch = PT_getArgsHead(args);
	  args = PT_getArgsTail(args);

	  if (PT_isArgsEmpty(args)) {
	    tail = flattenSepList(rightBranch, listSymbol, tail);
	    tail = PT_makeArgsList(flattenLayout(layoutAfterSep), tail);
	    tail = PT_makeArgsList(flattenTerm(separator, ATfalse), tail);
	    tail = PT_makeArgsList(flattenLayout(layoutAfterLeft), tail);
	    tail = flattenSepList(leftBranch, listSymbol, tail);

	    return tail;
	  }
	}
      }
    }
  }

  ATerror("flattenSepList: illegal list: %t\n", tree);
  return PT_makeArgsEmpty();
}

/*}}}  */
/*{{{  static PT_Production flattenProd(PT_Production prod) */

static PT_Production flattenProd(PT_Production prod)
{
  if (!PT_isProductionDefault(prod)) {
    ATerror("flattenProd: not a production: %t\n", prod);
  }
  return prod;
}

/*}}}  */

/*{{{  static PT_Tree flattenLexicalTotally(PT_Tree tree) */

static PT_Tree flattenLexicalTotally(PT_Tree tree)
{
  if (PT_isTreeAppl(tree)) {
    PT_Production outerProd = PT_getTreeProd(tree);
    PT_Args charList = collectChars(tree);

    if (charList != NULL) {
      PT_Args newArgs = PT_makeArgsSingle(PT_makeTreeFlatLexical(charList));
      return PT_makeTreeAppl(flattenProd(outerProd), newArgs);
    }
  }
  
  return tree;
}

/*}}}  */
/*{{{  static PT_Tree flattenLayout(PT_Tree tree) */

static PT_Tree flattenLayout(PT_Tree tree)
{
  PT_Production prod = PT_getTreeProd(tree);

  if (PT_isOptLayoutProd(prod)) {
    PT_Args newArgs    = collectChars(tree);

    return PT_makeTreeAppl(prod, newArgs);
  }

  ATerror("flattenLayout: not layout: %t\n", tree);
  return (PT_Tree)NULL;
}

/*}}}  */
/*{{{  static PT_Tree flattenLiteral(PT_Production prod) */

static PT_Tree flattenLiteral(PT_Production prod)
{
  PT_Symbol  rhs = PT_getProductionRhs(prod);
  char      *lit = PT_getSymbolString(rhs);

  return PT_makeTreeLit(lit);
}

/*}}}  */
/*{{{  static PT_Tree flattenVar(PT_Tree tree) */

static PT_Tree flattenVar(PT_Tree tree)
{
  PT_Production prodVarsymOuter = PT_getTreeProd(tree);
  PT_Args       argsOuter       = PT_getTreeArgs(tree);

  PT_Tree outerArg = PT_getArgsHead(argsOuter);

  if (PT_isTreeAmb(outerArg)) {
    return tree;
  }
  else if (PT_isTreeAppl(outerArg)) {
    PT_Production prodVarsymInner = PT_getTreeProd(outerArg);
    PT_Args       argsInner       = PT_getTreeArgs(outerArg);

    if (PT_prodHasVarSymAsRhs(prodVarsymInner)) {
      PT_Args newVarArg = PT_makeArgsEmpty();
      char *varStr = PT_yieldArgs(argsInner);
      PT_Symbol newLhsArg = PT_makeSymbolLit(varStr);
      PT_Tree newArg = PT_makeTreeLit(varStr);
      PT_Symbols newLhs = PT_makeSymbolsList(newLhsArg, PT_makeSymbolsEmpty());

      prodVarsymInner = PT_setProductionLhs(prodVarsymInner, newLhs);

      newVarArg = PT_makeArgsList(newArg, newVarArg);
      return PT_makeTreeAppl(prodVarsymOuter, PT_makeArgsList(PT_makeTreeAppl(prodVarsymInner, newVarArg), PT_makeArgsEmpty()));
    }
  }

  ATabort("flattenVar failed on %t\n", tree);
  return (PT_Tree)NULL;
}

/*}}}  */
/*{{{  static PT_Tree flattenTerm(PT_Tree tree, ATbool inList) */

static PT_Tree flattenTerm(PT_Tree tree, ATbool inList)
{
  PT_Production prod;
  PT_Args args, newArgs;
  PT_Symbol listSymbol;

  if (PT_isTreeChar(tree)) {
    return makeCharFromInt(tree);
  }

  if (PT_isTreeLit(tree)) {
    return tree;
  }

  if (PT_isTreeAmb(tree)) {
    args = PT_getTreeArgs(tree);
    return PT_makeTreeAmb(flattenArgs(args));
  }

  if (!PT_isTreeAppl(tree)) {
    ATerror("flattenTerm: not an appl pattern: %t\n", tree);
    return (PT_Tree)NULL;
  }

  prod = PT_getTreeProd(tree);
  args = PT_getTreeArgs(tree);

  if (PT_prodHasLitAsRhs(prod)) {
    return flattenLiteral(prod);
  }

  if (PT_isOptLayoutProd(prod)) {
    return flattenLayout(tree);
  }

  if (PT_isLexicalInjectionProd(prod)) {
    return flattenLexicalTotally(tree);
  }

  if ((PT_prodHasIterSepAsRhs(prod) ||
       PT_prodHasIterAsRhs(prod)) &&
       !inList) {
    listSymbol = PT_getProductionRhs(prod);
  
    if (PT_isProductionVariable(prod)) {
      newArgs = PT_makeArgsList(
                  flattenVar(tree),
                  PT_makeArgsEmpty());
      return PT_makeTreeAppl(PT_makeProductionList(listSymbol),newArgs);
    }
    if (isSepListProd(prod)) {
      newArgs = flattenSepList(tree, listSymbol, PT_makeArgsEmpty());
      return PT_makeTreeAppl(PT_makeProductionList(listSymbol),newArgs);
    }
    if (isListProd(prod)) {
      newArgs = flattenList(tree, listSymbol, PT_makeArgsEmpty());
      return PT_makeTreeAppl(PT_makeProductionList(listSymbol),newArgs);
    }

    return PT_makeTreeAppl(flattenProd(prod), flattenArgs(args));

  } 

  if (PT_isProductionVariable(prod)) {
    return flattenVar(tree);
  }

  /* Default: application */
  return PT_makeTreeAppl(flattenProd(prod), flattenArgs(args));
}

/*}}}  */

/*{{{  PT_ParseTree flattenPT(PT_ParseTree tree) */

PT_ParseTree flattenPT(PT_ParseTree tree)
{
  if (PT_isParseTreeTop(tree)) {
    PT_Tree newTree = PT_getParseTreeTop(tree);

    return PT_setParseTreeTop(tree, flattenTerm(newTree, ATfalse));
  }

  ATerror("flattenParseTree: not a parsetree: %t\n", tree);
  return NULL;
}

/*}}}  */
/*{{{  PT_Tree flattenTree(PT_Tree tree) */

PT_Tree flattenTree(PT_Tree tree)
{
  return flattenTerm(tree, ATfalse);
}

/*}}}  */
