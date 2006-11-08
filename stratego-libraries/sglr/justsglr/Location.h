#ifndef _LOCATION_H
#define _LOCATION_H

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "Location_dict.h"

typedef struct _LOC_StrChar *LOC_StrChar;
typedef struct _LOC_StrCon *LOC_StrCon;
typedef struct _LOC_NatCon *LOC_NatCon;
typedef struct _LOC_Location *LOC_Location;
typedef struct _LOC_Area *LOC_Area;
typedef struct _LOC_Slice *LOC_Slice;
typedef struct _LOC_AreaAreas *LOC_AreaAreas;

void LOC_initLocationApi(void);

void LOC_protectStrChar(LOC_StrChar * arg);
void LOC_unprotectStrChar(LOC_StrChar * arg);
void LOC_protectStrCon(LOC_StrCon * arg);
void LOC_unprotectStrCon(LOC_StrCon * arg);
void LOC_protectNatCon(LOC_NatCon * arg);
void LOC_unprotectNatCon(LOC_NatCon * arg);
void LOC_protectLocation(LOC_Location * arg);
void LOC_unprotectLocation(LOC_Location * arg);
void LOC_protectArea(LOC_Area * arg);
void LOC_unprotectArea(LOC_Area * arg);
void LOC_protectSlice(LOC_Slice * arg);
void LOC_unprotectSlice(LOC_Slice * arg);
void LOC_protectAreaAreas(LOC_AreaAreas * arg);
void LOC_unprotectAreaAreas(LOC_AreaAreas * arg);
LOC_StrChar LOC_StrCharFromTerm(ATerm t);
ATerm LOC_StrCharToTerm(LOC_StrChar arg);
LOC_StrCon LOC_StrConFromTerm(ATerm t);
ATerm LOC_StrConToTerm(LOC_StrCon arg);
LOC_NatCon LOC_NatConFromTerm(ATerm t);
ATerm LOC_NatConToTerm(LOC_NatCon arg);
LOC_Location LOC_LocationFromTerm(ATerm t);
ATerm LOC_LocationToTerm(LOC_Location arg);
LOC_Area LOC_AreaFromTerm(ATerm t);
ATerm LOC_AreaToTerm(LOC_Area arg);
LOC_Slice LOC_SliceFromTerm(ATerm t);
ATerm LOC_SliceToTerm(LOC_Slice arg);
LOC_AreaAreas LOC_AreaAreasFromTerm(ATerm t);
ATerm LOC_AreaAreasToTerm(LOC_AreaAreas arg);
int LOC_getAreaAreasLength(LOC_AreaAreas arg);
LOC_AreaAreas LOC_reverseAreaAreas(LOC_AreaAreas arg);
LOC_AreaAreas LOC_appendAreaAreas(LOC_AreaAreas arg, LOC_Area elem);
LOC_AreaAreas LOC_concatAreaAreas(LOC_AreaAreas arg0, LOC_AreaAreas arg1);
LOC_AreaAreas LOC_sliceAreaAreas(LOC_AreaAreas arg, int start, int end);
LOC_Area LOC_getAreaAreasAreaAt(LOC_AreaAreas arg, int index);
LOC_AreaAreas LOC_replaceAreaAreasAreaAt(LOC_AreaAreas arg, LOC_Area elem,
					 int index);
LOC_AreaAreas LOC_makeAreaAreas2(LOC_Area elem1, LOC_Area elem2);
LOC_AreaAreas LOC_makeAreaAreas3(LOC_Area elem1, LOC_Area elem2,
				 LOC_Area elem3);
LOC_AreaAreas LOC_makeAreaAreas4(LOC_Area elem1, LOC_Area elem2,
				 LOC_Area elem3, LOC_Area elem4);
LOC_AreaAreas LOC_makeAreaAreas5(LOC_Area elem1, LOC_Area elem2,
				 LOC_Area elem3, LOC_Area elem4,
				 LOC_Area elem5);
LOC_AreaAreas LOC_makeAreaAreas6(LOC_Area elem1, LOC_Area elem2,
				 LOC_Area elem3, LOC_Area elem4,
				 LOC_Area elem5, LOC_Area elem6);
LOC_StrChar LOC_makeStrCharStrChar(const char *string);
LOC_StrCon LOC_makeStrConStrCon(const char *string);
LOC_NatCon LOC_makeNatConNatCon(const char *string);
LOC_Location LOC_makeLocationFile(const char *filename);
LOC_Location LOC_makeLocationArea(LOC_Area Area);
LOC_Location LOC_makeLocationAreaInFile(const char *filename, LOC_Area Area);
LOC_Area LOC_makeAreaArea(int beginLine, int beginColumn, int endLine,
			  int endColumn, int offset, int length);
LOC_Slice LOC_makeSliceSlice(const char *id, LOC_AreaAreas areas);
LOC_AreaAreas LOC_makeAreaAreasEmpty(void);
LOC_AreaAreas LOC_makeAreaAreasSingle(LOC_Area head);
LOC_AreaAreas LOC_makeAreaAreasMany(LOC_Area head, LOC_AreaAreas tail);
ATbool LOC_isEqualStrChar(LOC_StrChar arg0, LOC_StrChar arg1);
ATbool LOC_isEqualStrCon(LOC_StrCon arg0, LOC_StrCon arg1);
ATbool LOC_isEqualNatCon(LOC_NatCon arg0, LOC_NatCon arg1);
ATbool LOC_isEqualLocation(LOC_Location arg0, LOC_Location arg1);
ATbool LOC_isEqualArea(LOC_Area arg0, LOC_Area arg1);
ATbool LOC_isEqualSlice(LOC_Slice arg0, LOC_Slice arg1);
ATbool LOC_isEqualAreaAreas(LOC_AreaAreas arg0, LOC_AreaAreas arg1);
ATbool LOC_isValidStrChar(LOC_StrChar arg);
inline ATbool LOC_isStrCharStrChar(LOC_StrChar arg);
ATbool LOC_hasStrCharString(LOC_StrChar arg);
char *LOC_getStrCharString(LOC_StrChar arg);
LOC_StrChar LOC_setStrCharString(LOC_StrChar arg, const char *string);
ATbool LOC_isValidStrCon(LOC_StrCon arg);
inline ATbool LOC_isStrConStrCon(LOC_StrCon arg);
ATbool LOC_hasStrConString(LOC_StrCon arg);
char *LOC_getStrConString(LOC_StrCon arg);
LOC_StrCon LOC_setStrConString(LOC_StrCon arg, const char *string);
ATbool LOC_isValidNatCon(LOC_NatCon arg);
inline ATbool LOC_isNatConNatCon(LOC_NatCon arg);
ATbool LOC_hasNatConString(LOC_NatCon arg);
char *LOC_getNatConString(LOC_NatCon arg);
LOC_NatCon LOC_setNatConString(LOC_NatCon arg, const char *string);
ATbool LOC_isValidLocation(LOC_Location arg);
inline ATbool LOC_isLocationFile(LOC_Location arg);
inline ATbool LOC_isLocationArea(LOC_Location arg);
inline ATbool LOC_isLocationAreaInFile(LOC_Location arg);
ATbool LOC_hasLocationFilename(LOC_Location arg);
ATbool LOC_hasLocationArea(LOC_Location arg);
char *LOC_getLocationFilename(LOC_Location arg);
LOC_Area LOC_getLocationArea(LOC_Location arg);
LOC_Location LOC_setLocationFilename(LOC_Location arg, const char *filename);
LOC_Location LOC_setLocationArea(LOC_Location arg, LOC_Area Area);
ATbool LOC_isValidArea(LOC_Area arg);
inline ATbool LOC_isAreaArea(LOC_Area arg);
ATbool LOC_hasAreaBeginLine(LOC_Area arg);
ATbool LOC_hasAreaBeginColumn(LOC_Area arg);
ATbool LOC_hasAreaEndLine(LOC_Area arg);
ATbool LOC_hasAreaEndColumn(LOC_Area arg);
ATbool LOC_hasAreaOffset(LOC_Area arg);
ATbool LOC_hasAreaLength(LOC_Area arg);
int LOC_getAreaBeginLine(LOC_Area arg);
int LOC_getAreaBeginColumn(LOC_Area arg);
int LOC_getAreaEndLine(LOC_Area arg);
int LOC_getAreaEndColumn(LOC_Area arg);
int LOC_getAreaOffset(LOC_Area arg);
int LOC_getAreaLength(LOC_Area arg);
LOC_Area LOC_setAreaBeginLine(LOC_Area arg, int beginLine);
LOC_Area LOC_setAreaBeginColumn(LOC_Area arg, int beginColumn);
LOC_Area LOC_setAreaEndLine(LOC_Area arg, int endLine);
LOC_Area LOC_setAreaEndColumn(LOC_Area arg, int endColumn);
LOC_Area LOC_setAreaOffset(LOC_Area arg, int offset);
LOC_Area LOC_setAreaLength(LOC_Area arg, int length);
ATbool LOC_isValidSlice(LOC_Slice arg);
inline ATbool LOC_isSliceSlice(LOC_Slice arg);
ATbool LOC_hasSliceId(LOC_Slice arg);
ATbool LOC_hasSliceAreas(LOC_Slice arg);
char *LOC_getSliceId(LOC_Slice arg);
LOC_AreaAreas LOC_getSliceAreas(LOC_Slice arg);
LOC_Slice LOC_setSliceId(LOC_Slice arg, const char *id);
LOC_Slice LOC_setSliceAreas(LOC_Slice arg, LOC_AreaAreas areas);
ATbool LOC_isValidAreaAreas(LOC_AreaAreas arg);
inline ATbool LOC_isAreaAreasEmpty(LOC_AreaAreas arg);
inline ATbool LOC_isAreaAreasSingle(LOC_AreaAreas arg);
inline ATbool LOC_isAreaAreasMany(LOC_AreaAreas arg);
ATbool LOC_hasAreaAreasHead(LOC_AreaAreas arg);
ATbool LOC_hasAreaAreasTail(LOC_AreaAreas arg);
LOC_Area LOC_getAreaAreasHead(LOC_AreaAreas arg);
LOC_AreaAreas LOC_getAreaAreasTail(LOC_AreaAreas arg);
LOC_AreaAreas LOC_setAreaAreasHead(LOC_AreaAreas arg, LOC_Area head);
LOC_AreaAreas LOC_setAreaAreasTail(LOC_AreaAreas arg, LOC_AreaAreas tail);
LOC_StrChar LOC_visitStrChar(LOC_StrChar arg, char *(*acceptString) (char *));
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
LOC_Slice LOC_visitSlice(LOC_Slice arg, char *(*acceptId) (char *),
			 LOC_AreaAreas(*acceptAreas) (LOC_AreaAreas));
LOC_AreaAreas LOC_visitAreaAreas(LOC_AreaAreas arg,
				 LOC_Area(*acceptHead) (LOC_Area));

#endif /* _LOCATION_H */
