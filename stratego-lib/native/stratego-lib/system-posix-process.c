#include <srts/stratego.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

#include "stratego-lib-common.h"

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

ATerm SSL_execvp(ATerm file, ATerm argv) {
  const char *str_args[256];
  int result;

  if(!ATisString(file)) 
    return NULL;

  str_args[0] = AT_getString(file);
  execv_args(argv, &str_args[1]);

  result = execvp(str_args[0], (char *const *) str_args);
  return (ATerm)ATmakeInt(result);
}

ATerm SSL_execv(ATerm file, ATerm argv) {
  const char *str_args[256];
  int result;

  execv_args(argv, str_args);

  if(!ATisString(file)) 
    return NULL;

  result = execv(AT_getString(file), (char *const *) str_args);
  return (ATerm) ATmakeInt(result);
}

ATerm SSL_waitpid(ATerm pid) {
  int status;
  assert_is_int(pid);
  waitpid(_get_int(pid), &status, 0);
  return App3("WaitStatus",
    (ATerm)ATmakeInt(WIFEXITED(status)   ? WEXITSTATUS(status) : -1),
    (ATerm)ATmakeInt(WIFSIGNALED(status) ? WTERMSIG(status) : -1),
    (ATerm)ATmakeInt(WIFSTOPPED(status)  ? WSTOPSIG(status) : -1));
}

ATerm SSL_exit(ATerm t)
{
  if(ATisInt(t))
    exit(ATgetInt((ATermInt)t));
  else
    _fail(t);
  return(t);
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


