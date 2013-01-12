#include "Error-utils.h"

/*{{{  static char *PERR_lowerStrCon(PERR_StrCon str) */

static char *PERR_lowerStrCon(PERR_StrCon pStr)
{
  PERR_LexStrCon strcon = PERR_getStrConStrCon(pStr);
  PERR_LexStrCharChars list = PERR_getLexStrConChars(strcon);
  int len = PERR_getLexStrCharCharsLength(list);
  int i;
  static char result[BUFSIZ];

  if (len >= BUFSIZ - 2) {
    ATwarning("PERR_lowerStrCon: insufficient memory to allocate string\n");
    return NULL;
  }

  for (i = 0;
       !PERR_isLexStrCharCharsEmpty(list);
       list = PERR_getLexStrCharCharsTail(list),
       i++) {

    PERR_LexStrChar ch = PERR_getLexStrCharCharsHead(list);


    if (PERR_isLexStrCharNewline(ch)) {
      result[i] = '\n';
    }
    else if (PERR_isLexStrCharTab(ch)) {
      result[i] = '\t';
    }
    else if (PERR_isLexStrCharQuote(ch)) {
      result[i] = '\"';
    }
    else if (PERR_isLexStrCharBackslash(ch)) {
      result[i] = '\\';
    }
    else if (PERR_isLexStrCharNormal(ch)) {
      result[i] = PERR_getLexStrCharCh(ch);
    }
    else if (PERR_isLexStrCharDecimal(ch)) {
      int a = PERR_getLexStrCharA(ch);
      int b = PERR_getLexStrCharB(ch);
      int c = PERR_getLexStrCharC(ch);
      result[i] = (char) 100*a + 10*b + c;
    }
  }

  result[len] = '\0'; 
  return result;
}

/*}}}  */
/*{{{  static PERR_NatCon ERR_lowerNatCon(int natcon) */

static int PERR_lowerNatCon(PERR_NatCon pNatcon)
{
  PERR_LexNatCon lex = PERR_getNatConNatCon(pNatcon);

  return atoi(PERR_getLexNatConList(lex));
}

/*}}}  */

/*{{{  ERR_Area PERR_lowerArea(PERR_Area pArea) */

ERR_Area PERR_lowerArea(PERR_Area pArea)
{
  PERR_NatCon pBeginLine = PERR_getAreaBeginLine(pArea);
  int beginLine = PERR_lowerNatCon(pBeginLine);

  PERR_NatCon pBeginColumn = PERR_getAreaBeginColumn(pArea);
  int beginColumn = PERR_lowerNatCon(pBeginColumn);

  PERR_NatCon pEndLine = PERR_getAreaEndLine(pArea);
  int endLine = PERR_lowerNatCon(pEndLine);

  PERR_NatCon pEndColumn = PERR_getAreaEndColumn(pArea);
  int endColumn = PERR_lowerNatCon(pEndColumn);

  PERR_NatCon pOffset = PERR_getAreaOffset(pArea);
  int offset = PERR_lowerNatCon(pOffset);

  PERR_NatCon pLength = PERR_getAreaLength(pArea);
  int length = PERR_lowerNatCon(pLength);

  return ERR_makeAreaArea(beginLine, beginColumn, endLine, endColumn,
			  offset, length);
}

/*}}}  */
/*{{{  PERR_Location ERR_lowerLocation(ERR_Location pLocation) */

ERR_Location PERR_lowerLocation(PERR_Location pLocation)
{
  PERR_StrCon pFilename = PERR_getLocationFilename(pLocation);
  char *filename = strdup(PERR_lowerStrCon(pFilename));
  ERR_Location location;

  if (PERR_isLocationAreaInFile(pLocation)) {
    PERR_Area pArea = PERR_getLocationArea(pLocation);
    ERR_Area area = PERR_lowerArea(pArea);

    location = ERR_makeLocationAreaInFile(filename, area);
  }
  else {
    location = ERR_makeLocationFile(filename);
  }
  free(filename);
  return location;
}

/*}}}  */
/*{{{  ERR_Subject PERR_lowerSubject(PERR_Subject subject) */

ERR_Subject PERR_lowerSubject(PERR_Subject pSubject)
{
  PERR_StrCon pDescription = PERR_getSubjectDescription(pSubject);
  char *description = strdup(PERR_lowerStrCon(pDescription));
  ERR_Subject subject;

  if (PERR_isSubjectLocalized(pSubject)) {
    PERR_Location pLocation = PERR_getSubjectLocation(pSubject);
    ERR_Location location = PERR_lowerLocation(pLocation);
    subject = ERR_makeSubjectLocalized(description, location);
  }
  else {
    subject = ERR_makeSubjectSubject(description);
  }
  free(description);
  return subject;
}

/*}}}  */
/*{{{  ERR_SubjectList PERR_lowerSubjects(PERR_SubjectList pSubjects) */

ERR_SubjectList PERR_lowerSubjects(PERR_SubjectList pSubjects)
{
  ERR_SubjectList subjects = ERR_makeSubjectListEmpty();

  while (!PERR_isSubjectListEmpty(pSubjects)) { 
    PERR_Subject pCur = PERR_getSubjectListHead(pSubjects);
    ERR_Subject cur = PERR_lowerSubject(pCur);
    subjects = ERR_makeSubjectListMany(cur, subjects);
    if (PERR_hasSubjectListTail(pSubjects)) {
      pSubjects = PERR_getSubjectListTail(pSubjects);
    }
    else {
      break;
    }
  }

  return subjects;
}

/*}}}  */
/*{{{  ERR_Error PERR_lowerError(PERR_Error pError) */

ERR_Error PERR_lowerError(PERR_Error pError)
{
  PERR_StrCon pDescription = PERR_getErrorDescription(pError);
  PERR_SubjectList pSubjects = PERR_getErrorList(pError);
  char *description = strdup(PERR_lowerStrCon(pDescription));
  ERR_SubjectList subjects = PERR_lowerSubjects(pSubjects);
  ERR_Error error;

  if (PERR_isErrorInfo(pError)) {
    error = ERR_makeErrorInfo(description, subjects);
  }
  else if (PERR_isErrorWarning(pError)) {
    error = ERR_makeErrorWarning(description, subjects);
  }
  else if (PERR_isErrorError(pError)) {
    error = ERR_makeErrorError(description, subjects);
  }
  else if (PERR_isErrorFatal(pError)) {
    error = ERR_makeErrorFatal(description, subjects);
  }
  else {
    ATerror("unknown error type: %t\n", pError);
    error = NULL;
  }
  free(description);
  return error;
}

/*}}}  */
/*{{{  ERR_ErrorList PERR_lowerErrors(PERR_ErrorList pErrors) */

ERR_ErrorList PERR_lowerErrors(PERR_ErrorList pErrors)
{
  ERR_ErrorList errors = ERR_makeErrorListEmpty();

  while (!PERR_isErrorListEmpty(pErrors)) { 
    PERR_Error pError = PERR_getErrorListHead(pErrors);
    ERR_Error error = PERR_lowerError(pError);
    errors = ERR_makeErrorListMany(error, errors);
    if (PERR_hasErrorListTail(pErrors)) {
      pErrors = PERR_getErrorListTail(pErrors);
    }
    else {
      break;
    }
  }

  return ERR_reverseErrorList(errors);
}

/*}}}  */
/*{{{  ERR_Summary PERR_lowerSummary(PERR_Summary pSummary) */

ERR_Summary PERR_lowerSummary(PERR_Summary pSummary)
{
  PERR_StrCon pProducer = PERR_getSummaryProducer(pSummary);
  PERR_StrCon pId = PERR_getSummaryId(pSummary);
  PERR_ErrorList pErrorList = PERR_getSummaryList(pSummary);
  char *producer;
  char *id;
  ERR_ErrorList errorList;
  ERR_Summary summary;

  producer = strdup(PERR_lowerStrCon(pProducer));
  id = strdup(PERR_lowerStrCon(pId));
  errorList = PERR_lowerErrors(pErrorList);

  summary = ERR_makeSummarySummary(producer, id, errorList);
  free(producer);
  free(id);
  return summary;
}

/*}}}  */
