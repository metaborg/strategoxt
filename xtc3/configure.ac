AC_PREREQ([2.58])
AC_INIT([xtc],[0.13],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE


USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_ARG_WITH(curl, 
  AC_HELP_STRING([--with-curl=DIR], [use curl at DIR @<:@/usr@:>@]),
  CURL="$withval", 
  CURL="/usr")
AC_SUBST(CURL)

AC_CONFIG_FILES([
  Makefile
  syn/Makefile
  sig/Makefile
  lib/Makefile
  lib/contract/Makefile
  lib/core/Makefile
  lib/io/Makefile
  lib/dispatch/Makefile
  lib/trans/Makefile
  libraries/Makefile
  src/Makefile
  tests/Makefile
  def/Makefile
])
AC_OUTPUT

