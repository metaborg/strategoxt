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

ATerm SSL_execvp(ATerm file, ATerm argv)
{
  char *str_args[256];
  int i = 0, res;
  ATermList args = (ATermList) argv;
  str_args[i++] = AT_getString(file);
  while(!ATisEmpty(args))
    {
      ATerm arg;
      if(i > 255) _fail((ATerm) ATempty);
      arg = ATgetFirst(args);
      args = ATgetNext(args);
      str_args[i++] = AT_getString(arg);
    }
  str_args[i] = NULL;
  res = execvp(AT_getString(file), str_args);
  return (ATerm)ATmakeInt(res);
}

ATerm SSL_waitpid(ATerm pid)
{
  int status;
  //ATfprintf(stderr, "SSL_waitpid(%t)\n", pid);
  waitpid(AT_getInt(pid), &status, 0);
  //ATfprintf(stderr, "SSL_waitpid(%t) waiting is over\n", pid);
  return App3("WaitStatus",
	      (ATerm)ATmakeInt(WIFEXITED(status)   ? WEXITSTATUS(status) : -1),
	      (ATerm)ATmakeInt(WIFSIGNALED(status) ? WTERMSIG(status) : -1),
	      (ATerm)ATmakeInt(WIFSTOPPED(status)  ? WSTOPSIG(status) : -1));  
}

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
  return (ATerm)ATempty;
}

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

ATerm SSL_open(ATerm pathname)
{
  int fd;
  //ATfprintf(stderr, "SSL_open(%t)\n", pathname);
  if((fd = open(AT_getString(pathname),O_CREAT|O_RDWR, S_IRWXU)) == -1)
    {
      ATfprintf(stderr, "opening %s failed: %d\n", AT_getString(pathname), fd);
      _fail(pathname);
    }
  return (ATerm)ATmakeInt(fd);
}

ATerm SSL_close(ATerm fd)
{
  //ATfprintf(stderr, "SSL_close(%t)\n", fd);
  if(close(AT_getInt(fd)) != 0) 
    _fail(fd);
  return (ATerm)ATmakeInt(0);
}

ATerm SSL_fdopen(ATerm fd, ATerm mode)
{
  ATfprintf(stderr, "SSL_fdopen(%t, %t)\n", fd, mode);
  return (ATerm) ATmakeInt((int)fdopen(AT_getInt(fd), AT_getString(mode)));
}

ATerm SSL_fclose(ATerm stream)
{
  ATfprintf(stderr, "SSL_fclose(%t)\n", stream);
  return (ATerm) ATmakeInt((int)fclose((FILE*)AT_getInt(stream)));
}

ATerm SSL_dup(ATerm oldfd)
{
  int fd;
  ATfprintf(stderr, "SSL_dup(%t)\n", oldfd);
  fd = dup(AT_getInt(oldfd));
  if(fd == -1) _fail(oldfd);
  return (ATerm)ATmakeInt(fd);
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

/* Exec program prog with arguments args0 and write term t to
   the stdin of prog. */

ATerm SSL_pipe_term_to_child(ATerm t, ATerm prog, ATerm args0)
{
  int pid;
  char *str_args[256];
  int i;
  ATermList args;
  ATbool noisy = ATtrue;
  FILE *fileid;
  int filedesc[2];
  int status;

  ATfprintf(stderr, "<SSL_pipe_to_child> (%t, %t)\n", prog, args0);

  // Check prog

  if(!t_is_string(prog)) _fail(prog);
  if(noisy) ATfprintf(stderr, "%s", t_string(prog));

  // Transform ATerm argument list to string array 

  args = (ATermList) args0; 
  i = 0;
  str_args[i++] = t_string(prog);
  while(!ATisEmpty(args))
    {
      ATerm arg;
      if(i > 255) _fail((ATerm) ATempty);
      arg = ATgetFirst(args);
      args = ATgetNext(args);
      if(!t_is_string(arg)) _fail(arg);
      if(noisy)
	ATfprintf(stderr, " %s", t_string(arg));
      str_args[i++] = t_string(arg);
    }
  str_args[i] = NULL;

  if(noisy)
    ATfprintf(stderr, "\n");

  // Setting up the pipe

  if(pipe(filedesc) != 0) _fail(prog);

  // Forking the child

  pid = fork();
  switch(pid) {
  case -1 :
    // Failure
    fprintf(stderr, "SSL_call_it: Forking failed\n");
    _fail((ATerm) ATempty);
    break;

  case 0 : 
    // Child
    fprintf(stderr, "PID = %d (I am the child)\n", pid); 

    // Forging input end of pipe with stdin
    if(close(STDIN_FILENO) != 0) _fail(prog);
    if(dup(filedesc[0]) != STDIN_FILENO) _fail(prog);
    if(close(filedesc[0]) != 0) _fail(prog);
    if(close(filedesc[1]) != 0) _fail(prog);

    // Exec prog
    if(execvp(t_string(prog), str_args) == -1)
      {
	fprintf(stderr, "%s: program not found\n", t_string(prog));
	exit(1);
      }
    fprintf(stderr, "ST_pipe_to_child: Something went wrong\n");
    _fail((ATerm) ATempty);
    break;

  default : 
    // Parent
    fprintf(stderr, "PID = %d (I am the father)\n", pid);
    fileid = fdopen(filedesc[1], "w");
    if(close(filedesc[0] != 0)) _fail(prog);
    //if(binary)
    //  ATwriteToBinaryFile(t, fileid);
    //else 
    //  {
	ATwriteToTextFile(t, fileid);
	fprintf(fileid, "\n");
	//  }
    fclose(fileid);

    waitpid(pid, &status, 0);
    fprintf(stderr, "Return from call (status = %d)\n", WEXITSTATUS(status));
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
  return((ATerm) ATempty);
}

