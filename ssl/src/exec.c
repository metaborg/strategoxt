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
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Call

   apply a program to a list of arguments
*/

ATerm SSL_exit(ATerm t)
{
  if(ATisInt(t))
    exit(ATgetInt((ATermInt)t));
  else
    _fail(t);
  return(t);
}

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

  args = (ATermList) consnil_to_list(args0);

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

ATerm SSL_get_pid(void)
{
  return((ATerm)ATmakeInt(getpid()));
}
