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


/*************************************************************************
 * Hashtable <-> ATerm conversion
 */

/**
 * Returns a ATermTable for a given ATerm
 */
ATermTable hashtable_from_term(ATerm table) {
  ATermTable result = NULL;

  if(ATisBlob(table)) {
    if(ATgetBlobSize((ATermBlob) table) != sizeof(ATermTable)) {
      fprintf(stderr, "[srts | error] SRTS/table/table_from_term: size of blob is not equal to size of ATermTable\n");
      _fail(table);
    } else {
      result = (ATermTable) ATgetBlobData((ATermBlob) table);
    }
  } else if(ATisInt(table)) {
    result = (ATermTable) AT_getInt(table);
  } else {
    fprintf(stderr, "[srts | error] SRTS/table/table_from_term: not a blob or int\n");
    _fail(table);
  }

  return result;
}

/**
 * Converts an ATermTable to  a representation in an ATerm.
 */
ATerm hashtable_to_term(ATermTable table) {
  /* TODO: use a Blob */
  return (ATerm) ATmakeInt((int) table);
}

/**************************************************************************
 * Table primitives
 */
ATerm SSL_hashtable_create(ATerm initial_size_term, ATerm max_load_term) {
  int initial_size  = AT_getInt(initial_size_term);
  int max_load      = AT_getInt(max_load_term);
  ATermTable result = ATtableCreate(initial_size,max_load);
  return hashtable_to_term(result);
}

ATerm SSL_hashtable_destroy(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  ATtableDestroy(table);
  return table_term;
}

ATerm SSL_hashtable_put(ATerm table_term, ATerm key, ATerm value) {
  ATermTable table = hashtable_from_term(table_term);
  ATtablePut(table, key, value);
  return table_term;
}

ATerm SSL_hashtable_get(ATerm table_term, ATerm key) {
  ATerm result = NULL;
  ATermTable table = hashtable_from_term(table_term);

  result = ATtableGet(table, key);
  if(result == NULL) {
    _fail(table_term);
  }

  return result;
}

ATerm SSL_hashtable_remove(ATerm table_term, ATerm key) {
  ATermTable table = hashtable_from_term(table_term);
  ATtableRemove(table, key);
  return table_term;
}

ATerm SSL_hashtable_keys(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  return (ATerm) ATtableKeys(table);
}

/**************************************************************************
 * Legacy table strategies
 */
ATermTable SSL_table_table = NULL;

/* <create-table> term -> creates table indexed by term */

ATerm SSL_table_create(ATerm name)
{
  ATermTable tab;

  if(SSL_table_table == NULL)
    SSL_table_table = ATtableCreate(100, 80);
  
  /* ATfprintf(stderr, "<table-create>%t = %d\n", Ttop(), SSL_free_table); */
  tab = ATtableCreate(117,75);
  ATtablePut(SSL_table_table, name, (ATerm)ATmakeInt((int)tab));
  return name;
}

static inline int lookup_table(ATerm table) 
{ 
  ATerm t; 
  int i;
  if(SSL_table_table == NULL)
    SSL_table_create(table); 
  while((t = ATtableGet(SSL_table_table, table)) == NULL) 
    SSL_table_create(table); 
  i = ATgetInt((ATermInt)t); 
  /* ATfprintf(stderr, "table %t = %d\n", Ttop(), i); */
  return i;
}

/* <destroy-table> table-name -> destroys table */

ATerm SSL_table_destroy(ATerm table)
{
  int i;
  i = lookup_table(table);
  ATtableDestroy((ATermTable)i);
  ATtableRemove(SSL_table_table, table);
  return table;
}

/* <table-put> (table, key, value) */

ATerm SSL_table_put(ATerm table, ATerm key, ATerm value)
{
  int i;
  /* ATfprintf(stderr, "<table-put>(%t,%t,%t)\n", table, key, value); */
  i = lookup_table(table);
  ATtablePut((ATermTable)i, key, value);
  return (ATerm) ATempty;
}

/* <table-get> (table, key) -> value */

ATerm SSL_table_get(ATerm table, ATerm key)
{
  /* ATfprintf(stderr, "<table-get>(%t,%t)\n", table, key); */
  ATerm value = ATtableGet((ATermTable)lookup_table(table), key);
  if(value != NULL)
    return(value);
  _fail(table);
  return(table);
}

/* <table-remove> (table, key) */

ATerm SSL_table_remove(ATerm table, ATerm key)
{
  ATtableRemove((ATermTable)lookup_table(table), key);
  return table;
}

/* <table-keys> */

ATerm SSL_table_keys(ATerm table)
{
  return (ATerm)ATtableKeys((ATermTable)lookup_table(table));
}

ATerm SSL_table_rename(ATerm table1, ATerm table2)
{
  int i;
  i = lookup_table(table1);
  ATtablePut(SSL_table_table, table2, (ATerm)ATmakeInt((int)i));
  ATtableRemove(SSL_table_table, table1);
  return table2;
}
