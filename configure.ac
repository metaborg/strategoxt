AC_PREREQ(2.57)
AC_INIT([stratego-shell],[0.4pre],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE([1.7.2 -Wall -Wno-portability])

DETECT_SVN_REVISION
USE_XT_PACKAGES
XT_TERM_DEFINE

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S

AC_SEARCH_LIBS(tgetent, [termcap tinfo ncurses Hcurses curses],,
  [ AC_MSG_ERROR([no termcap library found]) ]
)

AC_CHECK_HEADER(readline/readline.h,,
  [ AC_MSG_ERROR([GNU Readline headers are required.]) ]
)

AC_CHECK_HEADER(readline/history.h,,
  [ AC_MSG_ERROR([GNU Readline headers are required.]) ]
)

AC_CHECK_LIB(readline, readline,,
  [ AC_MSG_ERROR([GNU Readline library is required.]) ]
)

AC_CONFIG_FILES([
  Makefile
  syn/Makefile
  sig/Makefile
  eval/Makefile
  xtc/Makefile
  tests/Makefile
])
AC_OUTPUT