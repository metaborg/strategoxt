AC_PREREQ([2.58])
AC_INIT([graph-tools],[0.13],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE

USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL
AC_PATH_PROGS(SH, sh)

TOOLS="templates graphxml graphterms graphxml-analysis graphxml2dot graphterms2graphxml "
UNRELEASED=""
RELEASED="templates graphxml graphterms graphxml-analysis graphxml2dot graphterms2graphxml"

AC_SUBST(TOOLS)
AC_SUBST(RELEASED)
AC_SUBST(UNRELEASED)

AC_CONFIG_FILES([
  Makefile 
  VERSION 

  src/Makefile 
	
  src/templates/Makefile 
  src/graphxml/Makefile src/graphxml/data/Makefile
  src/graphxml-analysis/Makefile
  src/graphxml-analysis/data/Makefile src/graphxml2dot/Makefile
  src/graphxml2dot/data/Makefile
  src/graphterms2graphxml/Makefile
  src/graphterms/Makefile
])
AC_OUTPUT
