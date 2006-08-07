#include <srts/stratego.h>

#define SSL_STDIN_FILENO() ((ATerm)ATmakeInt(STDIN_FILENO))
#define SSL_STDOUT_FILENO() ((ATerm)ATmakeInt(STDOUT_FILENO))
#define SSL_STDERR_FILENO() ((ATerm)ATmakeInt(STDERR_FILENO))

/**
 * note: POSIX XSI extension
 */
#define SSL_P_tmpdir() ((ATerm)ATmakeString(P_tmpdir))

ATerm SSL_stdin_stream(void);
ATerm SSL_stdout_stream(void);
ATerm SSL_stderr_stream(void);

ATerm SSL_isatty(ATerm);

ATerm SSL_fopen(ATerm, ATerm);
ATerm SSL_fclose(ATerm);

ATerm SSL_fflush(ATerm);

ATerm SSL_fputs(ATerm, ATerm);
ATerm SSL_puts(ATerm);

ATerm SSL_fputc(ATerm, ATerm);
ATerm SSL_fgetc(ATerm);

ATerm SSL_getcwd(void);
ATerm SSL_chdir(ATerm);
ATerm SSL_mkdir(ATerm, ATerm);
ATerm SSL_rmdir(ATerm);

ATerm SSL_creat(ATerm);
ATerm SSL_open(ATerm);

/**
 * note: POSIX XSI extension.
 */
ATerm SSL_mkstemp(ATerm);

/**
 * note: non standard.
 */
ATerm SSL_mkdtemp(ATerm);

ATerm SSL_close(ATerm);
ATerm SSL_dup(ATerm);
ATerm SSL_dup2(ATerm, ATerm);

ATerm SSL_access(ATerm, ATerm);

ATerm SSL_fdopen(ATerm, ATerm);

ATerm SSL_fileno(ATerm);

ATerm SSL_filemode(ATerm);

ATerm SSL_S_ISREG(ATerm);
ATerm SSL_S_ISDIR(ATerm);
ATerm SSL_S_ISCHR(ATerm);
ATerm SSL_S_ISBLK(ATerm);
ATerm SSL_S_ISFIFO(ATerm);
ATerm SSL_S_ISLNK(ATerm);
ATerm SSL_S_ISSOCK(ATerm);

ATerm SSL_pipe(void);

