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

// TODO: split exec.h in io, posix-file and posix-process.h

ATerm SSL_exit(ATerm t);
ATerm SSL_call(ATerm prog, ATerm args);
ATerm SSL_call_noisy(ATerm prog, ATerm args);
ATerm SSL_get_pid(void);

ATerm SSL_pipe_term_to_child(ATerm t, ATerm prog, ATerm args0);

ATerm SSL_fork(void);
ATerm SSL_waitpid(ATerm pid);
ATerm SSL_execv(ATerm file, ATerm argv);
ATerm SSL_execvp(ATerm file, ATerm argv);
ATerm SSL_pipe(void);
ATerm SSL_kill(ATerm pid, ATerm sig);

ATerm SSL_access(ATerm pathname, ATerm permissions);
ATerm SSL_open(ATerm pathname);
ATerm SSL_creat(ATerm pathname);
ATerm SSL_mkstemp(ATerm template);
ATerm SSL_close(ATerm fd);
ATerm SSL_dup(ATerm oldfd);
ATerm SSL_dup2(ATerm fromfd, ATerm tofd);
ATerm SSL_fileno(ATerm stream);

ATerm SSL_fdopen(ATerm fd, ATerm mode);
ATerm SSL_fopen(ATerm pathname, ATerm mode);
ATerm SSL_fclose(ATerm stream);

FILE* stream_from_term(ATerm stream);
ATerm stream_to_term(FILE* stream);

ATerm SSL_fputs(ATerm str, ATerm stream);
ATerm SSL_puts(ATerm str);
ATerm SSL_fflush(ATerm stream);
ATerm SSL_fputc(ATerm str, ATerm stream);
ATerm SSL_fgetc(ATerm stream);

ATerm SSL_write_term_to_stream_baf(ATerm stream, ATerm term);
ATerm SSL_write_term_to_stream_text(ATerm stream, ATerm term);
ATerm SSL_write_term_to_stream_taf(ATerm stream, ATerm term);

ATerm SSL_read_term_from_stream(ATerm stream);

ATerm SSL_read_term_from_string(ATerm string);
ATerm SSL_write_term_to_string(ATerm term);

ATerm SSL_strlen(ATerm str);
ATerm SSL_strcat(ATerm str1, ATerm str2);
ATerm SSL_concat_strings(ATerm strings);

ATerm SSL_get_errno(void);
ATerm SSL_set_errno(ATerm code);
ATerm SSL_strerror(ATerm errnum);
ATerm SSL_perror(ATerm msg);
ATerm SSL_EXDEV(void);

#define SSL_P_tmpdir() ((ATerm)ATmakeString(P_tmpdir))

ATerm SSL_stdin_stream(void);
ATerm SSL_stdout_stream(void);
ATerm SSL_stderr_stream(void);

ATerm SSL_isatty(ATerm filedes);

#define SSL_STDIN_FILENO() ((ATerm)ATmakeInt(STDIN_FILENO))
#define SSL_STDOUT_FILENO() ((ATerm)ATmakeInt(STDOUT_FILENO))
#define SSL_STDERR_FILENO() ((ATerm)ATmakeInt(STDERR_FILENO))


