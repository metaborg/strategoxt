#include <stdlib.h>
#include <srts/stratego.h>
#include "file-table.h"

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
  else if((file = _SSL_file_table_lookup(name)) != NULL) {
    ATtableRemove(SSL_file_table, name);
    fclose(file);
  }
  else
    _fail(name);

  return(name);
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


