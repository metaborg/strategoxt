
#ifndef SRTS_STRATEGO_DYNAMIC_CALL_H
#define SRTS_STRATEGO_DYNAMIC_CALL_H

extern ATermTable strategy_table ;

void SRTS_register_function(ATerm name, StrCL closure);
StrCL SRTS_lookup_function(ATerm name);

ATerm SRTS_dyn(StrCL cl, unsigned int ns, unsigned int nt);
StrCL SRTS_call(ATerm s, unsigned int ns, unsigned int nt);

#endif
