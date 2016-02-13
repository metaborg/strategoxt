#ifndef __Error_dict_H
#define __Error_dict_H

#include <aterm2.h>

extern AFun ERR_afun8;
extern AFun ERR_afun4;
extern AFun ERR_afun0;
extern AFun ERR_afun2;
extern AFun ERR_afun11;
extern AFun ERR_afun7;
extern AFun ERR_afun5;
extern AFun ERR_afun3;
extern AFun ERR_afun9;
extern AFun ERR_afun10;
extern AFun ERR_afun1;
extern AFun ERR_afun6;

extern ATerm ERR_patternAreaAreasMany;
extern ATerm ERR_patternAreaAreasSingle;
extern ATerm ERR_patternAreaAreasEmpty;
extern ATerm ERR_patternSliceSlice;
extern ATerm ERR_patternAreaArea;
extern ATerm ERR_patternLocationAreaInFile;
extern ATerm ERR_patternLocationArea;
extern ATerm ERR_patternLocationFile;
extern ATerm ERR_patternErrorListMany;
extern ATerm ERR_patternErrorListSingle;
extern ATerm ERR_patternErrorListEmpty;
extern ATerm ERR_patternSubjectListMany;
extern ATerm ERR_patternSubjectListSingle;
extern ATerm ERR_patternSubjectListEmpty;
extern ATerm ERR_patternSummarySummary;
extern ATerm ERR_patternErrorFatal;
extern ATerm ERR_patternErrorError;
extern ATerm ERR_patternErrorWarning;
extern ATerm ERR_patternErrorInfo;
extern ATerm ERR_patternSubjectLocalized;
extern ATerm ERR_patternSubjectSubject;
extern ATerm ERR_patternNatConNatCon;
extern ATerm ERR_patternStrConStrCon;
extern ATerm ERR_patternStrCharStrChar;

extern void init_Error_dict();

#endif /* __Error_dict_H */
