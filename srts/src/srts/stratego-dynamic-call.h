
#ifndef SRTS_STRATEGO_DYNAMIC_CALL_H
#define SRTS_STRATEGO_DYNAMIC_CALL_H

typedef ATerm (*str_p)();

ATermTable strategy_table ;

void SRTS_register_function(ATerm, str_p);
str_p SRTS_lookup_function(ATerm name);

#endif
