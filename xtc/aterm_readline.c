#include <stdio.h>
#include <srts/exec.h>
#include <readline/readline.h>
#include <readline/history.h>

static ATerm (*rl_completion_entry_strat)(ATerm);

ATerm GNU_Readline_readline(ATerm prompt_term) {
  const char* prompt = AT_getString(prompt_term);
  ATerm result_term;

  char* result = readline(prompt);
  if(result == NULL) {
    _fail(prompt_term);
  }

  result_term = ATmakeString(result);
  free(result);
  return result_term;
}

ATerm GNU_Readline_set_instream(ATerm tstream) {
  FILE* stream;
  stream = stream_from_term(tstream);

  rl_instream = stream;
  return tstream;
}


ATerm GNU_Readline_get_instream(void) {
  return stream_to_term(rl_instream);
}

ATerm GNU_Readline_set_outstream(ATerm tstream) {
  FILE* stream;
  stream = stream_from_term(tstream);

  rl_outstream = stream;
  return tstream;
}

ATerm GNU_Readline_get_outstream(void) {
  return stream_to_term(rl_outstream);
}

ATerm GNU_Readline_add_history(ATerm command_term) {
  const char* command = AT_getString(command_term);
  add_history(command);
  return command_term;
}

char* compentry_helper(const char* text, int state);
ATerm GNU_Readline_set_completion_entry_strat(ATerm generator(ATerm)) {
  rl_bind_key ('\t', rl_complete);
  rl_completion_entry_function = compentry_helper;
  rl_completion_entry_strat = generator;
  return (ATerm) ATempty;
}

char* strduppp(const char *s) {
  char* p;

  p = (char*) malloc(strlen(s) + 1);
  if(p != NULL) {
    strcpy(p, s);
  }

  return p;
}

char* compentry_helper(const char* text, int state) {
  static ATermList all;
  char* result;

  if (!state) {
    char* mytext = strduppp(text);
    all = (ATermList) rl_completion_entry_strat(ATmakeString(mytext));
    free(mytext);
  }

  if(ATisEmpty(all)) {
    result = NULL;
  } else {
    ATerm next = ATgetFirst(all);
    all = ATgetNext(all);

    /* ATfprintf(stderr, "[info] GNU Readline completion: %t \n", next); */

    if(!ATisString(next)) {
      ATfprintf(stderr, "[error] GNU Readline completion: %t \n", next);
      result = NULL;
    } else {
      result = strduppp(AT_getString(next));
    }
  }

  return result;
}

/*
int completion_helper (int count, int key) {
  readline_completion_strat(ATmakeString("Hallo"));
  return 0;
}

ATerm GNU_Readline_set_completion(ATerm completer(ATerm)) {
  readline_completion_strat = completer;
  rl_bind_key ('\t', completion_helper);
}*/






