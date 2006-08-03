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

ATerm SSL_EXDEV(void) {
  return ((ATerm) ATmakeInt(EXDEV));
}


