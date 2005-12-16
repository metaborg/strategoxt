#include <srts/stratego.h>
#include <stdio.h>

/**
 * Initialization
 */
static ATerm stdin_term  = NULL;
static ATerm stdout_term = NULL;
static ATerm stderr_term = NULL;

static void (* SSL_initialize_next)(void) = NULL;

static void SSL_initialize()
{
  AFun fun;

  fun = ATmakeAFun("stdin", 0, ATfalse);
  stdin_term = (ATerm) ATmakeAppl(fun);

  fun = ATmakeAFun("stdout", 0, ATfalse);
  stdout_term = (ATerm) ATmakeAppl(fun);

  fun = ATmakeAFun("stderr", 0, ATfalse);
  stderr_term = (ATerm) ATmakeAppl(fun);

  ATprotect(&stdin_term);
  ATprotect(&stdout_term);
  ATprotect(&stderr_term);

  if(SSL_initialize_next != NULL)
    SSL_initialize_next();
}

static void register_init(void) __attribute__((constructor));
static void register_init(void)
{
  SSL_initialize_next  = SRTS_stratego_initialize;
  SRTS_stratego_initialize = &SSL_initialize;
}

ATerm AT_pointer_to_term(void* pointer) {
  return (ATerm) ATmakeBlob(0, pointer);
}

void* AT_term_to_pointer(ATerm term) {
  void* pointer = NULL;

  if(ATisBlob(term)) {
    if(ATgetBlobSize((ATermBlob) term) != 0) {
      return NULL;
    } else {
      pointer = ATgetBlobData((ATermBlob) term);
    }
  } else {
    return NULL;
  }

  return pointer;
}

/**
 * Old FILE* representations
 * bootstrap problem
 */
FILE* stream_from_term_transitional(ATerm stream) {
  FILE* result = NULL;

  if(stream == stdout_term) {
    result = stdout;
  } else if(stream == stderr_term) {
    result = stderr;
  } else if(stream == stdin_term) {
    result = stdin;
  } else if(ATisInt(stream)) { // file pointer
    result = (FILE*) ATgetInt((ATermInt)stream);
  } else { // not a stream
    _fail(stream);
  }

  return result;
}

/**
 * Returns a FILE* for a given ATerm
 *
 * It handles all possible representations of streams in Stratego.
 */
FILE* stream_from_term(ATerm stream) {
  if(ATisBlob(stream)) {
    return (FILE*) AT_term_to_pointer(stream);
  } else {
    return stream_from_term_transitional(stream);
  }
}

/**
 * Converts a FILE* the a representation in an ATerm.
 */
ATerm stream_to_term(FILE* stream) {
  return AT_pointer_to_term((void*) stream);
}

