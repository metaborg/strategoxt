#include <srts/stratego.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#ifndef XT_STD_DISABLE_POSIX
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#endif

#include "stratego-lib-common.h"

/**
 * Standard streams
 */
ATerm SSL_stdin_stream() {
  return stream_to_term(stdin);
}

ATerm SSL_stdout_stream() {
  return stream_to_term(stdout);
}

ATerm SSL_stderr_stream() {
  return stream_to_term(stderr);
}


/**
 * Terminal I/O
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_isatty(ATerm filedes) {
  int val;
  int result;

  val = _get_int(filedes);
  result = isatty(val);

  return (ATerm) ATmakeInt(result);
}
#endif /* XT_STD */

/**
 * fopen
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_fopen(ATerm pathname, ATerm mode) {
  if(!ATisString(pathname)) 
    return NULL;
  if(!ATisString(mode)) 
    return NULL;

  FILE* result = fopen(AT_getString(pathname), AT_getString(mode));

  if(result == NULL) {
    _fail(pathname);
  }

  return stream_to_term(result);
}

/**
 * fclose
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_fclose(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  int result = fclose(stream);

  if(result != 0) {
    _fail(stream_term);
  }

  return (ATerm) App0("");
}

/**
 * fflush
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_fflush(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  if(fflush(stream) != 0) {
    _fail(stream_term);    
  }

  return(stream_term);
}

/**
 * fputs
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_fputs(ATerm str_term, ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  if(!ATisString(str_term)) 
    return NULL;

  const char* str = AT_getString(str_term);

  int result = fputs(str, stream);
  if(result == EOF) {
    _fail(stream_term);
  }

  return stream_term;
}

/**
 * puts
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_puts(ATerm str_term) {
  if(!ATisString(str_term)) 
    return NULL;

  const char* str = AT_getString(str_term);

  int result = puts(str);
  if(result == EOF) {
    _fail(str_term);
  }

  return stream_to_term(stdout);
}

/**
 * fputc
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_fputc(ATerm char_term, ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  assert_is_int(char_term);
  int c = (char) _get_int(char_term);

  int result = fputc(c, stream);
  if(result == EOF) {
    _fail(char_term);
  }

  return stream_term;
}

/**
 * fgetc
 *
 * Note: mandatory in C89 and C99.
 */
ATerm SSL_fgetc(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  int c = fgetc(stream);
  if(c == EOF) {
    _fail(stream_term);
  }

  return (ATerm) ATmakeInt(c);
}


#ifndef XT_STD_DISABLE_POSIX
#define PATH_MAX_GUESS 1024

/* From Advanced Programming in the Unix Environment */

#ifdef PATH_MAX
static int pathmax = PATH_MAX;
#else
static int pathmax = 0;
#endif /* PATH_MAX */

/**
 * Allocate a string that can hold a path.
 */
char* path_alloc(int *size) {
  char *result;

  if(pathmax == 0) {
    errno = 0;
    if( (pathmax = pathconf("/", _PC_PATH_MAX)) < 0) {
      if(errno == 0) {
        pathmax = PATH_MAX_GUESS;
      } else {
        perror("path_alloc_fun error for _PC_PATH_MAX");
        pathmax = PATH_MAX_GUESS;        
      }
    } else {
      pathmax++;
    }
  }

  if( (result = malloc(pathmax + 1)) == NULL) {
    perror("malloc error for path_alloc_fun");
  }

  if(size != NULL) {
    *size = pathmax + 1;
  }

  return result;
}
#endif /* XT_STD */


/**
 * Return the current directory
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_getcwd(void) {
  ATerm term_result;
  char *result;
  int size;
  
  result = path_alloc(&size);
  if(getcwd(result, size) == NULL) {
    perror("getcwd failed");
    _fail((ATerm) ATempty);
  }

  term_result = ATmakeString(result);
  free(result);
  return term_result;
}
#endif /* XT_STD */

/**
 * chdir
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_chdir(ATerm pathname) {
  if(!ATisString(pathname)) return NULL;
  const char* dir = AT_getString(pathname);
  int result = chdir(dir);
  return (ATerm) ATmakeInt(result);
}
#endif


/**
 * Create drectory, if it does not already exist.
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_mkdir(ATerm pathname, ATerm mode)
{
  //int result = mkdir(AT_getString(pathname), permissions_from_term(mode));

  if(!ATisString(pathname))
    return NULL;

  int result = mkdir(AT_getString(pathname), 0700);
  return (ATerm) ATmakeInt(result);
}
#endif /* XT_STD */

/**
 * Deletes a directory, which must be empty.
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_rmdir(ATerm pathname)
{
  if(!ATisString(pathname)) return NULL;
  int result = rmdir(AT_getString(pathname));
  return (ATerm) ATmakeInt(result);
}
#endif /* XT_STD */

/**
 * creat
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_creat(ATerm pathname)
{
  int fd;
  if(!ATisString(pathname)) return NULL;
  //ATfprintf(stderr, "SSL_creat(%t)\n", pathname);
  if((fd = creat(AT_getString(pathname), S_IRWXU)) == -1)
    {
      ATfprintf(stderr, "Creating file %s failed (%d)\n", AT_getString(pathname), fd);
      _fail(pathname);
    }
  return (ATerm)ATmakeInt(fd);
}
#endif /* XT_STD */

/**
 * open
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_open(ATerm pathname)
{
  int fd;
  if(!ATisString(pathname)) return NULL;
  //ATfprintf(stderr, "SSL_open(%t)\n", pathname);
  if((fd = open(AT_getString(pathname),O_CREAT|O_RDWR, S_IRWXU)) == -1)
    {
      ATfprintf(stderr, "opening %s failed: %d\n", AT_getString(pathname), fd);
      _fail(pathname);
    }
  return (ATerm) ATmakeInt(fd);
}
#endif /* XT_STD */

#ifndef XT_STD_DISABLE_POSIX_XSI
#ifdef HAVE_MKSTEMP_LIMIT /* for systems where mkstemp() is broken or allows few files
                 per process before failing, we define our own: */
static const unsigned char tempchars[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int __internal__mkstemp(char *template) {
  
  int i, fd, try, base, end;

  end=strlen(template);
  base=strlen(template)-6;

  if(base<0) { /* the template did not have room for even "XXXXXX" */
    errno = EINVAL;
    return(-1);
  }
 
  for(i=base; i<end; i++)
    if(template[i]!='X') {
      errno = EINVAL;
      return(-1);
    } else {
      template[i] = tempchars[rand()%(sizeof(tempchars)-1)];
    }

  /* we have now checked the template was well-formed, and have
     already replaced it with a random string. we now try to open
     that file for exclusive read/write: */ 

  for(try=0; try<(1<<20); try++) { /* we try a million times.. */
    if((fd=open(template, O_RDWR|O_CREAT|O_EXCL, 0600))>=0) {
      return(fd); /* if we could grab the file, return it! */
    } else { /* we were out of luck, so try a new name... */ 
      for(i=base; i<end; i++) {
        template[i] = tempchars[rand()%(sizeof(tempchars)-1)];
      }
    }
  }

  /* we give up. */
  errno=EEXIST;
  return(-1);
}
#endif /* XT_STD */
#endif /* HAVE_MKSTEMP_LIMIT */

/**
 * note: mandatory POSIX XSI extension.
 */
#ifndef XT_STD_DISABLE_POSIX_XSI
ATerm SSL_mkstemp(ATerm template) {
  char* result;
  ATerm term_result;
  int fd;

  if(!ATisString(template)) return NULL;
  const char* str = AT_getString(template);
  /**
   * str is not allowed to be modified, so we copy it.
   */
  result = (char*) malloc(strlen(str) + 1);
  strcpy(result, str);

#ifndef HAVE_MKSTEMP_LIMIT /* for systems where mkstemp() can create hundreds of files per
                  process, use it: */ 
  fd = mkstemp(result);
#else
  fd = __internal__mkstemp(result); /* otherwise, use our own */
#endif /* HAVE_MKSTEMP_LIMIT */

  if(fd == -1) {
    _fail(template);
  }

  term_result = (ATerm) App2("", (ATerm) ATmakeString(result), (ATerm) ATmakeInt(fd));
  free(result);

  return term_result;
}
#endif /* XT_STD */

ATerm SSL_tmpnam(void) {
  char* result = tmpnam(NULL);
  if(result == NULL) {
    return NULL;
  } else {
    return (ATerm) ATmakeString(result);
  }
}

/**
 * The mkdtemp() function generates a uniquely-named temporary
 * directory from template. The last six characters of template must
 * be XXXXXX and these are replaced with a string that makes the
 * directory name unique.  The directory is then created with
 * permissions 0700.  Since it will be modified, template must not be
 * a string constant, but should be declared as a character array.
 *
 * Note: non standard.
 * Note: mktemp has been marked as legacy in SUSv3. Should be dropped.
 */
#ifndef XT_STD_DISABLE_POSIX_XSI
ATerm SSL_mkdtemp(ATerm template) {
  char* result;
  ATerm term_result;

  if(!ATisString(template)) return NULL;
  const char* str = AT_getString(template);
  /**
   * str is not allowed to be modified, so we copy it.
   */
  result = (char*) malloc(strlen(str) + 1);
  strcpy(result, str);

  result = mktemp(result);

  if(result == NULL) {
    _fail(template);
  }

  if(mkdir(result, S_IRWXU) == -1) {
    _fail(template);
  }

  term_result = (ATerm)ATmakeString(result);
  free(result);

  return term_result;
}
#endif /* XT_STD */

/**
 * close
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_close(ATerm fd) {
  assert_is_int(fd);
  if(close(_get_int(fd)) != 0) 
    _fail(fd);
  return (ATerm)ATmakeInt(0);
}
#endif /* XT_STD */

/**
 * dup
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_dup(ATerm oldfd) {
  assert_is_int(oldfd);
  int fd = dup(_get_int(oldfd));
  
  if(fd == -1) {
    _fail(oldfd);
  }

  return (ATerm) ATmakeInt(fd);
}
#endif /* XT_STD */

/**
 * dup2
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_dup2(ATerm fromfd, ATerm tofd) {
  assert_is_int(fromfd);
  assert_is_int(tofd);
  int fd = dup2(_get_int(fromfd), _get_int(tofd));
  
  if(fd == -1) {
    _fail(fromfd);
  }

  return (ATerm) ATmakeInt(fd);
}
#endif /* XT_STD */

#ifndef XT_STD_DISABLE_POSIX
int permission_from_term(ATerm term) {
  int result;

  if(ATmatch(term, "R_OK()")) {
    result = R_OK;
  } else if(ATmatch(term, "W_OK()")) {
    result = W_OK;
  } else if(ATmatch(term, "X_OK()")) {
    result = X_OK;
  } else if(ATmatch(term, "F_OK()")) { 
    result = F_OK;
  } else {
    ATfprintf(stderr, "** ERROR: not an access mode: %t \n", term);
    return -1;
  }

  return result;
}

/**
 * permissions
 */
int permissions_from_term(ATerm perms_term) 
{
  int amode = 0;
  ATermList todo;

  if(!ATisList(perms_term)) {
    ATfprintf(stderr, "** ERROR: access invoked with %t as access mode, which is not a list.\n", perms_term);
    return -1;
  }

  todo = (ATermList) perms_term;

  if(ATisEmpty(todo)) {
    ATfprintf(stderr, "** ERROR: access requires at least one permission &t .\n", perms_term);
    return -1;
  }

  while(!ATisEmpty(todo)) {
    int permission = permission_from_term(ATgetFirst(todo));
    if(-1 == permission) {
      return -1;
    }
    amode = amode | permission;
    todo = ATgetNext(todo);
  }

  return amode;
}
#endif /* XT_STD */

/**
 * access
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_access(ATerm path_term, ATerm perms_term) {
  if(!ATisString(path_term)) return NULL;
  const char* pathname  = AT_getString(path_term);
  int result = -1;
  int permissions = permissions_from_term(perms_term);

  if(-1 == permissions) {
    return NULL;
  }

  result = access(pathname, permissions);
  if(result != 0) {
    _fail(path_term);
  }

  return path_term;
}
#endif /* XT_STD */

/**
 * fdopen
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_fdopen(ATerm fd, ATerm mode) {
  assert_is_int(fd);
  if(!ATisString(mode)) return NULL;
  FILE* result = fdopen(_get_int(fd), AT_getString(mode));

  if(result == NULL) {
    _fail(fd);
  }

  return stream_to_term(result);
}
#endif /* XT_STD */

/**
 * fileno
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_fileno(ATerm stream_term) {
  FILE* stream = NULL; 
  int fd;

  stream = stream_from_term(stream_term);
  if(stream == NULL)
    _fail(stream_term);

  fd = fileno(stream);

  if(fd == -1) {
    _fail(term);
  }

  return (ATerm) ATmakeInt(fd);
}
#endif /* XT_STD */

/**
 * filemode
 */
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_filemode(ATerm pathname)
{
  struct stat buffer;
  int result;

  if(!ATisString(pathname)) return NULL;
  result = stat(AT_getString(pathname), &buffer);

  return (ATerm) App2("", (ATerm) ATmakeInt(buffer.st_mode), (ATerm) ATmakeInt(result));
}

ATerm SSL_S_ISREG(ATerm mode)
{
  if(!S_ISREG(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}

ATerm SSL_S_ISDIR(ATerm mode)
{
  if(!S_ISDIR(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}

ATerm SSL_S_ISCHR(ATerm mode)
{
  if(!S_ISCHR(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}

ATerm SSL_S_ISBLK(ATerm mode)
{
  if(!S_ISBLK(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}

ATerm SSL_S_ISFIFO(ATerm mode)
{
  if(!S_ISFIFO(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}

ATerm SSL_S_ISLNK(ATerm mode)
{
  if(!S_ISLNK(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}
#endif /* XT_STD */

#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_S_ISSOCK(ATerm mode)
{
#ifdef S_ISSOCK
  if(!S_ISSOCK(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
#else 
  fprintf(stderr, "error: S_ISSOCK is not available on this system.");
  fprintf(stderr, "  This is a bug in the header files of your C library.");
    _fail(mode);
#endif /* HAVE_S_ISSOCK */
}
#endif /* XT_STD */


#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_pipe(void)
{
  int fd[2], res;
  res = pipe(fd);
  switch(res) {
  case 0:
    return App2("Pipe", (ATerm)ATmakeInt(fd[0]), (ATerm)ATmakeInt(fd[1]));
  default:
    fprintf(stderr, "SSL_pipe: creation of pipe failed\n");
    _fail((ATerm)ATempty);
    //case EMFILE:
    //fprintf(stderr, "SSL_pipe: Too many file descriptors in use\n");
    //_fail((ATerm)ATempty);
    //break;
    //case ENFILE:
    //fprintf(stderr, "SSL_pipe: The system file table is full\n");
    //_fail((ATerm)ATempty);
    //break;
    //case EFAULT :
    //fprintf(stderr, "SSL_pipe: Filedescriptor is not valid\n");
    //_fail((ATerm)ATempty);
    //break;
  }
  return (ATerm) ATempty;
}
#endif /* XT_STD */
