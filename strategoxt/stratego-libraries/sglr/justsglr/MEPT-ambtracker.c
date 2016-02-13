#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <Error.h>
#include <aterm2.h>
#include <MEPT.h>
#include <MEPT-yield.h>
#include <MEPT-yieldprod.h>

/**
 * \file
 *
 * Contains an algorithm for locating the position of ambiguity clusters
 * in a parse forest, and reporting a summary with some details.
 *
 * \todo extend this algorithm with more sophisticated diagnostics and
 * reporting functionality.
 */
#define RECURSION_UPPERBOUND 5000

typedef struct PT_Amb_Position_Tag {
  int line;
  int col;
  int offset;
} PT_Amb_Position;

static ATermTable visited = NULL;

static ATerm makeKey(int offset, PT_Tree tree) {
  return (ATerm) ATmakeAppl2(ATmakeAFun("key",2,ATfalse), (ATerm) tree, 
			     (ATerm) ATmakeInt(offset));
}

static void initCache() {
  visited = ATtableCreate(1024, 75);
}

static void cleanupCache() {
  ATtableDestroy(visited);
}

static void cacheLocation(int offset, PT_Tree tree, ERR_Location location) {
  ATtablePut(visited, makeKey(offset, tree), (ATerm) location);
}

static ERR_Location getCachedLocation(int offset, PT_Tree tree) {
  return (ERR_Location) ATtableGet(visited, makeKey(offset, tree));
}


static ERR_Location makeLocation(PT_Amb_Position from, PT_Amb_Position to,
				 const char* path) {
  ERR_Area area;
  ERR_Location location;

  area = ERR_makeAreaArea(from.line, from.col,
			     to.line, to.col,
			     from.offset, (to.offset - from.offset));
  if (path != NULL) {
    location = ERR_makeLocationAreaInFile(path, area);
  } else {
    location = ERR_makeLocationArea(area);
  }

  return location;
}

static ERR_ErrorList getAmbiguities(const char *path,
                                      PT_Tree tree, 
				      int depth,
                                      PT_Amb_Position *current) {
  ERR_ErrorList ambErrors = ERR_makeErrorListEmpty();
  ERR_Location end = getCachedLocation(current->offset, tree);
  PT_Amb_Position here = *current;

  if (end != NULL) {
    /* found in cache, so advance current and go on with the
     * rest
     */
    ERR_Area area = ERR_getLocationArea(end);
    current->col = ERR_getAreaEndColumn(area);
    current->line = ERR_getAreaEndLine(area);
    current->offset += ERR_getAreaLength(area);
    return ambErrors;
  }

  if (depth >= RECURSION_UPPERBOUND) {
    ERR_Subject subject = ERR_makeSubjectLocalized( "tree",
						    makeLocation(*current,*current,path));
    ERR_Error deep = ERR_makeErrorWarning("Tree is too deep to search for "
					  "ambiguities.", ERR_makeSubjectListSingle(subject));
    ambErrors = ERR_makeErrorListMany(deep, ambErrors);
  }
  else if (PT_isTreeChar(tree)) {


    if (PT_getTreeCharacter(tree) == '\n') {
      current->col = 0;
      (current->line)++;
      (current->offset)++;
    }
    else {
      (current->col)++;
      (current->offset)++;
    }

  }
  else if (PT_isTreeAppl(tree)) {

    PT_Args args = PT_getTreeArgs(tree);

    for(;PT_hasArgsHead(args); args = PT_getArgsTail(args)) {
      PT_Tree arg = PT_getArgsHead(args);
      ERR_ErrorList argErrors = getAmbiguities(path, arg, depth+1, current);
      ambErrors = ERR_concatErrorList(argErrors, ambErrors);
    }

  }
  else if (PT_isTreeAmb(tree)) {

    PT_Args args = PT_getTreeArgs(tree); 
    PT_Args ambs = args;
    PT_Tree amb;
    const char *ambString;
    char ambCount[1024] = "#alternatives: ";
    ERR_Location ambLocation;
    ERR_Subject ambSubject;
    ERR_SubjectList ambSubjects = ERR_makeSubjectListEmpty();
    ERR_Error ambError;

    /* first collect nested ambiguities */
    for(;PT_hasArgsHead(args); args = PT_getArgsTail(args)) {
      *current = here;
      ambErrors = ERR_concatErrorList(getAmbiguities(path,
						     PT_getArgsHead(args),
						     depth + 1,
						     current), 
				      ambErrors);
    }

    amb = PT_getArgsHead(ambs);
    if (PT_hasTreeProd(amb)) {
      ambString = PT_yieldSymbol(
				 PT_getProductionRhs(PT_getTreeProd(amb)));
    }
    else {
      ambString = PT_yieldTree(amb);
    }

    sprintf(ambCount + strlen(ambCount),"%d", PT_getArgsLength(ambs));

    ambLocation = makeLocation(here, *current, path);
    ambSubject = ERR_makeSubjectLocalized(ambString, ambLocation);
    ambSubjects = ERR_makeSubjectListMany(ambSubject,ambSubjects);
    ambSubject = ERR_makeSubjectSubject(ambCount);
    ambSubjects = ERR_makeSubjectListMany(ambSubject, ambSubjects);

    ambError = ERR_makeErrorWarning("ambiguity", ambSubjects);
    ambErrors = ERR_makeErrorListMany(ambError, ambErrors);

  } 

  {
    /* TODO: serious bug here cause line numbers not to increase! */
    ERR_Location loc = makeLocation(here, *current, path);
    cacheLocation(here.offset, tree, loc);
  }
  return ambErrors;
}

ATerm PT_reportTreeAmbiguities(const char *path, PT_Tree tree) {
  PT_Amb_Position pos = {1, 0, 0}; 
  ERR_ErrorList ambs;
  ERR_Summary result;
  initCache();

  ambs = getAmbiguities(path, tree, 0, &pos);

  result = ERR_makeSummarySummary("ambtracker", path, ambs);

  cleanupCache();

  return (ATerm) result;
}

ATerm PT_reportParseTreeAmbiguities(const char *path, PT_ParseTree parsetree) {
  return PT_reportTreeAmbiguities(path, PT_getParseTreeTop(parsetree));
}

PT_Tree PT_findTopAmbiguity(PT_Tree tree) {
  assert(tree != NULL);

  if (PT_isTreeAmb(tree)) {
    return tree;
  }
  else if (PT_isTreeAppl(tree)) {
    PT_Args args = PT_getTreeArgs(tree);

    while (!PT_isArgsEmpty(args)) {
      PT_Tree head = PT_getArgsHead(args);
      PT_Tree amb = PT_findTopAmbiguity(head);
      if (amb != NULL) {
	return amb;
      }
      args = PT_getArgsTail(args);
    }
  }

  return NULL;
}
