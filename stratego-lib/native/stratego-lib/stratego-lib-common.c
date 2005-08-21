#include <srts/stratego.h>
#include <stdio.h>

/**
 * Old FILE* representations
 * bootstrap problem
 */
FILE* stream_from_term_transitional(ATerm stream) {
  FILE* result = NULL;

         if(ATmatch(stream, "stdout")) { // stdout
    result = stdout;
  } else if(ATmatch(stream, "stderr")) { // stderr
    result = stderr;
  } else if(ATmatch(stream, "stdin")) { // stdin
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
  FILE* result;

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
    // ATfprintf(stderr, "** Warning -- using deprecated stream representation: %t .\n", stream);
    return stream_from_term_transitional(stream);
  }
}



/**
 * Converts a FILE* the a representation in an ATerm.
 */
ATerm stream_to_term(FILE* stream) {
  return (ATerm) ATmakeInt((int)stream) ; // ATmakeBlob(sizeof(FILE*),stream);
}



