#include <srts/stratego.h>
#include "stratego-lib-common.h"

ATerm SSL_get_list_length(ATerm term)
{
  ATermList list = NULL;
  ATerm result = NULL;

  if(!ATisList(term)) {
    _fail(term);
  }

  list = (ATermList) term;
  result = (ATerm) ATmakeInt(ATgetLength(term));
  return result;
}
