
#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_get_pid(void);
ATerm SSL_fork(void);
ATerm SSL_execv(ATerm, ATerm);
ATerm SSL_execvp(ATerm, ATerm);
ATerm SSL_waitpid(ATerm);
ATerm SSL_kill(ATerm, ATerm);
#endif

ATerm SSL_exit(ATerm);
