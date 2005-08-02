#include <stdlib.h>
#include <srts/stratego.h>
#include "file-table.h"

ATerm SSL_printascii(ATerm file, ATerm str)
{   
  FILE *outfile;

  // ATfprintf(stderr, "SSL_printascii(): top = %t\n", Ttop());

  if(ATisInt(file))
    outfile = (FILE *)AT_getInt(file);
  else
    outfile = _SSL_file_table_lookup(file);
  if(outfile == NULL) 
    _fail(file);
  while(!ATisEmpty((ATermList)str))
    {
      if(ATisInt(ATgetFirst((ATermList)str)))
	ATfprintf(outfile, "%c", 
		  ATgetInt((ATermInt)ATgetFirst((ATermList)str)));
      else
	ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
      str = (ATerm)ATgetNext((ATermList)str);
    }
  // ATfprintf(outfile, "\n");
  return(str);
}

ATerm SSL_getchar(ATerm filename)
{
  FILE *infile;

  if(ATisInt(filename))
    infile = (FILE *)AT_getInt(filename);
  else if((infile = _SSL_file_table_lookup(filename)) == NULL)
    {
      ATfprintf(stderr, "file %t not open\n", filename);
      _fail(filename);
    }
  else
    {
      int c;
      c = fgetc(infile);
      if(c == EOF)
	_fail(filename);
      else
	return (ATerm) ATmakeInt(c);
    }
  return NULL;
}

