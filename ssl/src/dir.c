/*

Copyright (C) 2002 Eelco Visser <visser@acm.org>

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

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <srts/stratego.h>

// read the entries from a directory and return a list
// with all the names

ATerm SSL_readdir(ATerm t) 
{
  DIR *dir = NULL;
  ATermList entries = ATempty;
  struct dirent *entry = NULL;

  if(!t_is_string(t))
    _fail(t);

  dir = opendir(ATgetName(ATgetSymbol(t)));

  if(dir == NULL)
    _fail(t);

  while((entry = readdir(dir)) != NULL) 
    {
      entries = ATinsert(entries, ATmakeString(entry->d_name));
    }

  closedir(dir);

  return (ATerm) entries;
}

/*
ATerm SSL_stat(ATerm file)
{
  struct stat buf;

  if(!t_is_string(file)) _fail(file);

  int stat(ATgetName(ATgetSymbol(t)), &buf);

  return ATmakeAppl("Stat");
}
*/

ATerm SSL_modification_time(ATerm file)
{
  struct stat buf;

  if(!t_is_string(file)) _fail(file);

  stat(ATgetName(ATgetSymbol(file)), &buf);

  return (ATerm)ATmakeInt(buf.st_mtime);
}

ATerm SSL_getenv(ATerm name)
{
  char *value;

  if(!t_is_string(name)) _fail(name);

  value = getenv(ATgetName(ATgetSymbol(name)));

  if(value == NULL) _fail(name);

  return (ATerm)ATmakeString(value);
}

ATerm SSL_setenv(ATerm name, ATerm value, ATerm overwrite)
{
  if(!t_is_string(name)) _fail(name);
  if(!t_is_string(value)) _fail(value);
  if(!ATisInt(overwrite)) _fail(overwrite);

  setenv(ATgetName(ATgetSymbol(name)), 
	 ATgetName(ATgetSymbol(value)), 
	 ATgetInt((ATermInt)overwrite));

  return (ATerm)ATempty;
}

