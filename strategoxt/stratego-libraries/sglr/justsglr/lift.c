#include "Error-utils.h"
#include <ctype.h>

/* note that the function below is copied from another lifting
 * library. This kind of duplication can be avoided when apigen
 * for C will support modular generation of API's.
 */
static PERR_LexStrCon ERR_makeLexStrCon(const char* str)
{
  int len = strlen(str);
  int i;
  PERR_LexStrCharChars list = PERR_makeLexStrCharCharsEmpty();

  for (i = len - 1; i >= 0; i--) {
    PERR_LexStrChar ch;

    switch(str[i]) {
      case '\n':
        ch = PERR_makeLexStrCharNewline();
        break;
      case '\t':
        ch = PERR_makeLexStrCharTab();
        break;
      case '"':
        ch = PERR_makeLexStrCharQuote();
        break;
      case '\\':
        ch = PERR_makeLexStrCharBackslash();
        break;
      default:
        if (isprint((int) str[i])) {
          ch = PERR_makeLexStrCharNormal(str[i]);
        }
        else {
          int value = str[i];
          int a, b, c;

          c = value % 10;
          value /= 10;
          b = value % 10;
          value /= 10;
          a = value;

          ch = PERR_makeLexStrCharDecimal(a,b,c);
        }
    }

    list = PERR_makeLexStrCharCharsMany(ch, list);
  }


  return PERR_makeLexStrConDefault(list);
}

static PERR_StrCon ERR_liftStrCon(const char *str)
{
  return PERR_makeStrConLexToCf(ERR_makeLexStrCon(str));
}

/*{{{  static PERR_NatCon ERR_liftNatCon(int natcon) */

static PERR_NatCon ERR_liftNatCon(int natcon)
{
  static char string[1024];
  sprintf(string, "%d", natcon);
  return PERR_makeNatConLexToCf(PERR_makeLexNatConDigits(string));
}

/*}}}  */

/*{{{  PERR_Area ERR_liftArea(ERR_Area area) */

PERR_Area ERR_liftArea(ERR_Area area)
{
  int beginLine;
  int beginColumn;
  int endLine;
  int endColumn;
  int offset;
  int length;
  PERR_NatCon pBeginLine;
  PERR_NatCon pBeginColumn;
  PERR_NatCon pEndLine;
  PERR_NatCon pEndColumn;
  PERR_NatCon pOffset;
  PERR_NatCon pLength;
  PERR_OptLayout e;

  beginLine = ERR_getAreaBeginLine(area);
  beginColumn = ERR_getAreaBeginColumn(area);
  endLine = ERR_getAreaEndLine(area);
  endColumn = ERR_getAreaEndColumn(area);
  offset = ERR_getAreaOffset(area);
  length = ERR_getAreaLength(area);

  pBeginLine = ERR_liftNatCon(beginLine);
  pBeginColumn = ERR_liftNatCon(beginColumn);
  pEndLine = ERR_liftNatCon(endLine);
  pEndColumn = ERR_liftNatCon(endColumn);
  pOffset = ERR_liftNatCon(offset);
  pLength = ERR_liftNatCon(length);
  e = PERR_makeOptLayoutAbsent();

  return PERR_makeAreaArea(e,e,
			   pBeginLine,
			   e,e,
			   pBeginColumn,
			   e,e,
			   pEndLine,
			   e,e,
			   pEndColumn,
			   e,e,
			   pOffset,
			   e,e,
			   pLength,
			   e);
}

/*}}}  */
/*{{{  PERR_Location ERR_liftLocation(ERR_Location location) */

PERR_Location ERR_liftLocation(ERR_Location location)
{
  char *filename = ERR_getLocationFilename(location);
  PERR_StrCon pFilename = ERR_liftStrCon(filename);
  PERR_OptLayout e = PERR_makeOptLayoutAbsent();

  if (ERR_isLocationAreaInFile(location)) {
    ERR_Area area = ERR_getLocationArea(location);
    PERR_Area pArea = ERR_liftArea(area);

    return PERR_makeLocationAreaInFile(e, e, pFilename, e, e, pArea, e);
  }
 
  return PERR_makeLocationFile(e, e, pFilename, e);
}

/*}}}  */
/*{{{  PERR_Subject ERR_liftSubject(ERR_Subject subject) */

PERR_Subject ERR_liftSubject(ERR_Subject subject)
{
  char *description = ERR_getSubjectDescription(subject);
  PERR_StrCon pDescription = ERR_liftStrCon(description);
  PERR_OptLayout e = PERR_makeOptLayoutAbsent();
  
  if (ERR_isSubjectLocalized(subject)) {
    ERR_Location location = ERR_getSubjectLocation(subject);
    PERR_Location pLocation = ERR_liftLocation(location);
    return PERR_makeSubjectLocalized(e, e, pDescription, e, e, pLocation, e);
  }

  return PERR_makeSubjectSubject(e, e, pDescription, e);
}

/*}}}  */
/*{{{  PERR_SubjectList ERR_liftSubjects(ERR_SubjectList subjects) */

PERR_SubjectList ERR_liftSubjects(ERR_SubjectList subjects)
{
  PERR_SubjectList pSubjects = PERR_makeSubjectListEmpty();
  PERR_OptLayout e = PERR_makeOptLayoutAbsent();

  while (!ERR_isSubjectListEmpty(subjects)) {
    ERR_Subject cur = ERR_getSubjectListHead(subjects);
    PERR_Subject pCur = ERR_liftSubject(cur);
    pSubjects = PERR_makeSubjectListMany(pCur, e, e, pSubjects);
    subjects = ERR_getSubjectListTail(subjects);
  }

  return pSubjects;
}

/*}}}  */
/*{{{  PERR_Error ERR_liftError(ERR_Error error) */

PERR_Error ERR_liftError(ERR_Error error)
{
  char *description = ERR_getErrorDescription(error);
  PERR_StrCon pDescription = ERR_liftStrCon(description);
  ERR_SubjectList subjects = ERR_getErrorList(error);
  PERR_SubjectList pSubjects = ERR_liftSubjects(subjects);
  PERR_OptLayout e = PERR_makeOptLayoutAbsent();

  if (ERR_isErrorInfo(error)) {
    return PERR_makeErrorInfo(e, e, pDescription, e, e, e, pSubjects, e, e);
  }
  else if (ERR_isErrorWarning(error)) {
    return PERR_makeErrorWarning(e, e, pDescription, e, e, e, pSubjects, e, e);
  }
  else if (ERR_isErrorError(error)) {
    return PERR_makeErrorError(e, e, pDescription, e, e, e, pSubjects, e, e);
  }
  else if (ERR_isErrorFatal(error)) {
    return PERR_makeErrorFatal(e, e, pDescription, e, e, e, pSubjects, e, e);
  }

  ATerror("unknown error type: %t\n", error);
  return NULL;
}

/*}}}  */

/*{{{  static PERR_ErrorList ERR_liftErrorList(ERR_ErrorList errors)  */

static PERR_ErrorList ERR_liftErrorList(ERR_ErrorList errors) 
{
  PERR_OptLayout e = PERR_makeOptLayoutAbsent();
  PERR_ErrorList result = PERR_makeErrorListEmpty();

  for (;!ERR_isErrorListEmpty(errors); errors = ERR_getErrorListTail(errors)) {
    ERR_Error head = ERR_getErrorListHead(errors);
    PERR_Error pHead = ERR_liftError(head);

    result = PERR_makeErrorListMany(pHead, e, e, result);
  }

  return PERR_reverseErrorList(result);
}

/*}}}  */
/*{{{  PERR_Summary ERR_liftSummary(ERR_Summary summary)  */

PERR_Summary ERR_liftSummary(ERR_Summary summary) 
{
  PERR_OptLayout e = PERR_makeOptLayoutAbsent();
  const char *producer = ERR_getSummaryProducer(summary);
  const char *id = ERR_getSummaryId(summary);
  ERR_ErrorList errors = ERR_getSummaryList(summary);
  PERR_StrCon pProducer = ERR_liftStrCon(producer);
  PERR_StrCon pId = ERR_liftStrCon(id);
  PERR_ErrorList pErrors = ERR_liftErrorList(errors);

  return PERR_makeSummarySummary(e, e,
				 pProducer,
				 e, e,
				 pId,
				 e, e, e,
				 pErrors,
				 e, e);
}

/*}}}  */
