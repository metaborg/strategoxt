#ifndef _PARSEDLOCATION_H
#define _PARSEDLOCATION_H

/*{{{  includes */

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "ParsedLocation_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _PLOC_Normal *PLOC_Normal;
typedef struct _PLOC_Escaped *PLOC_Escaped;
typedef struct _PLOC_StrCon *PLOC_StrCon;
typedef struct _PLOC_NatCon *PLOC_NatCon;
typedef struct _PLOC_Location *PLOC_Location;
typedef struct _PLOC_Area *PLOC_Area;
typedef struct _PLOC_Start *PLOC_Start;
typedef struct _PLOC_OptLayout *PLOC_OptLayout;

/*}}}  */

void PLOC_initParsedLocationApi(void);

/*{{{  protect functions */

void PLOC_protectNormal(PLOC_Normal * arg);
void PLOC_protectEscaped(PLOC_Escaped * arg);
void PLOC_protectStrCon(PLOC_StrCon * arg);
void PLOC_protectNatCon(PLOC_NatCon * arg);
void PLOC_protectLocation(PLOC_Location * arg);
void PLOC_protectArea(PLOC_Area * arg);
void PLOC_protectStart(PLOC_Start * arg);
void PLOC_protectOptLayout(PLOC_OptLayout * arg);

/*}}}  */
/*{{{  term conversion functions */

PLOC_Normal PLOC_NormalFromTerm(ATerm t);
ATerm PLOC_NormalToTerm(PLOC_Normal arg);
PLOC_Escaped PLOC_EscapedFromTerm(ATerm t);
ATerm PLOC_EscapedToTerm(PLOC_Escaped arg);
PLOC_StrCon PLOC_StrConFromTerm(ATerm t);
ATerm PLOC_StrConToTerm(PLOC_StrCon arg);
PLOC_NatCon PLOC_NatConFromTerm(ATerm t);
ATerm PLOC_NatConToTerm(PLOC_NatCon arg);
PLOC_Location PLOC_LocationFromTerm(ATerm t);
ATerm PLOC_LocationToTerm(PLOC_Location arg);
PLOC_Area PLOC_AreaFromTerm(ATerm t);
ATerm PLOC_AreaToTerm(PLOC_Area arg);
PLOC_Start PLOC_StartFromTerm(ATerm t);
ATerm PLOC_StartToTerm(PLOC_Start arg);
PLOC_OptLayout PLOC_OptLayoutFromTerm(ATerm t);
ATerm PLOC_OptLayoutToTerm(PLOC_OptLayout arg);

/*}}}  */
/*{{{  list functions */


/*}}}  */
/*{{{  constructors */

PLOC_Normal PLOC_makeNormalDefault(const char *string);
PLOC_Escaped PLOC_makeEscapedSpecialCharacter(const char *string);
PLOC_Escaped PLOC_makeEscapedOctal(const char *string);
PLOC_StrCon PLOC_makeStrConDefault(const char *string);
PLOC_NatCon PLOC_makeNatConDefault(const char *string);
PLOC_Location PLOC_makeLocationFile(PLOC_OptLayout wsAfterFile,
				    PLOC_OptLayout wsAfterParenOpen,
				    PLOC_StrCon filename,
				    PLOC_OptLayout wsAfterFilename);
PLOC_Location PLOC_makeLocationAreaInFile(PLOC_OptLayout wsAfterAreaInFile,
					  PLOC_OptLayout wsAfterParenOpen,
					  PLOC_StrCon filename,
					  PLOC_OptLayout wsAfterFilename,
					  PLOC_OptLayout wsAfterComma,
					  PLOC_Area Area,
					  PLOC_OptLayout wsAfterArea);
PLOC_Area PLOC_makeAreaArea(PLOC_OptLayout wsAfterArea,
			    PLOC_OptLayout wsAfterParenOpen,
			    PLOC_NatCon beginLine,
			    PLOC_OptLayout wsAfterBeginLine,
			    PLOC_OptLayout wsAfterComma,
			    PLOC_NatCon beginColumn,
			    PLOC_OptLayout wsAfterBeginColumn,
			    PLOC_OptLayout wsAfterComma1, PLOC_NatCon endLine,
			    PLOC_OptLayout wsAfterEndLine,
			    PLOC_OptLayout wsAfterComma2,
			    PLOC_NatCon endColumn,
			    PLOC_OptLayout wsAfterEndColumn,
			    PLOC_OptLayout wsAfterComma3, PLOC_NatCon offset,
			    PLOC_OptLayout wsAfterOffset,
			    PLOC_OptLayout wsAfterComma4, PLOC_NatCon length,
			    PLOC_OptLayout wsAfterLength);
PLOC_Start PLOC_makeStartArea(PLOC_OptLayout wsBefore, PLOC_Area topArea,
			      PLOC_OptLayout wsAfter, int ambCnt);
PLOC_Start PLOC_makeStartLocation(PLOC_OptLayout wsBefore,
				  PLOC_Location topLocation,
				  PLOC_OptLayout wsAfter, int ambCnt);
PLOC_Start PLOC_makeStartNatCon(PLOC_OptLayout wsBefore,
				PLOC_NatCon topNatCon, PLOC_OptLayout wsAfter,
				int ambCnt);
PLOC_Start PLOC_makeStartEscaped(PLOC_OptLayout wsBefore,
				 PLOC_Escaped topEscaped,
				 PLOC_OptLayout wsAfter, int ambCnt);
PLOC_Start PLOC_makeStartNormal(PLOC_OptLayout wsBefore,
				PLOC_Normal topNormal, PLOC_OptLayout wsAfter,
				int ambCnt);
PLOC_Start PLOC_makeStartStrCon(PLOC_OptLayout wsBefore,
				PLOC_StrCon topStrCon, PLOC_OptLayout wsAfter,
				int ambCnt);
PLOC_OptLayout PLOC_makeOptLayoutAbsent(void);
PLOC_OptLayout PLOC_makeOptLayoutPresent(const char *string);

/*}}}  */
/*{{{  equality functions */

ATbool PLOC_isEqualNormal(PLOC_Normal arg0, PLOC_Normal arg1);
ATbool PLOC_isEqualEscaped(PLOC_Escaped arg0, PLOC_Escaped arg1);
ATbool PLOC_isEqualStrCon(PLOC_StrCon arg0, PLOC_StrCon arg1);
ATbool PLOC_isEqualNatCon(PLOC_NatCon arg0, PLOC_NatCon arg1);
ATbool PLOC_isEqualLocation(PLOC_Location arg0, PLOC_Location arg1);
ATbool PLOC_isEqualArea(PLOC_Area arg0, PLOC_Area arg1);
ATbool PLOC_isEqualStart(PLOC_Start arg0, PLOC_Start arg1);
ATbool PLOC_isEqualOptLayout(PLOC_OptLayout arg0, PLOC_OptLayout arg1);

/*}}}  */
/*{{{  PLOC_Normal accessors */

ATbool PLOC_isValidNormal(PLOC_Normal arg);
inline ATbool PLOC_isNormalDefault(PLOC_Normal arg);
ATbool PLOC_hasNormalString(PLOC_Normal arg);
char *PLOC_getNormalString(PLOC_Normal arg);
PLOC_Normal PLOC_setNormalString(PLOC_Normal arg, const char *string);

/*}}}  */
/*{{{  PLOC_Escaped accessors */

ATbool PLOC_isValidEscaped(PLOC_Escaped arg);
inline ATbool PLOC_isEscapedSpecialCharacter(PLOC_Escaped arg);
inline ATbool PLOC_isEscapedOctal(PLOC_Escaped arg);
ATbool PLOC_hasEscapedString(PLOC_Escaped arg);
char *PLOC_getEscapedString(PLOC_Escaped arg);
PLOC_Escaped PLOC_setEscapedString(PLOC_Escaped arg, const char *string);

/*}}}  */
/*{{{  PLOC_StrCon accessors */

ATbool PLOC_isValidStrCon(PLOC_StrCon arg);
inline ATbool PLOC_isStrConDefault(PLOC_StrCon arg);
ATbool PLOC_hasStrConString(PLOC_StrCon arg);
char *PLOC_getStrConString(PLOC_StrCon arg);
PLOC_StrCon PLOC_setStrConString(PLOC_StrCon arg, const char *string);

/*}}}  */
/*{{{  PLOC_NatCon accessors */

ATbool PLOC_isValidNatCon(PLOC_NatCon arg);
inline ATbool PLOC_isNatConDefault(PLOC_NatCon arg);
ATbool PLOC_hasNatConString(PLOC_NatCon arg);
char *PLOC_getNatConString(PLOC_NatCon arg);
PLOC_NatCon PLOC_setNatConString(PLOC_NatCon arg, const char *string);

/*}}}  */
/*{{{  PLOC_Location accessors */

ATbool PLOC_isValidLocation(PLOC_Location arg);
inline ATbool PLOC_isLocationFile(PLOC_Location arg);
inline ATbool PLOC_isLocationAreaInFile(PLOC_Location arg);
ATbool PLOC_hasLocationWsAfterFile(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterFile(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterFile(PLOC_Location arg,
					  PLOC_OptLayout wsAfterFile);
ATbool PLOC_hasLocationWsAfterParenOpen(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterParenOpen(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterParenOpen(PLOC_Location arg,
					       PLOC_OptLayout
					       wsAfterParenOpen);
ATbool PLOC_hasLocationFilename(PLOC_Location arg);
PLOC_StrCon PLOC_getLocationFilename(PLOC_Location arg);
PLOC_Location PLOC_setLocationFilename(PLOC_Location arg,
				       PLOC_StrCon filename);
ATbool PLOC_hasLocationWsAfterFilename(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterFilename(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterFilename(PLOC_Location arg,
					      PLOC_OptLayout wsAfterFilename);
ATbool PLOC_hasLocationWsAfterAreaInFile(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterAreaInFile(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterAreaInFile(PLOC_Location arg,
						PLOC_OptLayout
						wsAfterAreaInFile);
ATbool PLOC_hasLocationWsAfterComma(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterComma(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterComma(PLOC_Location arg,
					   PLOC_OptLayout wsAfterComma);
ATbool PLOC_hasLocationArea(PLOC_Location arg);
PLOC_Area PLOC_getLocationArea(PLOC_Location arg);
PLOC_Location PLOC_setLocationArea(PLOC_Location arg, PLOC_Area Area);
ATbool PLOC_hasLocationWsAfterArea(PLOC_Location arg);
PLOC_OptLayout PLOC_getLocationWsAfterArea(PLOC_Location arg);
PLOC_Location PLOC_setLocationWsAfterArea(PLOC_Location arg,
					  PLOC_OptLayout wsAfterArea);

/*}}}  */
/*{{{  PLOC_Area accessors */

ATbool PLOC_isValidArea(PLOC_Area arg);
inline ATbool PLOC_isAreaArea(PLOC_Area arg);
ATbool PLOC_hasAreaWsAfterArea(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterArea(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterArea(PLOC_Area arg, PLOC_OptLayout wsAfterArea);
ATbool PLOC_hasAreaWsAfterParenOpen(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterParenOpen(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterParenOpen(PLOC_Area arg,
				       PLOC_OptLayout wsAfterParenOpen);
ATbool PLOC_hasAreaBeginLine(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaBeginLine(PLOC_Area arg);
PLOC_Area PLOC_setAreaBeginLine(PLOC_Area arg, PLOC_NatCon beginLine);
ATbool PLOC_hasAreaWsAfterBeginLine(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterBeginLine(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterBeginLine(PLOC_Area arg,
				       PLOC_OptLayout wsAfterBeginLine);
ATbool PLOC_hasAreaWsAfterComma(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterComma(PLOC_Area arg,
				   PLOC_OptLayout wsAfterComma);
ATbool PLOC_hasAreaBeginColumn(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaBeginColumn(PLOC_Area arg);
PLOC_Area PLOC_setAreaBeginColumn(PLOC_Area arg, PLOC_NatCon beginColumn);
ATbool PLOC_hasAreaWsAfterBeginColumn(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterBeginColumn(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterBeginColumn(PLOC_Area arg,
					 PLOC_OptLayout wsAfterBeginColumn);
ATbool PLOC_hasAreaWsAfterComma1(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma1(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterComma1(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma1);
ATbool PLOC_hasAreaEndLine(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaEndLine(PLOC_Area arg);
PLOC_Area PLOC_setAreaEndLine(PLOC_Area arg, PLOC_NatCon endLine);
ATbool PLOC_hasAreaWsAfterEndLine(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterEndLine(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterEndLine(PLOC_Area arg,
				     PLOC_OptLayout wsAfterEndLine);
ATbool PLOC_hasAreaWsAfterComma2(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma2(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterComma2(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma2);
ATbool PLOC_hasAreaEndColumn(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaEndColumn(PLOC_Area arg);
PLOC_Area PLOC_setAreaEndColumn(PLOC_Area arg, PLOC_NatCon endColumn);
ATbool PLOC_hasAreaWsAfterEndColumn(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterEndColumn(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterEndColumn(PLOC_Area arg,
				       PLOC_OptLayout wsAfterEndColumn);
ATbool PLOC_hasAreaWsAfterComma3(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma3(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterComma3(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma3);
ATbool PLOC_hasAreaOffset(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaOffset(PLOC_Area arg);
PLOC_Area PLOC_setAreaOffset(PLOC_Area arg, PLOC_NatCon offset);
ATbool PLOC_hasAreaWsAfterOffset(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterOffset(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterOffset(PLOC_Area arg,
				    PLOC_OptLayout wsAfterOffset);
ATbool PLOC_hasAreaWsAfterComma4(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterComma4(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterComma4(PLOC_Area arg,
				    PLOC_OptLayout wsAfterComma4);
ATbool PLOC_hasAreaLength(PLOC_Area arg);
PLOC_NatCon PLOC_getAreaLength(PLOC_Area arg);
PLOC_Area PLOC_setAreaLength(PLOC_Area arg, PLOC_NatCon length);
ATbool PLOC_hasAreaWsAfterLength(PLOC_Area arg);
PLOC_OptLayout PLOC_getAreaWsAfterLength(PLOC_Area arg);
PLOC_Area PLOC_setAreaWsAfterLength(PLOC_Area arg,
				    PLOC_OptLayout wsAfterLength);

/*}}}  */
/*{{{  PLOC_Start accessors */

ATbool PLOC_isValidStart(PLOC_Start arg);
inline ATbool PLOC_isStartArea(PLOC_Start arg);
inline ATbool PLOC_isStartLocation(PLOC_Start arg);
inline ATbool PLOC_isStartNatCon(PLOC_Start arg);
inline ATbool PLOC_isStartEscaped(PLOC_Start arg);
inline ATbool PLOC_isStartNormal(PLOC_Start arg);
inline ATbool PLOC_isStartStrCon(PLOC_Start arg);
ATbool PLOC_hasStartWsBefore(PLOC_Start arg);
PLOC_OptLayout PLOC_getStartWsBefore(PLOC_Start arg);
PLOC_Start PLOC_setStartWsBefore(PLOC_Start arg, PLOC_OptLayout wsBefore);
ATbool PLOC_hasStartTopArea(PLOC_Start arg);
PLOC_Area PLOC_getStartTopArea(PLOC_Start arg);
PLOC_Start PLOC_setStartTopArea(PLOC_Start arg, PLOC_Area topArea);
ATbool PLOC_hasStartWsAfter(PLOC_Start arg);
PLOC_OptLayout PLOC_getStartWsAfter(PLOC_Start arg);
PLOC_Start PLOC_setStartWsAfter(PLOC_Start arg, PLOC_OptLayout wsAfter);
ATbool PLOC_hasStartAmbCnt(PLOC_Start arg);
int PLOC_getStartAmbCnt(PLOC_Start arg);
PLOC_Start PLOC_setStartAmbCnt(PLOC_Start arg, int ambCnt);
ATbool PLOC_hasStartTopLocation(PLOC_Start arg);
PLOC_Location PLOC_getStartTopLocation(PLOC_Start arg);
PLOC_Start PLOC_setStartTopLocation(PLOC_Start arg,
				    PLOC_Location topLocation);
ATbool PLOC_hasStartTopNatCon(PLOC_Start arg);
PLOC_NatCon PLOC_getStartTopNatCon(PLOC_Start arg);
PLOC_Start PLOC_setStartTopNatCon(PLOC_Start arg, PLOC_NatCon topNatCon);
ATbool PLOC_hasStartTopEscaped(PLOC_Start arg);
PLOC_Escaped PLOC_getStartTopEscaped(PLOC_Start arg);
PLOC_Start PLOC_setStartTopEscaped(PLOC_Start arg, PLOC_Escaped topEscaped);
ATbool PLOC_hasStartTopNormal(PLOC_Start arg);
PLOC_Normal PLOC_getStartTopNormal(PLOC_Start arg);
PLOC_Start PLOC_setStartTopNormal(PLOC_Start arg, PLOC_Normal topNormal);
ATbool PLOC_hasStartTopStrCon(PLOC_Start arg);
PLOC_StrCon PLOC_getStartTopStrCon(PLOC_Start arg);
PLOC_Start PLOC_setStartTopStrCon(PLOC_Start arg, PLOC_StrCon topStrCon);

/*}}}  */
/*{{{  PLOC_OptLayout accessors */

ATbool PLOC_isValidOptLayout(PLOC_OptLayout arg);
inline ATbool PLOC_isOptLayoutAbsent(PLOC_OptLayout arg);
inline ATbool PLOC_isOptLayoutPresent(PLOC_OptLayout arg);
ATbool PLOC_hasOptLayoutString(PLOC_OptLayout arg);
char *PLOC_getOptLayoutString(PLOC_OptLayout arg);
PLOC_OptLayout PLOC_setOptLayoutString(PLOC_OptLayout arg,
				       const char *string);

/*}}}  */
/*{{{  sort visitors */

PLOC_Normal PLOC_visitNormal(PLOC_Normal arg, char *(*acceptString) (char *));
PLOC_Escaped PLOC_visitEscaped(PLOC_Escaped arg,
			       char *(*acceptString) (char *));
PLOC_StrCon PLOC_visitStrCon(PLOC_StrCon arg, char *(*acceptString) (char *));
PLOC_NatCon PLOC_visitNatCon(PLOC_NatCon arg, char *(*acceptString) (char *));
PLOC_Location PLOC_visitLocation(PLOC_Location arg,
				 PLOC_OptLayout(*acceptWsAfterFile)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterParenOpen)
				 (PLOC_OptLayout),
				 PLOC_StrCon(*acceptFilename) (PLOC_StrCon),
				 PLOC_OptLayout(*acceptWsAfterFilename)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterAreaInFile)
				 (PLOC_OptLayout),
				 PLOC_OptLayout(*acceptWsAfterComma)
				 (PLOC_OptLayout),
				 PLOC_Area(*acceptArea) (PLOC_Area),
				 PLOC_OptLayout(*acceptWsAfterArea)
				 (PLOC_OptLayout));
PLOC_Area PLOC_visitArea(PLOC_Area arg,
			 PLOC_OptLayout(*acceptWsAfterArea) (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterParenOpen)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptBeginLine) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterBeginLine)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma) (PLOC_OptLayout),
			 PLOC_NatCon(*acceptBeginColumn) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterBeginColumn)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma1)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptEndLine) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterEndLine)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma2)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptEndColumn) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterEndColumn)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma3)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptOffset) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterOffset)
			 (PLOC_OptLayout),
			 PLOC_OptLayout(*acceptWsAfterComma4)
			 (PLOC_OptLayout),
			 PLOC_NatCon(*acceptLength) (PLOC_NatCon),
			 PLOC_OptLayout(*acceptWsAfterLength)
			 (PLOC_OptLayout));
PLOC_Start PLOC_visitStart(PLOC_Start arg,
			   PLOC_OptLayout(*acceptWsBefore) (PLOC_OptLayout),
			   PLOC_Area(*acceptTopArea) (PLOC_Area),
			   PLOC_OptLayout(*acceptWsAfter) (PLOC_OptLayout),
			   int (*acceptAmbCnt) (int),
			   PLOC_Location(*acceptTopLocation) (PLOC_Location),
			   PLOC_NatCon(*acceptTopNatCon) (PLOC_NatCon),
			   PLOC_Escaped(*acceptTopEscaped) (PLOC_Escaped),
			   PLOC_Normal(*acceptTopNormal) (PLOC_Normal),
			   PLOC_StrCon(*acceptTopStrCon) (PLOC_StrCon));
PLOC_OptLayout PLOC_visitOptLayout(PLOC_OptLayout arg,
				   char *(*acceptString) (char *));

/*}}}  */

#endif /* _PARSEDLOCATION_H */
