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

ATerm SSL_close(ATerm fd);
ATerm SSL_dup(ATerm oldfd);
ATerm SSL_fdopen(ATerm fd, ATerm mode);
ATerm SSL_fclose(ATerm stream);

#define SSL_STDIN_FILENO() ((ATerm)ATmakeInt(STDIN_FILENO))
#define SSL_STDOUT_FILENO() ((ATerm)ATmakeInt(STDOUT_FILENO))
#define SSL_STDERR_FILENO() ((ATerm)ATmakeInt(STDERR_FILENO))
