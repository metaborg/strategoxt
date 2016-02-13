ATerm AT_pointer_to_term(void* pointer);
void* AT_term_to_pointer(ATerm term);

FILE* stream_from_term_transitional(ATerm);
FILE* stream_from_term_strict(ATerm);
FILE* stream_from_term(ATerm);
ATerm stream_to_term(FILE*);

ATermTable hashtable_from_term(ATerm table);
ATerm hashtable_to_term(ATermTable table);

ATermIndexedSet indexedSet_from_term(ATerm set_term);
ATerm indexedSet_to_term(ATermIndexedSet set);

/* Integers */

#define assert_is_int(t) if(ATgetType(t) != AT_INT) return NULL;

#define assert_is_real(t) if(ATgetType(t) != AT_REAL && ATgetType(t) != AT_INT) return NULL;

inline static int _get_int(ATerm t)
{
  if(ATgetType(t) == AT_INT)
    return ATgetInt((ATermInt) t); 
  else 
    {
      fprintf(stderr, "*** fatal error: _get_int called with non-integer argument\n");
      exit(1);
    }
}

inline static double _get_real(ATerm t)
{ 
  if(ATgetType(t) == AT_REAL)
    return(ATgetReal((ATermReal) t));
  else 
    return((double)_get_int(t));
}


long SSL_ATtableKeysSize(ATermTable table);
long SSL_ATindexedSetSize(ATermIndexedSet set);

ATerm SSL_atermtable_fold(StrCL f, ATerm result, ATermTable tbl);
ATerm SSL_table_fold(StrCL f, ATerm result, ATerm tbl);
ATerm SSL_table_keys_fold(StrCL f, ATerm result, ATerm tbl);
ATerm SSL_table_values_fold(StrCL f, ATerm result, ATerm tbl);

ATerm SSL_list_loop(StrCL f, ATerm t);
ATerm SSL_list_fold(StrCL f, ATerm result, ATerm t);
