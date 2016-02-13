#ifndef MEPT_SYMBOLS
#define MEPT_SYMBOLS
#include <MEPT.h>

ATbool PT_isIterSepSymbol(PT_Symbol sym);
ATbool PT_isIterSymbol(PT_Symbol sym);
ATbool PT_isOptLayoutSymbol(PT_Symbol arg);

PT_Symbol PT_makeOptLayoutSymbol();
PT_Symbol makeSymbolAllChars();
PT_Symbol PT_getIterSepSeparator(PT_Symbol symbol);
#endif
