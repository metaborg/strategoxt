#ifndef ERRORS_UTILS_H
#define ERRORS_UTILS_H

#include <Error.h>
#include <ParsedError.h>

void initErrorApi();

PERR_Area ERR_liftArea(ERR_Area area);
PERR_Location ERR_liftLocation(ERR_Location location);
PERR_Subject ERR_liftSubject(ERR_Subject subject);
PERR_SubjectList ERR_liftSubjectList(ERR_SubjectList subjects);
PERR_Error ERR_liftError(ERR_Error error);
PERR_Summary ERR_liftSummary(ERR_Summary summary);

ERR_Area PERR_lowerArea(PERR_Area area);
ERR_Location PERR_lowerLocation(PERR_Location location);
ERR_Subject PERR_lowerSubject(PERR_Subject subject);
ERR_SubjectList PERR_lowerSubjects(PERR_SubjectList subjects);
ERR_Error PERR_lowerError(PERR_Error error);
ERR_Summary PERR_lowerSummary(PERR_Summary pSummary);

void ERR_displaySummary(ERR_Summary summary);
void ERR_fdisplaySummary(FILE *fp, ERR_Summary summary);
void ERR_fdisplayError(FILE *fp, ERR_Error error, const char* producer);

#endif
