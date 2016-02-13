/* $Id: yieldProd.c 17026 2005-11-17 09:12:07Z jurgenv $ */

/** 
 * \file
 * Contains a mapping from abstract PT_Productions and PT_Symbols to
 * a concrete string representation of SDF productions and SDF Symbols.
 *
 * Note: not only a one-to-one mapping from an abstract to a concrete
 * representation is done. This functionality also entails some magic
 * that undoes the effects of the SDF2 normalization phase.
 *
 * \todo: split the normalization undo functionality from the pt2sdf
 * mapping functionality. Use the SDFME Api to construct a valid SDF
 * production, then use an ASF+SDF specification to implement the inverse
 * of normalization to a production, then use PT_yieldTree() to 
 * finally yield a string.
 */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#include "MEPT-yieldprod.h"
#include "MEPT-symbols.h"

#define VARIABLE "*variable*"

static int lengthOfInteger(int ch)
{
  if (isalnum(ch)) {
    return 1;
  }
  else if (isgraph(ch) || ch == '\n' || ch == '\t' || ch == ' ') {
    return 2;
  }
  
  return 4;
}

static int lengthOfCharRange(PT_CharRange charRange)
{
  if (PT_isCharRangeCharacter(charRange)) {
    int ch = PT_getCharRangeStart(charRange);
    return lengthOfInteger(ch);  
  }
  else if (PT_isCharRangeRange(charRange)) {
    int ch1 = PT_getCharRangeStart(charRange);
    int ch2 = PT_getCharRangeEnd(charRange);
    
    return lengthOfInteger(ch1) + lengthOfInteger(ch2) + 1;
  }
   
  ATwarning("lengthOfCharRange: unknown charRange: %t\n", charRange);
  return 0; 
}

static int lengthOfCharRanges(PT_CharRanges charRanges)
{
  int length = 0;

  while (PT_hasCharRangesHead(charRanges)) {
    PT_CharRange charRange = PT_getCharRangesHead(charRanges);
    length += lengthOfCharRange(charRange);
    charRanges = PT_getCharRangesTail(charRanges);
  }

  return length;
}

static int lengthOfSymbols(PT_Symbols symbols);

static int
lengthOfSymbol(PT_Symbol symbol)
{
  if (PT_isOptLayoutSymbol(symbol)) {
    return 0;
  }

  if (PT_isSymbolLit(symbol) || PT_isSymbolCilit(symbol)) {
    char *str = PT_getSymbolString(symbol);
    return strlen(str) + 2;
  }
  if (PT_isSymbolSort(symbol)) {
    char *str = PT_getSymbolString(symbol);
    return strlen(str);
  }
  if (PT_isSymbolEmpty(symbol)) {
    return 3;
  }
  if (PT_isSymbolSeq(symbol)) {
    PT_Symbols newSymbols = PT_getSymbolSymbols(symbol);
    return lengthOfSymbols(newSymbols) + 2;
  }
  if (PT_isSymbolOpt(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    return lengthOfSymbol(newSymbol) + 1;
  }
  if (PT_isSymbolVarSym(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    return 6 + lengthOfSymbol(newSymbol);
  }
  if (PT_isSymbolCf(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    return lengthOfSymbol(newSymbol);
  }
  if (PT_isSymbolLex(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    return 6+ lengthOfSymbol(newSymbol);
  }
  if (PT_isSymbolAlt(symbol)) {
    PT_Symbol leftSymbol = PT_getSymbolLhs(symbol);
    PT_Symbol rightSymbol = PT_getSymbolRhs(symbol);
    return lengthOfSymbol(leftSymbol) + 3 + lengthOfSymbol(rightSymbol);
  }
  if (PT_isSymbolTuple(symbol)) {
    PT_Symbol headSymbol = PT_getSymbolHead(symbol);
    PT_Symbols restSymbols = PT_getSymbolRest(symbol);
    return lengthOfSymbol(headSymbol) + 3 + lengthOfSymbols(restSymbols);
  }
  if (PT_isSymbolIterPlus(symbol) 
      ||
      PT_isSymbolIterStar(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    return lengthOfSymbol(newSymbol) + 1;
  }
  if (PT_isSymbolIterPlusSep(symbol) 
      ||
      PT_isSymbolIterStarSep(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    PT_Symbol separator = PT_getSymbolSeparator(symbol);
    return lengthOfSymbol(newSymbol) + lengthOfSymbol(separator) + 4;
  }
  if (PT_isSymbolIterN(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    int number = PT_getSymbolNumber(symbol);
    return lengthOfSymbol(newSymbol) + lengthOfInteger(number) + 1;
  }
  if (PT_isSymbolIterSepN(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    PT_Symbol separator = PT_getSymbolSeparator(symbol);
    int number = PT_getSymbolNumber(symbol);
    return lengthOfSymbol(newSymbol) + lengthOfInteger(number) +
           lengthOfSymbol(separator) + 4;
  }
  if (PT_isSymbolParameterizedSort(symbol)) {
    char *str = PT_getSymbolSort(symbol);
    PT_Symbols newSymbols = PT_getSymbolParameters(symbol);
    return lengthOfSymbols(newSymbols) + strlen(str) + 4;
  }
  if (PT_isSymbolFunc(symbol)) {
    PT_Symbols newSymbols = PT_getSymbolSymbols(symbol);
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    return lengthOfSymbols(newSymbols) + lengthOfSymbol(newSymbol) + 6;
  }
  if (PT_isSymbolCharClass(symbol)) {
    return lengthOfCharRanges(PT_getSymbolRanges(symbol)) + 2;
  }
  if (PT_isSymbolLayout(symbol)) {
    return 0;
  }

  ATwarning("lengthOfSymbol: unknown symbol: %t\n", symbol);
  
  return 0;
}

static int lengthOfSymbols(PT_Symbols symbols)
{
  int length = 0;

  while (PT_hasSymbolsHead(symbols)) {
    length = length + lengthOfSymbol(PT_getSymbolsHead(symbols)) + 1;
    symbols = PT_getSymbolsTail(symbols);
  }

  return length;
}

static int lengthOfAttr(PT_Attr attr)
{
  ATerm attribute;

  if (PT_isAttrAssoc(attr)) {
    attribute = PT_AssociativityToTerm(PT_getAttrAssoc(attr));
  }
  else if (PT_isAttrTerm(attr)) {
    attribute = PT_getAttrTerm(attr);
  }
  else {
    attribute = PT_AttrToTerm(attr);
  }

  return strlen(ATwriteToString(attribute));
}

static int lengthOfAttrs(PT_Attrs attrs)
{
  int length = 0;

  while (PT_hasAttrsHead(attrs)) {
    length += lengthOfAttr(PT_getAttrsHead(attrs)) + 2;
    attrs = PT_getAttrsTail(attrs);
  }

  return length > 0 ? length - 2 : 0; 
}

static int
lengthOfAttributes(PT_Attributes attrs)
{
  if (PT_hasAttributesAttrs(attrs)) {
    return 3 + lengthOfAttrs(PT_getAttributesAttrs(attrs));
  }
  
  return 0;
}


static int  
lengthOfProd(PT_Production prod)
{
  PT_Symbol rhs = PT_getProductionRhs(prod);

  if (PT_isProductionList(prod)) {
    return lengthOfSymbol(rhs); 
  }
  else {
    PT_Symbols lhs = PT_getProductionLhs(prod);
    PT_Attributes attrs = PT_getProductionAttributes(prod);

    return lengthOfSymbols(lhs) + 4 +
	   lengthOfSymbol(rhs) +
	   lengthOfAttributes(attrs);
  }
}

static int yieldInteger(int ch, int idx, char *buf, int bufSize)
{
  assert(idx <= bufSize);

  if (isalnum(ch)) {
    buf[idx++] = (char) ch;
    return idx;
  }
  else if (isgraph(ch)) {
    buf[idx++] = '\\';
    buf[idx++] = (char) ch;
    return idx;
  } 
  else if (ch == '\n') {
    buf[idx++] = '\\';
    buf[idx++] = 'n';
    return idx;
  }
  else if (ch == '\t') {
    buf[idx++] = '\\';
    buf[idx++] = 't';
    return idx;
  }
  else if (ch == ' ') {
    buf[idx++] = '\\';
    buf[idx++] = ' ';
    return idx;
  }
  
  /* create escaped octal number */
  buf[idx++] = '\\';
  sprintf(buf+idx,"%03d",ch);
  idx += 3;

  return idx;
}

static int yieldCharRange(PT_CharRange charRange, int idx, char *buf, int bufSize)
{
  assert(idx <= bufSize);

  if (PT_isCharRangeCharacter(charRange)) {
    int ch = PT_getCharRangeStart(charRange);
    idx = yieldInteger(ch, idx, buf, bufSize);
    return idx;
  }
  else if (PT_isCharRangeRange(charRange)) {
    int ch1 = PT_getCharRangeStart(charRange);
    int ch2 = PT_getCharRangeEnd(charRange);
    idx = yieldInteger(ch1, idx, buf, bufSize);
    buf[idx++] = (char) '-';
    idx = yieldInteger(ch2, idx, buf, bufSize);

    return idx;
  }

  ATwarning("yieldCharRange: unknown charRange: %t\n", charRange);
  return idx;
}

static int yieldCharRanges(PT_CharRanges charRanges, int idx, char *buf, int bufSize)
{
  assert(idx <= bufSize);

  while (PT_hasCharRangesHead(charRanges)) {
    PT_CharRange charRange = PT_getCharRangesHead(charRanges);
    idx = yieldCharRange(charRange, idx, buf, bufSize);
    charRanges = PT_getCharRangesTail(charRanges);
  }

  return idx;
}

static int yieldSymbolParameters(PT_Symbols symbols, int idx, char *buf, int bufSize);
static int yieldSymbols(PT_Symbols symbols, int idx, char *buf, int bufSize);

static int 
yieldSymbol(PT_Symbol symbol, int idx, char *buf, int bufSize)
{
  int i;

  assert(idx <= bufSize); 

  if (PT_isOptLayoutSymbol(symbol)) {
    return idx;
  }
  if (PT_isSymbolLit(symbol) || PT_isSymbolCilit(symbol)) {
    ATbool ci = PT_isSymbolCilit(symbol);
    char *str = PT_getSymbolString(symbol);
    int len = strlen(str);

    buf[idx++] = ci ? '\'' : '"';
    for (i = 0; i < len; i++) {
      buf[idx++] = str[i];
    }
    buf[idx++] = ci ? '\'' : '"';

    return idx;
  }
  if (PT_isSymbolSort(symbol)) {
    char *str = PT_getSymbolString(symbol);
    int len = strlen(str);

    for (i = 0; i < len; i++) {
      buf[idx++] = str[i];
    }

    return idx; 
  }
  if (PT_isSymbolEmpty(symbol)) {
    buf[idx++] = '(';
    buf[idx++] = ' ';
    buf[idx++] = ')';
    return idx;
  }
  if (PT_isSymbolSeq(symbol)) {
    PT_Symbols newSymbols = PT_getSymbolSymbols(symbol);
    buf[idx++] = '(';
    idx = yieldSymbols(newSymbols, idx, buf, bufSize);
    buf[idx++] = ')';
    return idx;
  }
  if (PT_isSymbolOpt(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = '?';
    return idx;
  }
  if (PT_isSymbolVarSym(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    buf[idx++] = '<';
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = '-';
    buf[idx++] = 'V';
    buf[idx++] = 'A';
    buf[idx++] = 'R';
    buf[idx++] = '>';
    return idx;
  }
  if (PT_isSymbolCf(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);

    return idx;
  }
  if (PT_isSymbolLex(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    buf[idx++] = '<';
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = '-';
    buf[idx++] = 'L';
    buf[idx++] = 'E';
    buf[idx++] = 'X';
    buf[idx++] = '>';

    return idx;
  }
  if (PT_isSymbolAlt(symbol)) {
    PT_Symbol leftSymbol = PT_getSymbolLhs(symbol);
    PT_Symbol rightSymbol = PT_getSymbolRhs(symbol);

    idx = yieldSymbol(leftSymbol, idx, buf, bufSize);
    buf[idx++] = ' ';
    buf[idx++] = '|';
    buf[idx++] = ' ';
    idx = yieldSymbol(rightSymbol, idx, buf, bufSize);

    return idx;
  }
  if (PT_isSymbolTuple(symbol)) {
    PT_Symbol headSymbol = PT_getSymbolHead(symbol);
    PT_Symbols restSymbols = PT_getSymbolRest(symbol);

    buf[idx++] = '<';
    idx = yieldSymbol(headSymbol, idx, buf, bufSize);
    buf[idx++] = ',';
    idx = yieldSymbolParameters(restSymbols, idx, buf, bufSize);
    buf[idx++] = '>';

    return idx;
  }
  if (PT_isSymbolIterPlus(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = '+';

    return idx;
  }
  if (PT_isSymbolIterStar(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = '*';

    return idx;
  }
  if (PT_isSymbolIterPlusSep(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    PT_Symbol separator = PT_getSymbolSeparator(symbol);
    buf[idx++] = '{';
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = ' ';
    idx = yieldSymbol(separator, idx, buf, bufSize);
    buf[idx++] = '}';
    buf[idx++] = '+';

    return idx;
  }
  if (PT_isSymbolIterStarSep(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    PT_Symbol separator = PT_getSymbolSeparator(symbol);
    buf[idx++] = '{';
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = ' ';
    idx = yieldSymbol(separator, idx, buf, bufSize);
    buf[idx++] = '}';
    buf[idx++] = '*';

    return idx;
  }
  if (PT_isSymbolIterN(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    int number = PT_getSymbolNumber(symbol);
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    idx = yieldInteger(number, idx, buf, bufSize);
    buf[idx++] = '+';

    return idx; 
  }
  if (PT_isSymbolIterSepN(symbol)) {
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    PT_Symbol separator = PT_getSymbolSeparator(symbol);
    int number = PT_getSymbolNumber(symbol);
    buf[idx++] = '{';
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = ' ';
    idx = yieldSymbol(separator, idx, buf, bufSize);
    buf[idx++] = '}';
    idx = yieldInteger(number, idx, buf, bufSize);
    buf[idx++] = '+';

    return idx;      
  }
  if (PT_isSymbolParameterizedSort(symbol)) {
    char *str = PT_getSymbolSort(symbol);
    PT_Symbols newSymbols = PT_getSymbolParameters(symbol);
    int len = strlen(str);

    for (i = 0; i < len; i++) {
      buf[idx++] = str[i];
    }

    buf[idx++] = '[';
    buf[idx++] = '[';
    idx = yieldSymbolParameters(newSymbols, idx, buf, bufSize);
    buf[idx++] = ']';
    buf[idx++] = ']';
    return idx;
  }
  if (PT_isSymbolFunc(symbol)) {
    PT_Symbols newSymbols = PT_getSymbolSymbols(symbol);
    PT_Symbol newSymbol = PT_getSymbolSymbol(symbol);
    buf[idx++] = '(';
    idx = yieldSymbols(newSymbols, idx, buf, bufSize);
    buf[idx++] = ' ';
    buf[idx++] = '=';
    buf[idx++] = '>';
    buf[idx++] = ' ';
    idx = yieldSymbol(newSymbol, idx, buf, bufSize);
    buf[idx++] = ')';
    return idx;
  }
  if (PT_isSymbolCharClass(symbol)) {
    PT_CharRanges charRanges = PT_getSymbolRanges(symbol);
    buf[idx++] = '[';
    idx = yieldCharRanges(charRanges,idx,buf,bufSize);
    buf[idx++] = ']';

    return idx;
  }
  if (PT_isSymbolLayout(symbol)) {
    return idx;
  }

  ATwarning("yieldSymbol: unknown symbol: %t\n", symbol);
  return idx;
}

static int 
yieldSymbols(PT_Symbols symbols, int idx, char *buf, int bufSize)
{
  while (PT_hasSymbolsHead(symbols)) {
    idx = yieldSymbol(PT_getSymbolsHead(symbols), idx, buf, bufSize);
    buf[idx++] = ' ';
    symbols = PT_getSymbolsTail(symbols);
  }

  return idx;
}

static int 
yieldSymbolParameters(PT_Symbols symbols, int idx, char *buf, int bufSize)
{
  while (PT_hasSymbolsHead(symbols)) {
    idx = yieldSymbol(PT_getSymbolsHead(symbols), idx, buf, bufSize);
    symbols = PT_getSymbolsTail(symbols);
    if (PT_hasSymbolsHead(symbols)) {
      buf[idx++] = ',';
    }
  }

  return idx;
}

static int 
yieldAttr(PT_Attr attr, int idx, char *buf, int bufSize)
{
  char *str; 
  ATerm attribute;

  if (PT_isAttrAssoc(attr)) {
    attribute = PT_AssociativityToTerm(PT_getAttrAssoc(attr));
  }
  else if (PT_isAttrTerm(attr)) {
    attribute = PT_getAttrTerm(attr);
  }
  else {
    attribute = PT_AttrToTerm(attr);
  }

  str = ATwriteToString(attribute);
  strcpy(buf+idx,str);

  return idx + strlen(str);
}

static int 
yieldAttrs(PT_Attrs attrs, int idx, char *buf, int bufSize)
{
  assert(idx <= bufSize);

  while (PT_hasAttrsHead(attrs)) {
    idx = yieldAttr(PT_getAttrsHead(attrs), idx, buf, bufSize);
    attrs = PT_getAttrsTail(attrs);
    if (PT_hasAttrsHead(attrs)) {
      buf[idx++] = ',';
      buf[idx++] = ' ';
    }
  }
   
  assert(idx <= bufSize);
  return idx;
}

static int 
yieldAttributes(PT_Attributes attrs, int idx, char *buf, int bufSize)
{
  if (PT_hasAttributesAttrs(attrs)) {
    buf[idx++] = ' ';
    buf[idx++] = '{';
    idx = yieldAttrs(PT_getAttributesAttrs(attrs), idx, buf, bufSize);
    buf[idx++] = '}';
  }

  return idx;
}

static int 
yieldProd(PT_Production prod, int idx, char *buf, int bufSize)
{
  PT_Symbol rhs = PT_getProductionRhs(prod);

  if (PT_isProductionList(prod)) {
    idx = yieldSymbol(rhs, idx, buf, bufSize);
  }
  else {
    PT_Symbols lhs = PT_getProductionLhs(prod);
    PT_Attributes attrs = PT_getProductionAttributes(prod);

    idx = yieldSymbols(lhs, idx, buf, bufSize);
    buf[idx++] = '-';
    buf[idx++] = '>';
    buf[idx++] = ' ';
    idx = yieldSymbol(rhs, idx, buf, bufSize);
    idx = yieldAttributes(attrs, idx, buf, bufSize);
  }
  return idx;
}

char *PT_yieldProduction(PT_Production prod) {
  static char *buffer = NULL;
  static int   bufferSize = 0;
  int          idx = 0;
  int          len;

  len = lengthOfProd(prod)+1;

  if (len > bufferSize) {
    buffer = (char *)realloc(buffer, len*sizeof(char));
    bufferSize = len;
  }

  idx = yieldProd(prod, 0, buffer, len);

  buffer[idx++] = '\0';

  return buffer;
}

char *PT_yieldSymbol(PT_Symbol symbol) {
  static char *buffer = NULL;
  static int   bufferSize = 0;
  int          idx = 0;
  int          len;

  len = lengthOfSymbol(symbol) + 1;

  if (len > bufferSize) {
    buffer = (char *)realloc(buffer, len*sizeof(char));
    bufferSize = len;
  }

  idx = yieldSymbol(symbol, idx, buffer, len);

  assert(idx <= len); 
  buffer[idx++] = '\0';

  return buffer;
}

char *PT_yieldSymbolVisualVariables(PT_Symbol symbol) {
  static char *buffer = NULL;
  static int   bufferSize = 0;
  int          idx = 0;
  int          len;

  len = strlen(VARIABLE " ") + lengthOfSymbol(symbol) + 1;

  if (len > bufferSize) {
    buffer = (char *)realloc(buffer, len*sizeof(char));
    bufferSize = len;
  }

  strcpy(buffer, VARIABLE " ");
  idx = strlen(VARIABLE " ");
  idx = yieldSymbol(symbol, idx, buffer, len);

  assert(idx <= len); 
  buffer[idx++] = '\0';

  return buffer;
}                                
