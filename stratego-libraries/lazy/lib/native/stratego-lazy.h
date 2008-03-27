#ifndef STRATEGO_LAZY_H_
# define STRATEGO_LAZY_H_

# include <srts/stratego.h>

ATerm LAZY_scope(StrCL cl, ATerm t);
ATerm LAZY_new_value(void);
ATerm LAZY_bind_value(StrCL s, ATerm ncl, ATerm nt, ATerm lz_value, ATerm t);

ATerm LAZY_call(StrCL getv, ...);

#endif /* !STRATEGO_LAZY_H_ */
