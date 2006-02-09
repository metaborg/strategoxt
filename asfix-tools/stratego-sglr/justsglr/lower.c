#include "Error-utils.h"

/*{{{  static char *PERR_lowerStrCon(PERR_StrCon str) */

static char *PERR_lowerStrCon(PERR_StrCon pStr)
{
  char *str = PERR_getStrConString(pStr);
  str[strlen(str)-1] = '\0';
  return str+1;
}

/*}}}  */
/*{{{  static PERR_NatCon ERR_lowerNatCon(int natcon) */

static int PERR_lowerNatCon(PERR_NatCon pNatcon)
{
  return atoi(PERR_getNatConString(pNatcon));
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
  char *filename = PERR_lowerStrCon(pFilename);

  if (PERR_isLocationAreaInFile(pLocation)) {
    PERR_Area pArea = PERR_getLocationArea(pLocation);
    ERR_Area area = PERR_lowerArea(pArea);

    return ERR_makeLocationAreaInFile(filename, area);
  }

  return ERR_makeLocationFile(filename);
}

/*}}}  */
/*{{{  ERR_Subject PERR_lowerSubject(PERR_Subject subject) */

ERR_Subject PERR_lowerSubject(PERR_Subject pSubject)
{
  PERR_StrCon pDescription = PERR_getSubjectDescription(pSubject);
  char *description = PERR_lowerStrCon(pDescription);

  if (PERR_isSubjectLocalized(pSubject)) {
    PERR_Location pLocation = PERR_getSubjectLocation(pSubject);
    ERR_Location location = PERR_lowerLocation(pLocation);
    return ERR_makeSubjectLocalized(description, location);
  }

  return ERR_makeSubjectSubject(description);
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
  char *description = PERR_lowerStrCon(pDescription);
  ERR_SubjectList subjects = PERR_lowerSubjects(pSubjects);

  if (PERR_isErrorInfo(pError)) {
    return ERR_makeErrorInfo(description, subjects);
  }
  else if (PERR_isErrorWarning(pError)) {
    return ERR_makeErrorWarning(description, subjects);
  }
  else if (PERR_isErrorError(pError)) {
    return ERR_makeErrorError(description, subjects);
  }
  else if (PERR_isErrorFatal(pError)) {
    return ERR_makeErrorFatal(description, subjects);
  }

  ATerror("unknown error type: %t\n", pError);
  return NULL;
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

  producer = PERR_lowerStrCon(pProducer);
  id = PERR_lowerStrCon(pId);
  errorList = PERR_lowerErrors(pErrorList);

  return ERR_makeSummarySummary(producer, id, errorList);
}

/*}}}  */
