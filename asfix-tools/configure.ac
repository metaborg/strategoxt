AC_PREREQ([2.58])
AC_INIT([asfix-tools],[0.14],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

XT_USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_SUBST(TOOLS)
AC_SUBST(RELEASED)
AC_SUBST(UNRELEASED)

AC_CONFIG_FILES([
  Makefile 
  VERSION
  sig/Makefile 
  lib/Makefile
  xtc/Makefile
  test/Makefile

  src/Makefile 

  src/templates/Makefile
  src/templates/data/Makefile

  src/implode/Makefile
  src/implode/data/Makefile

  src/asfix-yield/Makefile
  src/asfix-yield/data/Makefile

  src/visamb/Makefile
  src/visamb/data/Makefile

  src/termid/Makefile
  src/termid/data/Makefile

  src/explode-asfix2me/Makefile
  src/explode-asfix2me/data/Makefile

  src/anno/Makefile
])
AC_OUTPUT