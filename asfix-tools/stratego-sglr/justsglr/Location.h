#ifndef _LOCATION_H
#define _LOCATION_H

/*{{{  includes */

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "Location_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _LOC_Normal *LOC_Normal;
typedef struct _LOC_Escaped *LOC_Escaped;
typedef struct _LOC_StrCon *LOC_StrCon;
typedef struct _LOC_NatCon *LOC_NatCon;
typedef struct _LOC_Location *LOC_Location;
typedef struct _LOC_Area *LOC_Area;

/*}}}  */

void LOC_initLocationApi(void);

/*{{{  protect functions */

void LOC_protectNormal(LOC_Normal * arg);
void LOC_protectEscaped(LOC_Escaped * arg);
void LOC_protectStrCon(LOC_StrCon * arg);
void LOC_protectNatCon(LOC_NatCon * arg);
void LOC_protectLocation(LOC_Location * arg);
void LOC_protectArea(LOC_Area * arg);

/*}}}  */
/*{{{  term conversion functions */

LOC_Normal LOC_NormalFromTerm(ATerm t);
ATerm LOC_NormalToTerm(LOC_Normal arg);
LOC_Escaped LOC_EscapedFromTerm(ATerm t);
ATerm LOC_EscapedToTerm(LOC_Escaped arg);
LOC_StrCon LOC_StrConFromTerm(ATerm t);
ATerm LOC_StrConToTerm(LOC_StrCon arg);
LOC_NatCon LOC_NatConFromTerm(ATerm t);
ATerm LOC_NatConToTerm(LOC_NatCon arg);
LOC_Location LOC_LocationFromTerm(ATerm t);
ATerm LOC_LocationToTerm(LOC_Location arg);
LOC_Area LOC_AreaFromTerm(ATerm t);
ATerm LOC_AreaToTerm(LOC_Area arg);

/*}}}  */
/*{{{  list functions */


/*}}}  */
/*{{{  constructors */

LOC_Normal LOC_makeNormalNormal(const char *string);
LOC_Escaped LOC_makeEscapedEscaped(const char *string);
LOC_StrCon LOC_makeStrConStrCon(const char *string);
LOC_NatCon LOC_makeNatConNatCon(const char *string);
LOC_Location LOC_makeLocationFile(const char *filename);
LOC_Location LOC_makeLocationAreaInFile(const char *filename, LOC_Area Area);
LOC_Area LOC_makeAreaArea(int beginLine, int beginColumn, int endLine,
			  int endColumn, int offset, int length);

/*}}}  */
/*{{{  equality functions */

ATbool LOC_isEqualNormal(LOC_Normal arg0, LOC_Normal arg1);
ATbool LOC_isEqualEscaped(LOC_Escaped arg0, LOC_Escaped arg1);
ATbool LOC_isEqualStrCon(LOC_StrCon arg0, LOC_StrCon arg1);
ATbool LOC_isEqualNatCon(LOC_NatCon arg0, LOC_NatCon arg1);
ATbool LOC_isEqualLocation(LOC_Location arg0, LOC_Location arg1);
ATbool LOC_isEqualArea(LOC_Area arg0, LOC_Area arg1);

/*}}}  */
/*{{{  LOC_Normal accessors */

ATbool LOC_isValidNormal(LOC_Normal arg);
inline ATbool LOC_isNormalNormal(LOC_Normal arg);
ATbool LOC_hasNormalString(LOC_Normal arg);
char *LOC_getNormalString(LOC_Normal arg);
LOC_Normal LOC_setNormalString(LOC_Normal arg, const char *string);

/*}}}  */
/*{{{  LOC_Escaped accessors */

ATbool LOC_isValidEscaped(LOC_Escaped arg);
inline ATbool LOC_isEscapedEscaped(LOC_Escaped arg);
ATbool LOC_hasEscapedString(LOC_Escaped arg);
char *LOC_getEscapedString(LOC_Escaped arg);
LOC_Escaped LOC_setEscapedString(LOC_Escaped arg, const char *string);

/*}}}  */
/*{{{  LOC_StrCon accessors */

ATbool LOC_isValidStrCon(LOC_StrCon arg);
inline ATbool LOC_isStrConStrCon(LOC_StrCon arg);
ATbool LOC_hasStrConString(LOC_StrCon arg);
char *LOC_getStrConString(LOC_StrCon arg);
LOC_StrCon LOC_setStrConString(LOC_StrCon arg, const char *string);

/*}}}  */
/*{{{  LOC_NatCon accessors */

ATbool LOC_isValidNatCon(LOC_NatCon arg);
inline ATbool LOC_isNatConNatCon(LOC_NatCon arg);
ATbool LOC_hasNatConString(LOC_NatCon arg);
char *LOC_getNatConString(LOC_NatCon arg);
LOC_NatCon LOC_setNatConString(LOC_NatCon arg, const char *string);

/*}}}  */
/*{{{  LOC_Location accessors */

ATbool LOC_isValidLocation(LOC_Location arg);
inline ATbool LOC_isLocationFile(LOC_Location arg);
inline ATbool LOC_isLocationAreaInFile(LOC_Location arg);
ATbool LOC_hasLocationFilename(LOC_Location arg);
char *LOC_getLocationFilename(LOC_Location arg);
LOC_Location LOC_setLocationFilename(LOC_Location arg, const char *filename);
ATbool LOC_hasLocationArea(LOC_Location arg);
LOC_Area LOC_getLocationArea(LOC_Location arg);
LOC_Location LOC_setLocationArea(LOC_Location arg, LOC_Area Area);

/*}}}  */
/*{{{  LOC_Area accessors */

ATbool LOC_isValidArea(LOC_Area arg);
inline ATbool LOC_isAreaArea(LOC_Area arg);
ATbool LOC_hasAreaBeginLine(LOC_Area arg);
int LOC_getAreaBeginLine(LOC_Area arg);
LOC_Area LOC_setAreaBeginLine(LOC_Area arg, int beginLine);
ATbool LOC_hasAreaBeginColumn(LOC_Area arg);
int LOC_getAreaBeginColumn(LOC_Area arg);
LOC_Area LOC_setAreaBeginColumn(LOC_Area arg, int beginColumn);
ATbool LOC_hasAreaEndLine(LOC_Area arg);
int LOC_getAreaEndLine(LOC_Area arg);
LOC_Area LOC_setAreaEndLine(LOC_Area arg, int endLine);
ATbool LOC_hasAreaEndColumn(LOC_Area arg);
int LOC_getAreaEndColumn(LOC_Area arg);
LOC_Area LOC_setAreaEndColumn(LOC_Area arg, int endColumn);
ATbool LOC_hasAreaOffset(LOC_Area arg);
int LOC_getAreaOffset(LOC_Area arg);
LOC_Area LOC_setAreaOffset(LOC_Area arg, int offset);
ATbool LOC_hasAreaLength(LOC_Area arg);
int LOC_getAreaLength(LOC_Area arg);
LOC_Area LOC_setAreaLength(LOC_Area arg, int length);

/*}}}  */
/*{{{  sort visitors */

LOC_Normal LOC_visitNormal(LOC_Normal arg, char *(*acceptString) (char *));
LOC_Escaped LOC_visitEscaped(LOC_Escaped arg, char *(*acceptString) (char *));
LOC_StrCon LOC_visitStrCon(LOC_StrCon arg, char *(*acceptString) (char *));
LOC_NatCon LOC_visitNatCon(LOC_NatCon arg, char *(*acceptString) (char *));
LOC_Location LOC_visitLocation(LOC_Location arg,
			       char *(*acceptFilename) (char *),
			       LOC_Area(*acceptArea) (LOC_Area));
LOC_Area LOC_visitArea(LOC_Area arg, int (*acceptBeginLine) (int),
		       int (*acceptBeginColumn) (int),
		       int (*acceptEndLine) (int),
		       int (*acceptEndColumn) (int),
		       int (*acceptOffset) (int), int (*acceptLength) (int));

/*}}}  */

#endif /* _LOCATION_H */
