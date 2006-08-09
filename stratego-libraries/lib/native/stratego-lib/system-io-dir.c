#include <stdlib.h>
#include <srts/stratego.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>

#include "system-posix-file.h"

/**
 * Read the entries from a directory and return a list
 * with all the names
 *
 * @TODO bug in glibc: function not under control of features.h
 */
#ifndef XT_STD_DISABLE_POSIX
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
#endif

/**
 * @TODO bug in glibc: function not under control of features.h
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_modification_time(ATerm file)
{
  struct stat buf;

  if(!t_is_string(file)) _fail(file);

  stat(ATgetName(ATgetSymbol(file)), &buf);

  return (ATerm)ATmakeInt(buf.st_mtime);
}
#endif

ATerm SSL_rename(ATerm oldname, ATerm newname)
{
  if(!t_is_string(oldname) || !t_is_string(newname))
    _fail(oldname);

  if(rename(ATgetName(ATgetSymbol(oldname)),ATgetName(ATgetSymbol(newname))) != 0)
    _fail(oldname);
 
  return newname;
}

/**
 * @TODO bug in glibc: functions not under control of features.h
 */
#ifndef XT_STD_DISABLE_POSIX_XSI
#define SSL_COPY_BUFSIZE 8192
ATerm SSL_copy(ATerm oldname, ATerm newname)
// copy file oldname to file newname using read and write
{
  int fdin, fdout;
  int n; 
  char buf[SSL_COPY_BUFSIZE];

  if(ATmatch(oldname, "stdin"))
    fdin = STDIN_FILENO;
  else if(!t_is_string(oldname))
    _fail(oldname);
  else if((fdin = open(ATgetName(ATgetSymbol(oldname)), O_RDONLY)) < 0 )
  {
      perror("SSL_copy");
      ATfprintf(stderr, "SSL_copy: cannot open inputfile %t\n", oldname);
      _fail(oldname); 
  }

  if(ATmatch(newname, "stdout"))
  {
    fdout = STDOUT_FILENO;
  }
  else if(ATmatch(newname, "stderr"))
  {
    fdout =  STDERR_FILENO;
  }
  else if(!t_is_string(newname))
  {
    _fail(newname);
  }
  else if((fdout = open(ATgetName(ATgetSymbol(newname)), 
			O_RDWR | O_CREAT | O_TRUNC, 
			S_IRUSR | S_IWUSR)) < 0 )
    {
      perror("SSL_copy");
      ATfprintf(stderr, "SSL_copy: cannot create output file %t\n", newname);
      _fail(newname);
    }

  while( (n = read(fdin, buf, SSL_COPY_BUFSIZE)) > 0 )
    if(write(fdout, buf, n) != n)
      { 
        perror("SSL_copy: write error");
	close(fdin);
	close(fdout);
	_fail(newname);
      }

  if(n < 0)
    {
      perror("SSL_copy: read error");
      close(fdin);
      close(fdout);
      _fail(oldname);
    }
      
  close(fdin);
  close(fdout);
  return newname;
}
#endif /* XT_STD */

/**
 * @TODO bug in glibc: function write not under control of features.h
 */
#ifndef XT_STD_DISABLE_POSIX_XSI
ATerm SSL_fdcopy(ATerm fdinA, ATerm fdoutA)
{
  int fdin, fdout;
  int n; 
  char buf[SSL_COPY_BUFSIZE];

  if(ATgetType(fdinA) != AT_INT || ATgetType(fdinA) != AT_INT)
    _fail(fdinA);

  fdin = ATgetInt((ATermInt)fdinA);
  fdout = ATgetInt((ATermInt)fdoutA);

  while( (n = read(fdin, buf, SSL_COPY_BUFSIZE)) > 0 )
    if(write(fdout, buf, n) != n)
      { 
	ATfprintf(stderr, "SSL_fdcopy: write error\n");
	_fail((ATerm) ATempty);
      }

  if(n < 0)
    {
      ATfprintf(stderr, "SSL_fdcopy: read error\n");
      _fail((ATerm) ATempty);
    }

  return (ATerm) ATempty;
}
#endif

/**
 * @TODO bug in glibc: function not under control of features.h
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_link(ATerm existingpath, ATerm newpath)
{
  if(!t_is_string(existingpath) || !t_is_string(newpath))
    _fail(existingpath);

  if(link(ATgetName(ATgetSymbol(existingpath)), ATgetName(ATgetSymbol(newpath))) != 0)
    _fail(existingpath);

  return newpath;
}
#endif

/**
 * Note: mandatory in C89 and C99, not in BSD
 */
ATerm SSL_remove(ATerm pathname)
{
  if(!t_is_string(pathname))
    _fail(pathname);

  if(remove(ATgetName(ATgetSymbol(pathname))) != 0)
    _fail(pathname);

  return (ATerm) ATempty;
}

/**
 * Note: mandatory in C89 and C99
 */
ATerm SSL_getenv(ATerm name)
{
  char *value;

  if(!t_is_string(name)) _fail(name);

  value = getenv(ATgetName(ATgetSymbol(name)));

  if(value == NULL) _fail(name);

  return (ATerm)ATmakeString(value);
}

/**
 * Note: mandatory in POSIX Base
 *
 * Note: setenv is mandatory in POSIX these days. putenv is 
 * is a POSIX XSI extension, so using setenv should in the future
 * be more portable than using putenv.
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_setenv(ATerm name, ATerm value, ATerm overwrite)
{
  if(!t_is_string(name)) _fail(name);
  if(!t_is_string(value)) _fail(value);
  if(!ATisInt(overwrite)) _fail(overwrite);

  setenv(ATgetName(ATgetSymbol(name)), ATgetName(ATgetSymbol(value)), ATgetInt((ATermInt)overwrite));

  return (ATerm)ATempty;
}
#endif
