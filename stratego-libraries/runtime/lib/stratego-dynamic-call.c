#include "srts/stratego.h"

ATermTable strategy_table ;

void SRTS_register_function(ATerm name, str_p fcn) {
        ATtablePut(
          strategy_table
        , name 
        , (ATerm) ATmakeBlob(sizeof fcn,fcn)
        );

	SRTS_lookup_function(name) ;
}

str_p SRTS_lookup_function(ATerm name) {
        ATerm res = ATtableGet(strategy_table,name);

	/* ATprintf("lookup %t in %t\n",name,(ATerm) ATtableKeys(strategy_table)); */

        if(res == NULL) {
                _fail(name);
        }
        return (str_p) ATgetBlobData((ATermBlob) res) ; 
}

