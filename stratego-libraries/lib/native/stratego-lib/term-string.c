#include <srts/stratego.h>
#include <stdlib.h>
#include <ctype.h>


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
	prefix_base[n] = 0;
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


/* Strings */

ATerm SSL_is_string(ATerm t) { 
  if(ATisString(t)) {
    return t; 
  }

  _fail(t);
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
  for(i = 0; !ATisEmpty(chars); chars = (ATerm) ATgetNext((ATermList) chars), i++)
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

ATerm SSL_strcat(ATerm str_term1, ATerm str_term2) {
  const char* str1; 
  const char* str2;
  ATerm result_term;
  if(!AT_isString(str_term1)) return NULL;
  if(!AT_isString(str_term2)) return NULL;
  str1 = AT_getString(str_term1);
  str2 = AT_getString(str_term2);

  char* result = (char*) malloc(strlen(str1) + strlen(str2) + 2);
  strcpy(result, str1);
  strcat(result, str2);

  result_term = ATmakeString(result);
  free(result);
  return result_term;
}

ATerm SSL_concat_strings(ATerm strings) {
  int result_length = 2;
  ATermList tail;
  char* result;
  char* current;
  ATerm term_result;

  if(!ATisList(strings)) {
    _fail(strings);
  }

  tail = (ATermList) strings;
  while(!ATisEmpty(tail)) {
    ATerm head = ATgetFirst(tail);

    if(!ATisString(head)) {
      _fail(strings);
    }

    result_length += strlen(AT_getString(head));
    tail = ATgetNext(tail);
  }

  result = (char*) malloc(result_length + 1);
  assert( result != NULL );
  current = result;

  tail = (ATermList) strings;
  while(!ATisEmpty(tail)) {
    const char* str = AT_getString(ATgetFirst(tail));
    int length = strlen(str);

    memcpy(current, str, length);
    current = current + length;
    tail = ATgetNext(tail);
  }

  current[0] = '\0'; // in case strings length == 0

  term_result = ATmakeString(result);
  free(result);
  return term_result;
}


/**
 * String operations
 */
ATerm SSL_strlen(ATerm str_term) {
  if(!ATisString(str_term)) return NULL;
  const char* str = AT_getString(str_term);
  return (ATerm) ATmakeInt(strlen(str));
}


