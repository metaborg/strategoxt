/*{{{  includes */

#include "Error-utils.h"

/*}}}  */

/*{{{  void ERR_displaySummary(ERR_Summary summary) */

void ERR_displaySummary(ERR_Summary summary)
{
  char *category;
  ERR_ErrorList errors = ERR_getSummaryList(summary);
  char *producer = ERR_getSummaryProducer(summary);
  char *identification = ERR_getSummaryId(summary);

  while (!ERR_isErrorListEmpty(errors)) {
    ERR_Error error = ERR_getErrorListHead(errors);
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
      ATabort("unknown error category: %t\n", error);
      category = "";
    }

    while (!ERR_isSubjectListEmpty(subjects)) {
      ERR_Subject subject = ERR_getSubjectListHead(subjects);
      char *subjectDescription = ERR_getSubjectDescription(subject);

      ATwarning("%s:%s: %s", producer, category, errorDescription);

      if (ERR_isSubjectLocalized(subject)) {
	ERR_Location location = ERR_getSubjectLocation(subject);
        char *filename = ERR_getLocationFilename(location);

        ATwarning(" in %s", filename);
	if (ERR_isLocationAreaInFile(location)) {
	  ERR_Area area = ERR_getLocationArea(location);
	  int line = ERR_getAreaBeginLine(area);
	  int col = ERR_getAreaBeginColumn(area);
	  ATwarning(", line %d, col %d: %s", line, col, subjectDescription);
	}
      } else {
        ATwarning(" in %s: %s", identification, subjectDescription);
      }
      ATwarning("\n");
      subjects = ERR_getSubjectListTail(subjects);
    }

    errors = ERR_getErrorListTail(errors);
  }
}

/*}}}  */
