/*

Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

#include <stdlib.h>
#include <stratego.h>

/* IO */

ATermTable SSL_file_table = NULL;

void SSL_file_table_init(void)
{
  SSL_file_table = ATtableCreate(16, 80);
  ATtablePut(SSL_file_table, ATmake("stdin"),  ATmake("<int>", (int)stdin));
  ATtablePut(SSL_file_table, ATmake("stdout"), ATmake("<int>", (int)stdout));
  ATtablePut(SSL_file_table, ATmake("stderr"), ATmake("<int>", (int)stderr));
}

ATerm SSL_file_exists(ATerm t)
{
  char *name;
  FILE *file;
  name = t_string(t);

  if((file = fopen(name, "r")) == NULL)
    _fail(t);
  else
    { 
      fclose(file);
      return(t);
    }
  return(t);
}

ATerm SSL_open_file(ATerm name, ATerm mode)
{
  FILE *file;

  if(SSL_file_table == NULL)
    SSL_file_table_init();

  if(ATmatch(name, "stdout"))
    file = stdout;
  else if(ATmatch(name, "stderr"))
    file = stderr;
  else if(ATmatch(name, "stdin"))
    file = stdin;
  else if(t_is_string(name) && t_is_string(mode))
    {
      file = fopen(t_string(name), t_string(mode));
      if(file == NULL)
	_fail(name);
      ATtablePut(SSL_file_table, name, ATmake("<int>", (int)file));      
    }
  return(name);
}

// obsolete: use SSL_open_file(name, "a")

ATerm SSL_append_file(ATerm name)
{
  FILE *file;

  if(SSL_file_table == NULL)
    SSL_file_table_init();
  
  if(ATmatch(name, "stdout"))
    file = stdout;
  else if(ATmatch(name, "stderr"))
    file = stderr;
  else if(ATmatch(name, "stdin"))
    file = stdin;
  else if(t_is_string(name))
    {
      file = fopen(t_string(name), "a");
      if(file == NULL)
	_fail(name);
      ATtablePut(SSL_file_table, name, ATmake("<int>", (int)file));      
    }
  return(name);
}

FILE *_SSL_file_table_lookup(ATerm name)
{
  ATerm desc;

  /* ATfprintf(stderr, "_SSL_file_table_lookup(%t)\n", name); */

  if(SSL_file_table == NULL)
    SSL_file_table_init();
  
  if((desc = ATtableGet(SSL_file_table, name)) == NULL)
    return NULL;
  else
    return (FILE *)ATgetInt((ATermInt)desc);
}

ATerm SSL_close_file(ATerm name)
{
  FILE *file;

  if(SSL_file_table == NULL)
    SSL_file_table_init();
  
  if(ATmatch(name, "stdout"))
    fclose(stdout);
  else if(ATmatch(name, "stderr"))
    fclose(stderr);
  else if(ATmatch(name, "stdin"))
    fclose(stdin);
  else if((file = _SSL_file_table_lookup(name)) != NULL)
    fclose(file);
  else
    _fail(name);

  return(name);
}

ATerm SSL_print(ATerm file, ATerm str)
{  
  FILE *outfile;

  outfile = _SSL_file_table_lookup(file);
  if(outfile == NULL) 
    _fail(file);
  str = consnil_to_list(str);
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

  outfile = _SSL_file_table_lookup(file);
  if(outfile == NULL) {
    ATfprintf(stderr, "printnl: could not open file: %t\n", file);
    _fail(file);
  }
  str = consnil_to_list(str);
  if(!(ATgetType(str) == AT_LIST)) {
    ATfprintf(stderr, "ST_printnl: argument not a list: %t\n", str);
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

ATerm SSL_printascii(ATerm file, ATerm str)
{   
  FILE *outfile;

  /* ATfprintf(stderr, "SSL_printascii(): top = %t\n", Ttop()); */

  outfile = _SSL_file_table_lookup(file);
  if(outfile == NULL) 
    _fail(file);
  str = consnil_to_list(str);
  while(!ATisEmpty((ATermList)str))
    {
      if(ATisInt(ATgetFirst((ATermList)str)))
	ATfprintf(outfile, "%c", 
		  ATgetInt((ATermInt)ATgetFirst((ATermList)str)));
      else
	ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
      str = (ATerm)ATgetNext((ATermList)str);
    }
  /* ATfprintf(outfile, "\n"); */
  return(str);
}

ATerm SSL_ReadFromFile(ATerm filename)
{
  ATerm in_term;
  FILE *infile;

  if(ATmatch(filename, "stdin"))
    infile = stdin;
  else if(ATisString(filename))
    infile = fopen(t_string(filename), "r");
  else
    _fail(filename);

  if(infile == NULL)
    _fail(filename);

  if((in_term = ATreadFromFile(infile)) == NULL)
    {
      ATfprintf(stderr, "not a valid term\n");
      _fail(filename);
    }

  fclose(infile);

  /* ATfprintf(stderr, "in_term = %t\n", in_term); */
  
  return(list_to_consnil(in_term));
}

ATerm SSL_WriteToFile(ATbool binary, ATerm filename, ATerm trm)
{  
  FILE *outfile;

  if(ATmatch(filename, "stdout"))
    outfile = stdout;
  else if(ATmatch(filename, "stderr"))
    outfile = stderr;
  else if(ATisString(filename))
    outfile = fopen(t_string(filename), "w");
  else 
    _fail(filename);

  if(outfile != NULL)
    {
      if(binary)
	ATwriteToBinaryFile(consnil_to_list(trm), outfile);
      else 
	{
	  ATwriteToTextFile(consnil_to_list(trm), outfile);
	  fprintf(outfile, "\n");
	}
      fclose(outfile);
    }
  return trm;
}

ATerm SSL_WriteToBinaryFile(ATerm file, ATerm t)
{
  return SSL_WriteToFile(ATtrue, file, t);
}


ATerm SSL_WriteToTextFile(ATerm file, ATerm t)
{
  return SSL_WriteToFile(ATfalse, file, t);
}

ATerm SSL_getchar(ATerm filename)
{
  ATerm in_term;
  FILE *infile;

  if((infile = _SSL_file_table_lookup(filename)) == NULL)
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
	return ATmakeInt(c);
    }
  return NULL;
}

