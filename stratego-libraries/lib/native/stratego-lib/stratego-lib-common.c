#include <srts/stratego.h>
#include <stdio.h>

/**
 * Initialization
 */
static ATerm stdin_term  = NULL;
static ATerm stdout_term = NULL;
static ATerm stderr_term = NULL;

static void (* SSL_initialize_next)(void) = NULL;

static void SSL_initialize()
{
  AFun fun;

  fun = ATmakeAFun("stdin", 0, ATfalse);
  stdin_term = (ATerm) ATmakeAppl(fun);

  fun = ATmakeAFun("stdout", 0, ATfalse);
  stdout_term = (ATerm) ATmakeAppl(fun);

  fun = ATmakeAFun("stderr", 0, ATfalse);
  stderr_term = (ATerm) ATmakeAppl(fun);

  ATprotect(&stdin_term);
  ATprotect(&stdout_term);
  ATprotect(&stderr_term);

  if(SSL_initialize_next != NULL)
    SSL_initialize_next();
}

static void register_init(void) __attribute__((constructor));
static void register_init(void)
{
  SSL_initialize_next  = SRTS_stratego_initialize;
  SRTS_stratego_initialize = &SSL_initialize;
}

ATerm AT_pointer_to_term(void* pointer) {
 void** blobdata;

 if((blobdata = (void**) malloc(sizeof(void*))) == NULL) {
   perror("malloc error for pointer_to_term");
   return NULL;
 }

 *blobdata = pointer;
 return (ATerm) ATmakeBlob(sizeof(void*), blobdata);
}

void* AT_term_to_pointer(ATerm term) {
  void** blobdata;
  void* pointer;

  if(ATisBlob(term)) {
    if(ATgetBlobSize((ATermBlob) term) != sizeof(void*)) {
      return NULL;
    }

    blobdata = ATgetBlobData((ATermBlob) term);
    pointer = *blobdata;
  } else {
    pointer = NULL;
  }

  return pointer;
}

void AT_free_pointer_term(ATerm term) {
  void** blobdata;

  if(ATisBlob(term)) {
    if(ATgetBlobSize((ATermBlob) term) == sizeof(void*)) {
      blobdata = ATgetBlobData((ATermBlob) term);
      free(blobdata);
    }
  }
}

/**
 * Old FILE* representations
 * bootstrap problem
 */
FILE* stream_from_term_transitional(ATerm stream) {
  FILE* result = NULL;

  if(stream == stdout_term) {
    result = stdout;
  } else if(stream == stderr_term) {
    result = stderr;
  } else if(stream == stdin_term) {
    result = stdin;
  } else if(ATisInt(stream)) {
    fprintf(stderr, "error: obsolete stream representation used (integer).\n");
    result = NULL;
  } else {
    fprintf(stderr, "error: invalid stream representation used.\n");
    result = NULL;;
  }

  return result;
}

/**
 * Returns a FILE* for a given ATerm
 *
 * It handles all possible representations of streams in Stratego.
 */
FILE* stream_from_term(ATerm stream) {
  if(ATisBlob(stream)) {
    return (FILE*) AT_term_to_pointer(stream);
  } else {
    return stream_from_term_transitional(stream);
  }
}

/**
 * Converts a FILE* the a representation in an ATerm.
 */
ATerm stream_to_term(FILE* stream) {
  return AT_pointer_to_term((void*) stream);
}

/**
 * Returns a ATermTable for a given ATerm
 */
ATermTable hashtable_from_term(ATerm table) {
  ATermTable result = NULL;

  if(ATisBlob(table)) {
    result = (ATermTable) AT_term_to_pointer(table);
  } else if(ATisInt(table)) {
    fprintf(stderr, "error: obsolete hashtable representation used (integer).\n");
    result = NULL;
  } else {
    fprintf(stderr, "error: invalid hashtable representation used.\n");
    _fail(table);
  }

  return result;
}

/**
 * Converts an ATermTable to  a representation in an ATerm.
 */
ATerm hashtable_to_term(ATermTable table) {
  return AT_pointer_to_term((void*) table);
}

/**
 * Returns a IndexedSet for a given ATerm
 */
ATermIndexedSet indexedSet_from_term(ATerm set_term) {
  ATermIndexedSet result = NULL;

  if(ATisBlob(set_term)) {
    result = (ATermIndexedSet) AT_term_to_pointer(set_term);
  } else if(ATisInt(set_term)) {
    fprintf(stderr, "error: obsolete set representation used (integer).\n");
    result = NULL;
  } else {
    fprintf(stderr, "error: invalid set representation used.\n");
    result = NULL;
  }

  return result;
}

/**
 * Converts an IndexedSet to  a representation in an ATerm.
 */
ATerm indexedSet_to_term(ATermIndexedSet set) {
  return AT_pointer_to_term((void*) set);
}

ATerm SSL_list_loop(StrCL f, ATerm t)
{
  if(ATgetType(t) == AT_LIST) {
    ATermList suffix = (ATermList) t;

    while(!ATisEmpty(suffix))
    {
      ATerm result = cl_fun(f)(cl_sl(f), ATgetFirst(suffix));
      if(result == NULL)
      {
        return NULL;
      }

      suffix = ATgetNext(suffix);
    }

    return t;
  }
  else
  {
    return NULL;
  }
}

ATerm SSL_list_fold(StrCL f, ATerm result, ATerm t)
{
  if(ATgetType(t) == AT_LIST) {
    ATermList suffix = (ATermList) t;

    while(!ATisEmpty(suffix))
    {
      result = cl_fun(f)(cl_sl(f), result, ATgetFirst(suffix));
      if(result == NULL)
      {
        return NULL;
      }

      suffix = ATgetNext(suffix);
    }

    return result;
  }
  else
  {
    return NULL;
  }
}


/**
 * Folds over hashtable keys and values. Allow iterating over contents
 * of a hashtable without constructing a list of keys or values. Since
 * the operation is a fold, one *can* construct a list of results, or
 * any other composite computation.
 *
 * Note that this duplicates code from the ATerm library. Due to the
 * encapsulation in the implementation of the ATerm table it is not
 * possible to extend the ATerm library with this type of operation
 * that requires knowledge of the implementation. That is, this
 * code depends on implementation knowledge that is not in the 
 * public interface of the library.
 **/

#define TABLE_SHIFT 13
#define ELEMENTS_PER_TABLE (1<<TABLE_SHIFT)
#define modELEMENTS_PER_TABLE(n) ((n) & (ELEMENTS_PER_TABLE-1))
#define divELEMENTS_PER_TABLE(n) ((n) >> TABLE_SHIFT)

struct _ATermTable
{
  long sizeMinus1;
  long nr_entries; /* the number of occupied positions in the hashtable,
                      including the elements that are explicitly marked
                      as deleted */
  long nr_deletions;
  int max_load;
  long max_entries;
  long *hashtable; long nr_tables;
  struct _ATerm ***keys;
  long nr_free_tables;
  long first_free_position;
  long **free_table;
  struct _ATerm ***values;
};

static ATerm tableGet(ATerm **tableindex, long n)
{
  assert(n>=0);
  return tableindex[divELEMENTS_PER_TABLE(n)][modELEMENTS_PER_TABLE(n)];
}

static ATerm table_fold(StrCL f, ATerm result, ATerm **tableindex, long nr_entries)
{
  long i;
  ATerm t;

  if(result != NULL)
    for(i=0; i<nr_entries; i++) {
      t = tableGet(tableindex, i);
      if (t != NULL) {
        result = cl_fun(f)(cl_sl(f), result, t);
        if( result == NULL ) 
          break;
      }
    }
  return result;
}

ATerm SSL_table_keys_fold(StrCL f, ATerm result, ATerm tbl)
{
  ATermTable table = hashtable_from_term(tbl);
  return table_fold(f, result, table->keys, table->nr_entries);
}

ATerm SSL_table_values_fold(StrCL f, ATerm result, ATerm tbl)
{
  ATermTable table = hashtable_from_term(tbl);
  return table_fold(f, result, table->values, table->nr_entries);
}
