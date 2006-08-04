#include "srts/stratego.h"

ATermTable strategy_table ;

void SRTS_register_function(ATerm name, StrCL fcn) {
  ATtablePut(strategy_table, name, (ATerm) ATmakeBlob(sizeof fcn, fcn));
  SRTS_lookup_function(name);
}

StrCL SRTS_lookup_function(ATerm name) {
  ATerm res = ATtableGet(strategy_table,name);

  if(res == NULL) {
    _fail(name);
  }

  return (StrCL) ATgetBlobData((ATermBlob) res);
}
