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
 * Converts the only real FILE* representation in an ATerm
 * to a FILE*. Doesn't try to be clever or helpful with handling
 * other representations.
 */
FILE* stream_from_term_strict(ATerm term) {
  FILE* result = NULL;

  if(ATisBlob(term)) {
    if(ATgetBlobSize((ATermBlob) term) != sizeof(FILE*)) {
      _fail(term);
    } else {
      result = (FILE*) ATgetBlobData((ATermBlob) term);
    }
  } else {
    _fail(term);
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
    return stream_from_term_strict(stream);
  } else {
    return stream_from_term_transitional(stream);
  }
}

/**
 * Converts a FILE* the a representation in an ATerm.
 */
ATerm stream_to_term(FILE* stream) {
  return (ATerm) ATmakeInt((int)stream) ; // ATmakeBlob(sizeof(FILE*),stream);
}



