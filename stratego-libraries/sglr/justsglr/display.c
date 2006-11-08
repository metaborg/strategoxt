#include "Error-utils.h"

/*{{{  void ERR_displaySummary(ERR_Summary summary)  */

void ERR_displaySummary(ERR_Summary summary) 
{
  ERR_fdisplaySummary(stderr, summary);
}

/*}}}  */
/*{{{  void ERR_fdisplaySubject(FILE *fp, ERR_Subject subject)  */

void ERR_fdisplaySubject(FILE *fp, ERR_Subject subject) 
{
  if (ERR_hasSubjectDescription(subject)) {
    char *subjectDescription = ERR_getSubjectDescription(subject);
    ATfprintf(fp, "%s", subjectDescription);
  }

  if (ERR_isSubjectLocalized(subject)) {
    ERR_Location location = ERR_getSubjectLocation(subject);

    if (ERR_hasLocationFilename(location)) {
      char *filename = ERR_getLocationFilename(location);
      ATfprintf(fp, " [file: %s", filename);
    }

    if (ERR_hasLocationArea(location)) {
      ERR_Area area = ERR_getLocationArea(location);
      int line = ERR_getAreaBeginLine(area);
      int col = ERR_getAreaBeginColumn(area);
      if (ERR_hasLocationFilename(location)) {
	ATfprintf(fp, " ");
      }
      ATfprintf(fp, "line: %d col: %d", 
		line, 
		col); 
    }
    ATfprintf(fp, "]");
  }
}

/*}}}  */
/*{{{  void ERR_fdisplaySubjects(FILE *fp, ERR_SubjectList subjects, const char* producer, const char* category, const char* errorDescription)  */

void ERR_fdisplaySubjects(FILE *fp, ERR_SubjectList subjects, const char* producer, const char* category, const char* errorDescription) 
{
  ATfprintf(fp, "%s:%s: %s\n", producer, category, errorDescription);

  while (!ERR_isSubjectListEmpty(subjects)) {
    ERR_Subject subject = ERR_getSubjectListHead(subjects);
    ATfprintf(fp, "--- ");
    ERR_fdisplaySubject(fp, subject);
    ATfprintf(fp, "\n");
    subjects = ERR_getSubjectListTail(subjects);
  }
}

/*}}}  */
/*{{{  void ERR_fdisplayError(FILE *fp, ERR_Error error, const char* producer) */

void ERR_fdisplayError(FILE *fp, ERR_Error error, const char* producer)
{
  static char *category = NULL;
  char *errorDescription = ERR_getErrorDescription(error);
  ERR_SubjectList subjects = ERR_getErrorList(error);

  if (ERR_isErrorInfo(error)) {
    category = "info";
  }
  else if (ERR_isErrorWarning(error)) {
    category = "warning";
  }
  else if (ERR_isErrorError(error)) {
    category = "error";
  }
  else if (ERR_isErrorFatal(error)) {
    category = "fatal";
  }
  else {
    ATwarning("Unknown type of error: %t\n", error);
    category = "???";
  }

  ERR_fdisplaySubjects(fp, subjects, producer, category, errorDescription);
}

/*}}}  */

/*{{{  void ERR_displaySummary(ERR_Summary summary) */

void ERR_fdisplaySummary(FILE *fp, ERR_Summary summary)
{
  ERR_ErrorList errors = ERR_getSummaryList(summary);
  char *producer = ERR_getSummaryProducer(summary);
  
  while (!ERR_isErrorListEmpty(errors)) {
    ERR_Error error = ERR_getErrorListHead(errors);

    ERR_fdisplayError(fp, error, producer); 
    errors = ERR_getErrorListTail(errors);
  }
}

/*}}}  */
