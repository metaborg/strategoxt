#ifndef __ParsedLocation_dict_H
#define __ParsedLocation_dict_H

#include <aterm2.h>

extern AFun PLOC_afun17;
extern AFun PLOC_afun22;
extern AFun PLOC_afun3;
extern AFun PLOC_afun9;
extern AFun PLOC_afun19;
extern AFun PLOC_afun26;
extern AFun PLOC_afun2;
extern AFun PLOC_afun12;
extern AFun PLOC_afun15;
extern AFun PLOC_afun25;
extern AFun PLOC_afun18;
extern AFun PLOC_afun20;
extern AFun PLOC_afun8;
extern AFun PLOC_afun28;
extern AFun PLOC_afun21;
extern AFun PLOC_afun0;
extern AFun PLOC_afun11;
extern AFun PLOC_afun5;
extern AFun PLOC_afun27;
extern AFun PLOC_afun16;
extern AFun PLOC_afun10;
extern AFun PLOC_afun13;
extern AFun PLOC_afun4;
extern AFun PLOC_afun14;
extern AFun PLOC_afun23;
extern AFun PLOC_afun7;
extern AFun PLOC_afun24;
extern AFun PLOC_afun29;
extern AFun PLOC_afun1;
extern AFun PLOC_afun6;

extern ATerm PLOC_patternOptLayoutPresent;
extern ATerm PLOC_patternOptLayoutAbsent;
extern ATerm PLOC_patternStartStrCon;
extern ATerm PLOC_patternStartNormal;
extern ATerm PLOC_patternStartEscaped;
extern ATerm PLOC_patternStartNatCon;
extern ATerm PLOC_patternStartLocation;
extern ATerm PLOC_patternStartArea;
extern ATerm PLOC_patternAreaArea;
extern ATerm PLOC_patternLocationAreaInFile;
extern ATerm PLOC_patternLocationFile;
extern ATerm PLOC_patternNatConDefault;
extern ATerm PLOC_patternStrConDefault;
extern ATerm PLOC_patternEscapedOctal;
extern ATerm PLOC_patternEscapedSpecialCharacter;
extern ATerm PLOC_patternNormalDefault;

extern void init_ParsedLocation_dict();

#endif /* __ParsedLocation_dict_H */
