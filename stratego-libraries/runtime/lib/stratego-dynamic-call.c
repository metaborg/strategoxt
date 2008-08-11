#include "srts/stratego.h"

ATermTable strategy_table = NULL;

void SRTS_register_function(ATerm name, StrCL cl) {
  StrCL cl_table = SRTS_lookup_function(name);
  struct str_funlink funlink;
  StrFL fl_table;
  StrFL fl;

  assert(strategy_table != NULL);
  assert(cl->fl != NULL);
  assert(cl->fl->next == NULL);

  if(cl_table) {
    // insert function (sorted by address to forbid duplicated !)
    fl = cl->fl;
    funlink.next = cl_table->fl;
    fl_table = &funlink;
    while(fl_table->next && fl_table->next->fun <= fl->fun)
      fl_table = fl_table->next;
    if(!fl_table->next || fl_table->fun != fl->fun) {
      fl->next = fl_table->next;
      fl_table->next = fl;
      //ATfprintf(stderr, "Extend function %t\n", name);
    }
    cl_table->fl = funlink.next;
  }
  else {
    //ATfprintf(stderr, "Register function %t\n", name);
    ATtablePut(strategy_table, name, (ATerm) ATmakeBlob(sizeof cl, cl));
  }
}

StrCL SRTS_lookup_function(ATerm name) {
  ATerm res = ATtableGet(strategy_table,name);

  if(res == NULL) {
    return NULL;
  }

  return (StrCL) ATgetBlobData((ATermBlob) res);
}
