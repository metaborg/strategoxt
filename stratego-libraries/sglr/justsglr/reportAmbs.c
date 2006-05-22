
/*{{{  includes */

#include <MEPT-utils.h>
#include <Error-utils.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/*}}}  */

/*{{{  typedef struct PT_Amb_Position_Tag */

typedef struct PT_Amb_Position_Tag {
  int line;
  int col;
  int offset;
} PT_Amb_Position;

/*}}}  */

/*{{{  static ATermList getAmbiguities(PT_Tree tree, PT_Amb_Position *current) */

static ERR_SubjectList getAmbiguities(const char *path,
                                      PT_Tree tree, 
                                      PT_Amb_Position *current)
{
  ERR_SubjectList ambSubjects = ERR_makeSubjectListEmpty();
  
  if (PT_isTreeChar(tree)) {
  /*{{{  handle single char */

    if (PT_getTreeCharacter(tree) == '\n') {
      current->col = 0;
      current->line++;
      current->offset++;
    }
    else {
      current->col++;
      current->offset++;
    }

  /*}}}  */
  }
  else if (PT_isTreeLit(tree)) {
  /*{{{  handle literal string */

    char *str = PT_getTreeString(tree);
    int len = strlen(str);
    
    while(--len >= 0) {
      if (str[len] == '\n') {
        current->col = 0;
        current->line++;
        current->offset++;
      } 
      else {
        current->col++;
        current->offset++;
      }
    }

  /*}}}  */
  }
  else if (PT_isTreeAppl(tree)) {
  /*{{{  handle normal application */

    PT_Args args = PT_getTreeArgs(tree);

    for(;PT_hasArgsHead(args); args = PT_getArgsTail(args)) {
      ambSubjects = ERR_concatSubjectList(getAmbiguities(path,
                                                         PT_getArgsHead(args),
							 current), 
					  ambSubjects);
    }

  /*}}}  */
  }
  else if (PT_isTreeAmb(tree)) {
  /*{{{  handle ambiguity cluster */

    PT_Args args = PT_getTreeArgs(tree); 
    PT_Args ambs = args;
    char *str;
    char ambString[1024];
    int ambStringCnt;
    PT_Amb_Position here = *current;
    ERR_Area ambArea;
    ERR_Location ambLocation;
    ERR_Subject ambSubject;

    /* first collect nested ambiguities */
    for(;PT_hasArgsHead(args); args = PT_getArgsTail(args)) {
      *current = here;
      ambSubjects = ERR_concatSubjectList(getAmbiguities(path,
                                                         PT_getArgsHead(args),
							 current), 
			                  ambSubjects);
    }

    ambStringCnt = 0;
    ambString[0] = '\0';
    for (;PT_hasArgsHead(ambs); ambs = PT_getArgsTail(ambs)) {
      PT_Tree amb = PT_getArgsHead(ambs);
      PT_Production prod;

      assert(PT_hasTreeProd(amb));

      prod = PT_getTreeProd(amb);
      str = PT_yieldProduction(prod);
 
      if (ambStringCnt + strlen(str) + 1 <= 1024) {
        if (ambStringCnt > 0) {
          strcpy(ambString + ambStringCnt, ";");
          ambStringCnt++;
        }
        strcpy(ambString + ambStringCnt, str);
        ambStringCnt = ambStringCnt + strlen(str);
      }
    }

    ambArea = ERR_makeAreaArea(here.line, here.col,
			       current->line, current->col,
                               here.offset, (current->offset - here.offset));
    ambLocation = ERR_makeLocationAreaInFile(path, ambArea);
    ambSubject = ERR_makeSubjectLocalized(ambString, ambLocation);

    ambSubjects = ERR_appendSubjectList(ambSubjects, ambSubject);
  /*}}}  */
  } 
  else {
    ATerror("getAmbiguities: unable to handle tree: %t\n", tree);
  }

  return ambSubjects;
}

/*}}}  */

/*{{{  ATerm PT_reportTreeAmbiguities(PT_Tree tree) */

ATerm PT_reportTreeAmbiguities(const char *path, PT_Tree tree)
{
  PT_Amb_Position pos = {1, 0, 0}; 
  ERR_SubjectList ambs = getAmbiguities(path, tree, &pos);
  if (!ERR_isSubjectListEmpty(ambs)) {
    ERR_Error ambError = ERR_makeErrorError("Ambiguity", ambs);

    return ERR_ErrorToTerm(ambError);
  }
  else {
    return NULL;
  }
}

/*}}}  */
/*{{{  ATerm PT_reportParseTreeAmbiguities(PT_ParseTree parsetree) */

ATerm PT_reportParseTreeAmbiguities(const char *path, PT_ParseTree parsetree)
{
  return PT_reportTreeAmbiguities(path, PT_getParseTreeTop(parsetree));
}

/*}}}  */
