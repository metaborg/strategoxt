AC_INIT([xml-front],[0.12],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE

test "x$prefix" = xNONE && prefix=$ac_default_prefix
USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_LIBTOOL

DETECT_SVN_REVISION

AC_CONFIG_FILES([
  Makefile
  lib/Makefile

  syn/Makefile
  syn/xml/Makefile

  sig/Makefile
  sig/xml/Makefile
  sig/xml-info/Makefile

  pp/Makefile
  pp/xml/Makefile

  trans/Makefile 
  trans/process/Makefile 
  trans/str-xml-doc/Makefile
  trans/str-xml-info/Makefile

  xtc/Makefile

  tests/Makefile
  tests/syn/Makefile
  tests/syn/xml/Makefile
  tests/syn/xml/Document/Makefile
  tests/str-xml/Makefile
  tests/str-xml-info/Makefile
])
AC_OUTPUT
