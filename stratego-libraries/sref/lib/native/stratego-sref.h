#ifndef STRATEGO_SREF_H_
# define STRATEGO_SREF_H_

# include <srts/stratego.h>

ATerm SREF_deref (ATerm r);
ATerm SREF_bind (ATerm val, ATerm r);
ATerm SREF_create (void);
ATerm SREF_destroy (ATerm r);

#endif /* !STRATEGO_SREF_H_ */
