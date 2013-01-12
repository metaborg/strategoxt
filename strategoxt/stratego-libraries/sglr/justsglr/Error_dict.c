#include "Error_dict.h"

AFun ERR_afun8;
AFun ERR_afun4;
AFun ERR_afun0;
AFun ERR_afun2;
AFun ERR_afun11;
AFun ERR_afun7;
AFun ERR_afun5;
AFun ERR_afun3;
AFun ERR_afun9;
AFun ERR_afun10;
AFun ERR_afun1;
AFun ERR_afun6;

ATerm ERR_patternAreaAreasMany = NULL;
ATerm ERR_patternAreaAreasSingle = NULL;
ATerm ERR_patternAreaAreasEmpty = NULL;
ATerm ERR_patternSliceSlice = NULL;
ATerm ERR_patternAreaArea = NULL;
ATerm ERR_patternLocationAreaInFile = NULL;
ATerm ERR_patternLocationArea = NULL;
ATerm ERR_patternLocationFile = NULL;
ATerm ERR_patternErrorListMany = NULL;
ATerm ERR_patternErrorListSingle = NULL;
ATerm ERR_patternErrorListEmpty = NULL;
ATerm ERR_patternSubjectListMany = NULL;
ATerm ERR_patternSubjectListSingle = NULL;
ATerm ERR_patternSubjectListEmpty = NULL;
ATerm ERR_patternSummarySummary = NULL;
ATerm ERR_patternErrorFatal = NULL;
ATerm ERR_patternErrorError = NULL;
ATerm ERR_patternErrorWarning = NULL;
ATerm ERR_patternErrorInfo = NULL;
ATerm ERR_patternSubjectLocalized = NULL;
ATerm ERR_patternSubjectSubject = NULL;
ATerm ERR_patternNatConNatCon = NULL;
ATerm ERR_patternStrConStrCon = NULL;
ATerm ERR_patternStrCharStrChar = NULL;

/*
 * ERR_afun8 = area(x)
 * ERR_afun4 = error(x,x)
 * ERR_afun0 = subject(x)
 * ERR_afun2 = info(x,x)
 * ERR_afun11 = slice(x,x)
 * ERR_afun7 = file(x)
 * ERR_afun5 = fatal(x,x)
 * ERR_afun3 = warning(x,x)
 * ERR_afun9 = area-in-file(x,x)
 * ERR_afun10 = area(x,x,x,x,x,x)
 * ERR_afun1 = localized(x,x)
 * ERR_afun6 = summary(x,x,x)
 *
 * ERR_patternAreaAreasMany = [<term>,<list>]
 * ERR_patternAreaAreasSingle = [<term>]
 * ERR_patternAreaAreasEmpty = []
 * ERR_patternSliceSlice = slice(<str>,<term>)
 * ERR_patternAreaArea = area(<int>,<int>,<int>,<int>,<int>,<int>)
 * ERR_patternLocationAreaInFile = area-in-file(<str>,<term>)
 * ERR_patternLocationArea = area(<term>)
 * ERR_patternLocationFile = file(<str>)
 * ERR_patternErrorListMany = [<term>,<list>]
 * ERR_patternErrorListSingle = [<term>]
 * ERR_patternErrorListEmpty = []
 * ERR_patternSubjectListMany = [<term>,<list>]
 * ERR_patternSubjectListSingle = [<term>]
 * ERR_patternSubjectListEmpty = []
 * ERR_patternSummarySummary = summary(<str>,<str>,<term>)
 * ERR_patternErrorFatal = fatal(<str>,<term>)
 * ERR_patternErrorError = error(<str>,<term>)
 * ERR_patternErrorWarning = warning(<str>,<term>)
 * ERR_patternErrorInfo = info(<str>,<term>)
 * ERR_patternSubjectLocalized = localized(<str>,<term>)
 * ERR_patternSubjectSubject = subject(<str>)
 * ERR_patternNatConNatCon = <str>
 * ERR_patternStrConStrCon = <str>
 * ERR_patternStrCharStrChar = <str>
 *
 */

static ATerm _Error_dict = NULL;

#define _Error_dict_LEN 385

static char _Error_dict_baf[_Error_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x14,0x4B,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x04,0x04,0x03,
0x04,0x05,0x06,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x29,0x0F,0x01,0x02,0x00,
0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x02,0x01,0x02,0x02,
0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,0x6E,0x74,0x00,0x00,0x01,0x03,0x73,0x74,0x72,
0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,
0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x04,0x61,0x72,0x65,0x61,0x01,0x00,0x02,
0x02,0x00,0x07,0x05,0x65,0x72,0x72,0x6F,0x72,0x02,0x00,0x02,0x02,0x00,0x07,0x02,
0x00,0x07,0x07,0x73,0x75,0x62,0x6A,0x65,0x63,0x74,0x01,0x00,0x02,0x02,0x00,0x07,
0x04,0x69,0x6E,0x66,0x6F,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x05,0x73,
0x6C,0x69,0x63,0x65,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x04,0x66,0x69,
0x6C,0x65,0x01,0x00,0x02,0x02,0x00,0x07,0x05,0x66,0x61,0x74,0x61,0x6C,0x02,0x00,
0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x07,0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x02,
0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x0C,0x61,0x72,0x65,0x61,0x2D,0x69,0x6E,
0x2D,0x66,0x69,0x6C,0x65,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x04,0x61,
0x72,0x65,0x61,0x06,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x02,
0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x09,0x6C,0x6F,0x63,0x61,0x6C,0x69,0x7A,
0x65,0x64,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x07,0x73,0x75,0x6D,0x6D,
0x61,0x72,0x79,0x03,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x01,
0x0D,0x30,0x85,0x08,0xA2,0x4A,0x20,0x46,0x28,0xE3,0x8A,0x18,0x12,0x28,0x92,0x82,
0x14,0xA3,0x0D,0x28,0x40,0xCA,0xAA,0x20,0xB2,0x80,0x1C,0xAA,0x39,0x06,0x42,0xC4,
0x18,0x31,0x22,0x8A,0x41,0xC4,0x10,0x4C,0x18,0xF4,0x28,0x01,0x13,0x8C,0x0C,0x63,
0x18,0xC4,0x3B,0x08,0x00,0x39,0x00,0xF8,0x61,0x0F,0x05,0x85,0xC0,0xE0,0x74,0x1B,
0x05,0x82,0xC0,0xE1,0x34,0x03,0x3C,0x21,0x00,0xEA,0x61,0x00,0x68,0xA1,0x00,0xA9,
0x61,0x00,0x29,0xA1,0x00,0xCA,0xE1,0x00,0x4A,0xA1,0x11,0x22,0x02,0x44,0x78,0x8A,
0x80
};

void init_Error_dict()
{
  ATermList afuns, terms;

  _Error_dict = ATreadFromBinaryString(_Error_dict_baf, _Error_dict_LEN);

  ATprotect(&_Error_dict);

  afuns = (ATermList)ATelementAt((ATermList)_Error_dict, 0);

  ERR_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ERR_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_Error_dict, 1);

  ERR_patternAreaAreasMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternAreaAreasSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternAreaAreasEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSliceSlice = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternAreaArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternLocationAreaInFile = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternLocationArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternLocationFile = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSubjectListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSubjectListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSubjectListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSummarySummary = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorFatal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorWarning = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternErrorInfo = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSubjectLocalized = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternSubjectSubject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternNatConNatCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternStrConStrCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ERR_patternStrCharStrChar = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
