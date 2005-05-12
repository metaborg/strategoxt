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
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <errno.h>

inline static int _get_int(ATerm t) {
  if(ATgetType(t) == AT_INT)
    return ATgetInt((ATermInt) t); 
  else 
    _fail(t);
  return(0);
}

/*************************************************************************
 * Stream conversion
 */

FILE* stream_from_term_strict(ATerm term);
FILE* stream_from_term_transitional(ATerm term);

/**
 * Returns a FILE* for a given ATerm
 *
 * It handles all possible representations of streams in Stratego.
 */
FILE* stream_from_term(ATerm stream) {
  if(ATisBlob(stream)) {
    return stream_from_term_strict(stream);
  } else {
    // ATfprintf(stderr, "** Warning -- using deprecated stream representation: %t .\n", stream);
    return stream_from_term_transitional(stream);
  }
}

/**
 * Tool for debugging the stream conversion procedures.
 * Not portable because it assumes that a FILE* takes 4 bytes.
 */
show_stream(FILE* stream) {
  char* p = (char*) &stream;
  fprintf(stderr, "Stream pointer: %i %i %i %i \n", p[0], p[1], p[2], p[3]);
}

/**
 * Converts the only real FILE* representation in an ATerm
 * to a FILE*. Doesn't try to be clever or helpful with handling
 * other representations.
 */
FILE* stream_from_term_strict(ATerm term) {
  FILE* result;

  if(ATisBlob(term)) {
    if(ATgetBlobSize((ATermBlob) term) != sizeof(FILE*)) {
      _fail(term);
    } else {
      result = (FILE*) ATgetBlobData((ATermBlob) term);
    }
  } else {
    _fail(term);
  }

  return result;
}

/**
 * Converts a FILE* the a representation in an ATerm.
 */
ATerm stream_to_term(FILE* stream) {
  return (ATerm) ATmakeInt((int)stream);
  // TODO: using an Int for now because Blobs are causing weird problems.

/*
  FILE **onheap = (FILE**) malloc(sizeof(FILE*));
  // TODO: free allocated space with Blob destructor?

  if(onheap == NULL) {
    fprintf(stderr, "** ERROR -- SSL/posix-file/stream_to_term: couldn't allocate memory");
    _fail(App0("")); 
  }

  *onheap = stream;
  return ATmake("<blob>", sizeof(FILE*), *onheap);
*/
}

/**
 * Old FILE* representations
 */
FILE* stream_from_term_transitional(ATerm stream) {
  FILE* result = NULL;

         if(ATmatch(stream, "stdout")) { // stdout
    result = stdout;
  } else if(ATmatch(stream, "stderr")) { // stderr
    result = stderr;
  } else if(ATmatch(stream, "stdin")) { // stdin
    result = stdin;
  } else if(ATisInt(stream)) { // file pointer
    result = (FILE*) AT_getInt(stream);
  } else { // not a stream
    _fail(stream);
  }

  return result;
}

/**************************************************************************
 * Error code
 */
ATerm SSL_get_errno(void) {
  return ((ATerm) ATmakeInt(errno));
}

ATerm SSL_set_errno(ATerm code) {
  int val = _get_int(code);
  errno = val;
  return (ATerm) ATempty;
}

ATerm SSL_EXDEV(void) {
  return ((ATerm) ATmakeInt(EXDEV));
}

ATerm SSL_strerror(ATerm errnum) {
  int val = _get_int(errnum);
  char* result = strerror(val);
  return (ATerm) ATmakeString(result);
}

ATerm SSL_perror(ATerm msg) {
  if(ATisString(msg)) {
    const char* s = AT_getString(msg);
    perror(s);
  } else {
    perror(NULL);
  }

  return msg;
}

/**
 * Terminal I/O
 */
ATerm SSL_isatty(ATerm filedes) {
  int val;
  int result;

  val = _get_int(filedes);
  result = isatty(val);

  return (ATerm) ATmakeInt(result);
}

/**************************************************************************
 * POSIX process procedures
 */

ATerm SSL_exit(ATerm t)
{
  if(ATisInt(t))
    exit(ATgetInt((ATermInt)t));
  else
    _fail(t);
  return(t);
}

ATerm SSL_get_pid(void) {
  return((ATerm)ATmakeInt(getpid()));
}

ATerm SSL_fork(void) {
  pid_t pid = fork();
  int result = (int) pid;
  ATerm tresult = (ATerm) ATmakeInt(result);

  if(result == -1) {
    _fail(tresult);
  }

  return tresult;
}

ATerm SSL_kill(ATerm pid, ATerm sig) {
  int result = -1;

  if(ATisInt(pid) && ATisInt(sig)) {
    result = kill(ATgetInt((ATermInt) pid), ATgetInt((ATermInt) sig));
    
    if(result == -1) {
      _fail(pid);      
    }
  }
  else {
    _fail(pid);
  }

  return (ATerm) ATmakeInt(result);
}

void execv_args(ATerm argv, const char *str_args[]) {
  int i = 0;

  /* remember to add first argument in Stratego part of the SSL */
  ATermList args = (ATermList) argv;
  while(!ATisEmpty(args)) {
    ATerm arg;
    if(i > 255) {
      ATfprintf(stderr, "** ERROR in SSL_execv(p): only 256 arguments are allowed.\n");
      _fail((ATerm) ATempty);
    }

    arg = ATgetFirst(args);
    args = ATgetNext(args);

    if(!ATisString(arg)) {
      ATfprintf(stderr, "** ERROR in SSL_execvp: argument is not a string: %t \n", arg);
      _fail((ATerm) ATempty);
    }

    str_args[i++] = AT_getString(arg);
  }

  str_args[i] = NULL;
}

ATerm SSL_execv(ATerm file, ATerm argv) {
  const char *str_args[256];
  int result;

  execv_args(argv, str_args);

  result = execv(AT_getString(file), (char *const *) str_args);
  return (ATerm) ATmakeInt(result);
}

ATerm SSL_execvp(ATerm file, ATerm argv) {
  const char *str_args[256];
  int result;

  str_args[0] = AT_getString(file);
  execv_args(argv, &str_args[1]);

  result = execvp(AT_getString(file), (char *const *) str_args);
  return (ATerm)ATmakeInt(result);
}

ATerm SSL_waitpid(ATerm pid) {
  int status;
  waitpid(AT_getInt(pid), &status, 0);
  return App3("WaitStatus",
    (ATerm)ATmakeInt(WIFEXITED(status)   ? WEXITSTATUS(status) : -1),
    (ATerm)ATmakeInt(WIFSIGNALED(status) ? WTERMSIG(status) : -1),
    (ATerm)ATmakeInt(WIFSTOPPED(status)  ? WSTOPSIG(status) : -1));
}


/*****************************************************************************
 * POSIX file system procedures
 */

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

ATerm SSL_filemode(ATerm pathname)
{
  struct stat buffer;
  int result;

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

ATerm SSL_S_ISSOCK(ATerm mode)
{
  if(!S_ISSOCK(ATgetInt((ATermInt)mode)))
    _fail(mode);
  return mode;
}

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
    _fail(term);
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
    _fail(perms_term);
  }

  todo = (ATermList) perms_term;

  if(todo == ATempty) {
    ATfprintf(stderr, "** ERROR: access requires at least one permission &t .\n", perms_term);
    _fail(perms_term);
  }

  while(todo != ATempty) {
    amode = amode | permission_from_term(ATgetFirst(todo));
    todo = ATgetNext(todo);
  }

  return amode;
}

/**
 * access
 */
ATerm SSL_access(ATerm path_term, ATerm perms_term) {
  const char* pathname  = AT_getString(path_term);
  int result = -1;
  result = access(pathname, permissions_from_term(perms_term));
  if(result != 0) {
    _fail(path_term);
  }

  return path_term;
}


/**
 * creat
 */
ATerm SSL_creat(ATerm pathname)
{
  int fd;
  //ATfprintf(stderr, "SSL_creat(%t)\n", pathname);
  if((fd = creat(AT_getString(pathname), S_IRWXU)) == -1)
    {
      ATfprintf(stderr, "Creating file %s failed (%d)\n", AT_getString(pathname), fd);
      _fail(pathname);
    }
  return (ATerm)ATmakeInt(fd);
}

/**
 * open
 */
ATerm SSL_open(ATerm pathname)
{
  int fd;
  //ATfprintf(stderr, "SSL_open(%t)\n", pathname);
  if((fd = open(AT_getString(pathname),O_CREAT|O_RDWR, S_IRWXU)) == -1)
    {
      ATfprintf(stderr, "opening %s failed: %d\n", AT_getString(pathname), fd);
      _fail(pathname);
    }
  return (ATerm) ATmakeInt(fd);
}

/**
 * dup
 */
ATerm SSL_dup(ATerm oldfd) {
  int fd = dup(AT_getInt(oldfd));
  
  if(fd == -1) {
    _fail(oldfd);
  }

  return (ATerm) ATmakeInt(fd);
}

/**
 * dup2
 */
ATerm SSL_dup2(ATerm fromfd, ATerm tofd) {
  int fd = dup2(AT_getInt(fromfd), AT_getInt(tofd));
  
  if(fd == -1) {
    _fail(fromfd);
  }

  return (ATerm) ATmakeInt(fd);
}


/**
 * mkstemp
 */
ATerm SSL_mkstemp(ATerm template) {
  char* result;
  ATerm term_result;
  int fd;

  const char* str = AT_getString(template);
  /**
   * str is not allowed to be modified, so we copy it.
   */
  result = (char*) malloc(strlen(str) + 1);
  strcpy(result, str);

  fd = mkstemp(result);
  if(fd == -1) {
    _fail(template);
  }

  term_result = (ATerm) App2("", (ATerm) ATmakeString(result), (ATerm) ATmakeInt(fd));
  free(result);

  return term_result;
}

/**
 * close
 */
ATerm SSL_close(ATerm fd) {
  if(close(AT_getInt(fd)) != 0) 
    _fail(fd);
  return (ATerm)ATmakeInt(0);
}

/**
 * fdopen
 */
ATerm SSL_fdopen(ATerm fd, ATerm mode) {
  FILE* result = fdopen(AT_getInt(fd), AT_getString(mode));

  if(result == NULL) {
    _fail(fd);
  }

  return stream_to_term(result);
}


/**
 * fopen
 */
ATerm SSL_fopen(ATerm pathname, ATerm mode) {
  FILE* result = fopen(AT_getString(pathname), AT_getString(mode));

  if(result == NULL) {
    _fail(pathname);
  }

  return stream_to_term(result);
}

/**
 * fclose
 */
ATerm SSL_fclose(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  int result = fclose(stream);

  if(result != 0) {
    _fail(stream_term);
  }

  return (ATerm) App0("");
}

/**
 * fileno
 */
ATerm SSL_fileno(ATerm term) {
  FILE* stream = stream_from_term(term);
  int fd = fileno(stream);

  if(fd == -1) {
    _fail(term);
  }

  return (ATerm) ATmakeInt(fd);
}

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
 * fflush
 */
ATerm SSL_fflush(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);

  if(fflush(stream) != 0) {
    _fail(stream_term);    
  }

  return(stream_term);
}

/**
 * fputs
 */
ATerm SSL_fputs(ATerm str_term, ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  const char* str = AT_getString(str_term);

  int result = fputs(str, stream);
  if(result == EOF) {
    _fail(stream_term);
  }

  return stream_term;
}

/**
 * puts
 */
ATerm SSL_puts(ATerm str_term) {
  const char* str = AT_getString(str_term);

  int result = puts(str);
  if(result == EOF) {
    _fail(str_term);
  }

  return stream_to_term(stdout);
}

/**
 * futc
 */
ATerm SSL_fputc(ATerm char_term, ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  int c = (char) AT_getInt(char_term);

  int result = fputc(c, stream);
  if(result == EOF) {
    _fail(char_term);
  }

  return stream_term;
}

/**
 * fgetc
 */
ATerm SSL_fgetc(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);

  int c = fgetc(stream);
  if(c == EOF) {
    _fail(stream_term);
  }

  return (ATerm) ATmakeInt(c);
}

/**
 * ATerm IO on streams
 */
ATerm SSL_write_term_to_stream_baf(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
	ATwriteToBinaryFile(term, stream);
  return stream_term;
}

ATerm SSL_write_term_to_stream_taf(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
	ATwriteToSharedTextFile(term, stream);
  return stream_term;
}

ATerm SSL_write_term_to_stream_text(ATerm stream_term, ATerm term) {
  FILE* stream = stream_from_term(stream_term);
  ATwriteToTextFile(term, stream);
  return stream_term;
}

ATerm SSL_read_term_from_stream(ATerm stream_term) {
  FILE* stream = stream_from_term(stream_term);
  ATerm result = ATreadFromFile(stream);

  if(result == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    _fail(stream_term);
  }

  return result;
}

ATerm SSL_read_term_from_string(ATerm str_term) {
  const char* str = AT_getString(str_term);
  ATerm result = ATreadFromString(str);

  if(result == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    _fail(str_term);
  }

  return result;
}

ATerm SSL_write_term_to_string(ATerm term) {
  ATerm result_term;

  /* result points to some internal buffer of the ATerm lib */
  char* result = ATwriteToString(term);

  if(result == NULL) {
    perror("SRTS/write_term_to_string");
    _fail(term);
  }

  result_term = ATmakeString(result);
  return result_term;
}

/**
 * String operations
 */
ATerm SSL_strlen(ATerm str_term) {
  const char* str = AT_getString(str_term);
  return (ATerm) ATmakeInt(strlen(str));
}

ATerm SSL_strcat(ATerm str_term1, ATerm str_term2) {
  const char* str1 = AT_getString(str_term1);
  const char* str2 = AT_getString(str_term2);
  ATerm result_term;

  char* result = (char*) malloc(strlen(str1) + strlen(str2) + 2);
  strcpy(result, str1);
  strcat(result, str2);

  result_term = ATmakeString(result);
  free(result);
  return result_term;
}

ATerm SSL_concat_strings(ATerm strings) {
  int result_length = 2;
  int list_length;
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

/* Call

   apply a program to a list of arguments
*/

ATerm SSL_call_it(ATbool noisy, ATerm prog, ATerm args);

ATerm SSL_call(ATerm prog, ATerm args)
{
  return SSL_call_it(ATfalse, prog, args);
}

ATerm SSL_call_noisy(ATerm prog, ATerm args)
{
  return SSL_call_it(ATtrue, prog, args);
}

ATerm SSL_call_it(ATbool noisy, ATerm prog, ATerm args0)
{
  int pid;
  char *str_args[256];
  int i;
  ATermList args;

  /* ATfprintf(stderr, "<call> %t\n", Ttop()); */

  if(!t_is_string(prog))
    _fail(prog);
  
  if(noisy)
    ATfprintf(stderr, "%s", t_string(prog));

  args = (ATermList) args0; 

  i = 0;
  str_args[i++] = t_string(prog);
  while(!ATisEmpty(args))
    {
      ATerm arg;
      if(i > 255)
	_fail((ATerm) ATempty);
      arg = ATgetFirst(args);
      args = ATgetNext(args);
      if(!t_is_string(arg))
	_fail(arg);
      if(noisy)
	ATfprintf(stderr, " %s", t_string(arg));
      str_args[i++] = t_string(arg);
    }
  str_args[i] = NULL;

  if(noisy)
    ATfprintf(stderr, "\n");

  pid = fork();
  if(pid == 0)
    {
      /* fprintf(stderr, "PID = %d (I am the child)\n", pid); */
      
      if(execvp(t_string(prog), str_args) == -1)
        {
          fprintf(stderr, "%s: program not found\n", t_string(prog));
          exit(1);
        }
      fprintf(stderr, "ST_call_it: Something went wrong\n");
      _fail((ATerm) ATempty);
    }
  else if(pid > 0)
    {
      int status;
      /* fprintf(stderr, "PID = %d (I am the father)\n", pid); */
      waitpid(pid, &status,0);
      /* fprintf(stderr, "Return from call (status = %d)\n", WEXITSTATUS(status)); */
      if(WIFEXITED(status) && WEXITSTATUS(status) == 0)
	return((ATerm) ATempty);
      else 
	{
	  fprintf(stderr, "%s failed (with status %d)\n", 
		  t_string(prog),
		  WEXITSTATUS(status));
	  _fail((ATerm) ATempty);
	}
    }
  else 
    {
      fprintf(stderr, "SSL_call_it: Forking failed\n");
      _fail((ATerm) ATempty);
    }
  return((ATerm) ATempty);
}

