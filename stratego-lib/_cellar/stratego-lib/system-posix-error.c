#include <srts/stratego.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "stratego-lib-common.h"

ATerm SSL_get_errno(void) {
  return ((ATerm) ATmakeInt(errno));
}

ATerm SSL_perror(ATerm msg) {
  if(ATisString(msg)) {
    const char* s = AT_getString(msg);
    perror(s);
  } else {
    perror(NULL);
  }

  return msg;
}

ATerm SSL_strerror(ATerm errnum) {
  int val = _get_int(errnum);
  char* result = strerror(val);
  return (ATerm) ATmakeString(result);
}

/**
 * @TODO Strictly speaking this function should not be available in C99 mode.
 * if EXDEV is not defined, this will be a run-time error.
 */
ATerm SSL_EXDEV(void) {
#ifdef EXDEV
  return ((ATerm) ATmakeInt(EXDEV));
#else
  fprintf(stderr, "error: error number EXDEV is not available on this system.");
  return NULL;
#endif
}

