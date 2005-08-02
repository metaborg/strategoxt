FILE* stream_from_term_transitional(ATerm) ;
FILE* stream_from_term_strict(ATerm) ;
FILE* stream_from_term(ATerm) ;
ATerm stream_to_term(FILE*) ;

/* Integers */

inline static int _get_int(ATerm t)
{
  if(ATgetType(t) == AT_INT)
    return ATgetInt((ATermInt) t); 
  else 
    _fail(t);
  return(0);
}

inline static double _get_real(ATerm t)
{ 
  if(ATgetType(t) == AT_REAL)
    return(ATgetReal((ATermReal) t));
  else 
    return((double)_get_int(t));
}
