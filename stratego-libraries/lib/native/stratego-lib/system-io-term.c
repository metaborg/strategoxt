#include <stdlib.h>
#include <srts/stratego.h>

#include "stratego-lib-common.h"

/**
 * ATerm IO on streams
 */
ATerm SSL_write_term_to_stream_baf(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  ATwriteToBinaryFile(term, stream);
  return stream_term;
}

ATerm SSL_write_term_to_stream_taf(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  ATwriteToSharedTextFile(term, stream);
  return stream_term;
}

ATerm SSL_write_term_to_stream_text(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  ATwriteToTextFile(term, stream);
  return stream_term;
}

ATerm SSL_read_term_from_stream(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  ATerm result = ATreadFromFile(stream);

  if(result == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    _fail(stream_term);
  }

  return result;
}

ATerm SSL_read_term_from_string(ATerm str_term) {
  if(!ATisString(str_term)) return NULL;
  const char* str = AT_getString(str_term);
  ATerm result = ATreadFromString(str);

  if(result == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    _fail(str_term);
  }

  return result;
}

ATerm SSL_write_term_to_string(ATerm term) {
  ATerm result_term;

  /* result points to some internal buffer of the ATerm lib */
  char* result = ATwriteToString(term);

  if(result == NULL) {
    perror("SRTS/write_term_to_string");
    _fail(term);
  }

  result_term = ATmakeString(result);
  return result_term;
}

ATerm SSL_write_term_to_binary_string(ATerm term) {
  int i;
  int length;
  char* result = ATwriteToBinaryString(term, &length);
  ATermList result_term = ATmakeList0();;

  if(result == NULL) {
    perror("SRTS/write_term_to_binary_string");
    _fail(term);
  }

  for(i = length - 1; i >= 0; i--) {
    ATerm next = (ATerm) ATmakeInt(result[i]);
    result_term = ATinsert(result_term, next);
  }

  return (ATerm) result_term;
}

ATerm SSL_write_term_to_shared_string(ATerm term) {
  int i;
  int length;
  char* result = ATwriteToSharedString(term, &length);
  ATermList result_term = ATmakeList0();;

  if(result == NULL) {
    perror("SRTS/write_term_to_shared_string");
    _fail(term);
  }

  for(i = length - 1; i >= 0; i--) {
    ATerm next = (ATerm) ATmakeInt(result[i]);
    result_term = ATinsert(result_term, next);
  }

  return (ATerm) result_term;
}
