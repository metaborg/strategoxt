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

#include <unistd.h>

ATerm SSL_exit(ATerm t);
ATerm SSL_call(ATerm prog, ATerm args);
ATerm SSL_call_noisy(ATerm prog, ATerm args);
ATerm SSL_get_pid(void);

ATerm SSL_pipe_term_to_child(ATerm t, ATerm prog, ATerm args0);

ATerm SSL_fork(void);
ATerm SSL_waitpid(ATerm pid);
ATerm SSL_execvp(ATerm file, ATerm argv);
ATerm SSL_pipe(void);

ATerm SSL_open(ATerm pathname);
ATerm SSL_creat(ATerm pathname);
ATerm SSL_close(ATerm fd);
ATerm SSL_dup(ATerm oldfd);
ATerm SSL_fdopen(ATerm fd, ATerm mode);
ATerm SSL_fclose(ATerm stream);

#define SSL_STDIN_FILENO() ((ATerm)ATmakeInt(STDIN_FILENO))
#define SSL_STDOUT_FILENO() ((ATerm)ATmakeInt(STDOUT_FILENO))
#define SSL_STDERR_FILENO() ((ATerm)ATmakeInt(STDERR_FILENO))
