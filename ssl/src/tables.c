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

#include <stratego.h>

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
  return list_to_consnil((ATerm)ATtableKeys((ATermTable)lookup_table(table)));
}
