/* $Id: yieldPT.c 16971 2005-11-10 12:28:32Z jurgenv $ */


#include <stdlib.h>
#include <string.h>
#include <assert.h> 

#include <MEPT-yield.h>

#define INITIAL_BUFFER_SIZE 4*1024

#define AMB_CLUSTER_START "\n<<<<<<<<<<\n"
#define AMB_CLUSTER_SEP   "\n==========\n"
#define AMB_CLUSTER_END   "\n>>>>>>>>>>\n"


typedef void (*charYielder)(char c);
typedef void (*ambiguityAcceptor)(PT_Args ambiguities);

typedef struct _TreeYielder
{
  charYielder yieldChar;
  ambiguityAcceptor acceptAmbiguities;
} *TreeYielder;


static void countChar(char c);
static void yieldCharToFile(char c);
static void yieldCharToString(char c);
static void visitArgs(PT_Args args, TreeYielder yielder);


static unsigned long treeCount = 0;
static struct _TreeYielder yielder = { countChar, NULL };

static FILE *outputFile = NULL;
static struct _TreeYielder treeToFile = { yieldCharToFile, NULL };

static char *stringStart = NULL;
static char *stringCur = NULL;
static unsigned int stringCapacity = 0;
static struct _TreeYielder treeToString = { yieldCharToString, NULL };



static void visitTree(PT_Tree tree, TreeYielder yielder)
{
  if (PT_isTreeChar(tree)) {
    yielder->yieldChar(PT_getTreeCharacter(tree));
  }
  else if (PT_isTreeCycle(tree)) {
    return;
  }
  else if (PT_isTreeAppl(tree)) {
    visitArgs(PT_getTreeArgs(tree), yielder);
  }
  else if (PT_isTreeAmb(tree)) {
    if (yielder->acceptAmbiguities == NULL) {
      visitTree(PT_getArgsHead(PT_getTreeArgs(tree)), yielder);
    }
    else {
      ATabort("yieldAll ambiguities not yet implemented.");
    }
  }
  else {
    ATabort("visitTree: unknown tree: %t\n", tree);
  }
}


static void visitArgs(PT_Args args, TreeYielder yielder)
{
  while (PT_hasArgsHead(args)) {
    visitTree(PT_getArgsHead(args), yielder);
    args = PT_getArgsTail(args);
  }
}



static void countChar(char c)
{
  treeCount++;
  if ((treeCount & 0xFFFFF) == 0) {
    fprintf(stderr, "\rcount: %ld", treeCount);
  }
}


unsigned long PT_getTreeLength(PT_Tree tree)
{
  treeCount = 0;
  visitTree(tree, &yielder);

  return treeCount;
}



static void yieldCharToFile(char c)
{
  fputc((int)c, outputFile);
}


void PT_yieldTreeToFile(PT_Tree tree, FILE *f, ATbool yieldAllAmbiguities)
{
  if (yieldAllAmbiguities) {
    treeToFile.acceptAmbiguities = NULL; /* TODO */
  }

  outputFile = f;
  visitTree(tree, &treeToFile);
  outputFile = NULL;

  fflush(f);
  treeToFile.acceptAmbiguities = NULL;
}


void PT_yieldArgsToFile(PT_Args args, FILE *f, ATbool yieldAllAmbiguities)
{
  if (yieldAllAmbiguities) {
    treeToFile.acceptAmbiguities = NULL; /* TODO */
  }

  outputFile = f;
  visitArgs(args, &treeToFile);
  outputFile = NULL;

  fflush(f);
  treeToFile.acceptAmbiguities = NULL;
}


void PT_yieldParseTreeToFile(PT_ParseTree pt, FILE *f, ATbool yieldAllAmbiguities)
{
  return PT_yieldTreeToFile(PT_getParseTreeTop(pt), f, yieldAllAmbiguities);
}


void PT_yieldAnyToFile(ATerm t, FILE *f, ATbool yieldAllAmbiguities)
{
  if (ATmatch(t,"appl(<term>,<term>)", NULL, NULL) 
        || ATmatch(t,"amb(<term>)", NULL)
        || ATmatch(t,"<int>", NULL)) {
    PT_yieldTreeToFile(PT_TreeFromTerm(t), f, yieldAllAmbiguities);
  }
  else if (ATgetType(t) == AT_LIST) {
    PT_yieldArgsToFile(PT_ArgsFromTerm(t), f, yieldAllAmbiguities);
  }
  else if (PT_isParseTreeTop(PT_ParseTreeFromTerm(t))) {
    PT_yieldParseTreeToFile(PT_ParseTreeFromTerm(t), f, yieldAllAmbiguities);
  }
  else {
    ATabort("PT_yieldAnyToFile: Unknown term: %t\n", t);
  }
}



static void yieldCharToString(char c)
{
  if (stringCapacity == 0) {
    stringCapacity = INITIAL_BUFFER_SIZE;
    stringStart = (char *) malloc(stringCapacity * sizeof(char));
    stringCur = stringStart;
  }
  else if (stringCapacity <= (stringCur - stringStart)) {
    unsigned int index = stringCur - stringStart;
    if (stringCapacity < 1*1024*1024*1024) {
      stringCapacity = stringCapacity * 2;
    }
    else {
      stringCapacity += 4*1024*1024;
    }
    stringStart = (char *) realloc(stringStart, stringCapacity);
    stringCur = stringStart + index;
  }

  assert(stringStart != NULL);
  assert(stringCur - stringStart <= stringCapacity);

  *stringCur++ = c;
}


char *PT_yieldTree(PT_Tree tree)
{
  return PT_yieldTreeToString(tree, ATfalse);
}


char *PT_yieldTreeToString(PT_Tree tree, ATbool yieldAllAmbiguities)
{
  if (yieldAllAmbiguities) {
    treeToString.acceptAmbiguities = NULL; /* TODO */
  }

  stringCur = stringStart;
  visitTree(tree, &treeToString);
  yieldCharToString('\0');
  treeToString.acceptAmbiguities = NULL;

  return stringStart;
}


char *PT_yieldArgsToString(PT_Args args, ATbool yieldAllAmbiguities)
{
  if (yieldAllAmbiguities) {
    treeToString.acceptAmbiguities = NULL; /* TODO */
  }

  memset(stringStart, 0, stringCapacity);
  stringCur = stringStart;
  visitArgs(args, &treeToString);
  yieldCharToString('\0');
  treeToString.acceptAmbiguities = NULL;

  return stringStart;
}


char *PT_yieldParseTreeToString(PT_ParseTree pt, ATbool yieldAllAmbiguities)
{
  return PT_yieldTreeToString(PT_getParseTreeTop(pt), yieldAllAmbiguities);
}


char *PT_yieldAnyToString(ATerm t, ATbool yieldAllAmbiguities)
{
  if (ATmatch(t,"appl(<term>,<term>)", NULL, NULL) 
        || ATmatch(t,"amb(<term>)", NULL)
        || ATmatch(t,"<int>", NULL)) {
    return PT_yieldTreeToString(PT_TreeFromTerm(t), 
				yieldAllAmbiguities);
  }
  else if (ATgetType(t) == AT_LIST) {
    return PT_yieldArgsToString(PT_ArgsFromTerm(t), 
				yieldAllAmbiguities);
  }
  else if (PT_isParseTreeTop(PT_ParseTreeFromTerm(t))) {
    return PT_yieldParseTreeToString(PT_ParseTreeFromTerm(t), 
				     yieldAllAmbiguities);
  }
  else {
    ATabort("PT_yieldAnyToString: Unknown term: %t\n", t);
  }

  return NULL;
}

