#include <stdlib.h>
#include <srts/stratego.h>

#include "stratego-lib-common.h"
#include "file-table.h"

/**
 * ATerm IO on streams
 */
ATerm SSL_write_term_to_stream_baf(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
	ATwriteToBinaryFile(term, stream);
  return stream_term;
}

ATerm SSL_write_term_to_stream_taf(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
	ATwriteToSharedTextFile(term, stream);
  return stream_term;
}

ATerm SSL_write_term_to_stream_text(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
  ATwriteToTextFile(term, stream);
  return stream_term;
}

ATerm SSL_read_term_from_stream(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  ATerm result = ATreadFromFile(stream);

  if(result == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    _fail(stream_term);
  }

  return result;
}

ATerm SSL_read_term_from_string(ATerm str_term) {
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

ATerm SSL_print(ATerm file, ATerm str)
{  
  FILE *outfile;

  if(ATisInt(file))
    outfile = (FILE *)AT_getInt(file);
  else
    outfile = _SSL_file_table_lookup(file);
  if(outfile == NULL) 
    _fail(file);
  //str = consnil_to_list(str);
  if(ATgetType(str) != AT_LIST)
    _fail(str);
  while(!ATisEmpty((ATermList)str))
    {
      if(ATisString(ATgetFirst((ATermList)str)))
	ATfprintf(outfile, "%s", t_string(ATgetFirst((ATermList)str)));
      else if(ATisReal(ATgetFirst((ATermList)str)))
	ATfprintf(outfile, "%.2f", ATgetReal((ATermReal)ATgetFirst((ATermList)str)));
      else
	ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
      str = (ATerm)ATgetNext((ATermList)str);
    }
  return(str);
}

ATerm SSL_printnl(ATerm file, ATerm str)
{  
  FILE *outfile;

  // ATfprintf(stderr, "SSL_printnl(%t, %t)\n", file, str);
  if(ATisInt(file))
    outfile = (FILE *)AT_getInt(file);
  else
    outfile = _SSL_file_table_lookup(file);

  if(outfile == NULL) {
    ATfprintf(stderr, "printnl: could not open file: %t\n", file);
    _fail(file);
  }
  if(!(ATgetType(str) == AT_LIST)) {
    ATfprintf(stderr, "SSL_printnl: argument not a list: %t\n", str);
    _fail(str);
  }
  while(!ATisEmpty((ATermList)str))
    {
      if(ATisString(ATgetFirst((ATermList)str)))
	ATfprintf(outfile, "%s", t_string(ATgetFirst((ATermList)str)));
      else if(ATisReal(ATgetFirst((ATermList)str)))
	ATfprintf(outfile, "%.2f", ATgetReal((ATermReal)ATgetFirst((ATermList)str)));
      else
	ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
      str = (ATerm)ATgetNext((ATermList)str);
    }
  ATfprintf(outfile, "\n");
  return(str);
}


