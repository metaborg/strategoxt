#include <stdlib.h>
#include <srts/stratego.h>

ATermTable SSL_file_table = NULL;

void SSL_file_table_init(void)
{
  SSL_file_table = ATtableCreate(16, 80);
  ATtablePut(SSL_file_table, ATmake("stdin"),  ATmake("<int>", (int)stdin));
  ATtablePut(SSL_file_table, ATmake("stdout"), ATmake("<int>", (int)stdout));
  ATtablePut(SSL_file_table, ATmake("stderr"), ATmake("<int>", (int)stderr));
}


FILE *_SSL_file_table_lookup(ATerm name)
{
  ATerm desc;

  // ATfprintf(stderr, "_SSL_file_table_lookup(%t)\n", name);

  if(SSL_file_table == NULL)
    SSL_file_table_init();
  
  if((desc = ATtableGet(SSL_file_table, name)) == NULL)
    return NULL;
  else
    return (FILE *)ATgetInt((ATermInt)desc);
}


