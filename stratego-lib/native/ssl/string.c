/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA

*/

#include <srts/stratego.h>
#include <stdlib.h>
#include <ctype.h>

/* Strings */

ATerm SSL_is_string(ATerm t) { 
  if(ATisString(t)) {
    return t; 
  }

  _fail(t);
}

/* New: generating new strings */

int new_counter = 0;
int new_alphacounter = 0;
char new_string[256] = "";
#define ASCIIa 97

ATerm SSL_new(void)
{
  sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  while(AT_findSymbol(new_string, 0, ATtrue)) {
    new_alphacounter++;
    if(new_alphacounter % 26 == 0) {
      new_alphacounter = 0; 
      new_counter++;
    }
    sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  }
  return((ATerm) ATmakeAppl0(ATmakeSymbol(new_string, 0, ATtrue)));
}

/**
 * newname: generate new strings
 * prefix is user-definable prefix (instead of changing alpha_counter
 * in SSL_new)
 * Any trailing digits are trimmed off, if they are preceded by '_':
 * "a" => "a"
 * "a_23" => "a"
 * "a_" => "a"
 * "a_b" => "a_b"
 * "a_12_34" => "a_12"
 */

ATermTable SSL_newname_table = NULL;
char newname_string[256] = "";

ATerm SSL_newname(ATerm prefix)
{
  int newname_counter;
  char* prefix_string;
  char* prefix_base;
  char* last_delim;
  ATerm count_key;
  ATerm last_value;

  if(SSL_newname_table == NULL)
    SSL_newname_table = ATtableCreate(15, 80);

  prefix_string = ATgetName(ATgetSymbol(prefix));

  /* Now try to trim off a trailing counter part, if applicable */
  last_delim = strrchr(prefix_string, '_');

  if (last_delim != NULL) {
    int n = last_delim - prefix_string;
     /* Check all chars after last '_' */
    while (1) {
      last_delim++;
      if (*last_delim == '\0') {
        /* All trailing chars checked, now use trimmed prefix as base */
        prefix_base = (char*)malloc((n + 1) * sizeof(char));
        strncpy(prefix_base, prefix_string, n);
        break;
      } else if(!isdigit(*last_delim)) {
        /* Invalid char, do not trim at all */
        prefix_base = prefix_string;
        break;
      }
    }
  } else {
    prefix_base = prefix_string;
  }
  /* The proper base prefix is now known for looking up counter. */
  count_key = (ATerm) ATmakeString(prefix_base);
  last_value = ATtableGet(SSL_newname_table, count_key);

  if(last_value != NULL) {
    newname_counter = ATgetInt((ATermInt)last_value);
  } else {
    newname_counter = -1;
  }

  newname_counter++;
  sprintf(newname_string, "%s_%d", prefix_base, newname_counter);

  while(AT_findSymbol(newname_string, 0, ATtrue)) {
    newname_counter++;
    sprintf(newname_string, "%s_%d", prefix_base, newname_counter);
  }

  ATtablePut(SSL_newname_table, count_key, (ATerm)ATmakeInt(newname_counter));
  return((ATerm) ATmakeAppl0(ATmakeSymbol(newname_string, 0, ATtrue)));
}

ATerm SSL_implode_string(ATerm chars)
{ 
  int i;
  
  /* Initial buffer size */
  static int size = 1024;
  static char* str = NULL;

  ATerm t;

  if(!ATisList(chars)) {
    _fail(chars);
  }

  // ATfprintf(stderr, "SSL_implode_string(%t)\n");

  /* Allocate initial buffer */
  if( str == NULL )
  {
     str = (char*)malloc( size ); 
     assert( str != NULL );
  }

  /* ATfprintf(stderr, "chars = %t\n", chars); */
  for(i = 0; (ATermList) chars != ATempty; 
      chars = (ATerm) ATgetNext((ATermList) chars), i++)
    {
    
     /* more room needed to store imploded string */
     if( i + 1 >= size )
     {
        /* double the allocated buffer */
        size *= 2;
        str = (char*)realloc( str, size );
        assert( str != NULL );
     }
     
      t = ATgetFirst((ATermList) chars);
      /* ATfprintf(stderr, "t = %t\n", t); */
      if(!ATisInt(t))
	_fail(chars);
      else
	str[i] = ATgetInt((ATermInt) t);
    }
  str[i] = '\0';

  /* Try to keep buffer size close to 1024 bytes whenever possible */
  if( size > 1024 )
  {
     size = i + 1;
     if (size < 1024)
     	size = 1024;
     str = (char*)realloc( str, size);
  }
  {
    ATerm t = (ATerm) ATmakeString(str);
    //ATfprintf(stderr, "SSL_implode_string = %s = %t\n", str, t);
    return(t);
  }
}

ATerm SSL_explode_string(ATerm t)
{ 
  char *str;
  int i;
  ATermList chars;
  //ATfprintf(stderr, "SSL_explode_string(%t)\n", t);
  if(!ATisString(t))
    _fail(t);
  str = ATgetName(ATgetSymbol(t));
  for(i = 0; str[i] != '\0'; i++) ;
  for(chars = ATempty; i > 0; i--) {
    chars = ATinsert(chars, (ATerm) ATmakeInt(str[i - 1]));
    // if(str[i - 1] == 92) i--;
  }
  //ATfprintf(stderr, "SSL_explode_string : %t\n", chars);
  return((ATerm) chars);
}
