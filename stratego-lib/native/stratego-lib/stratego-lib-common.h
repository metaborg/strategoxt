ATerm pointer_to_term(void* pointer);
void* term_to_pointer(ATerm term);

FILE* stream_from_term_transitional(ATerm);
FILE* stream_from_term_strict(ATerm);
FILE* stream_from_term(ATerm);
ATerm stream_to_term(FILE*);

ATermTable hashtable_from_term(ATerm table);
ATerm hashtable_to_term(ATermTable table);

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
