#ifndef __Location_dict_H
#define __Location_dict_H

#include <aterm2.h>

extern AFun LOC_afun4;
extern AFun LOC_afun0;
extern AFun LOC_afun2;
extern AFun LOC_afun3;
extern AFun LOC_afun1;

extern ATerm LOC_patternAreaAreasMany;
extern ATerm LOC_patternAreaAreasSingle;
extern ATerm LOC_patternAreaAreasEmpty;
extern ATerm LOC_patternSliceSlice;
extern ATerm LOC_patternAreaArea;
extern ATerm LOC_patternLocationAreaInFile;
extern ATerm LOC_patternLocationArea;
extern ATerm LOC_patternLocationFile;
extern ATerm LOC_patternNatConNatCon;
extern ATerm LOC_patternStrConStrCon;
extern ATerm LOC_patternStrCharStrChar;

extern void init_Location_dict();

#endif /* __Location_dict_H */
