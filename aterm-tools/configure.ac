AC_PREREQ([2.58])
AC_INIT([aterm-tools],[0.13],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE

USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

TOOLS="treeviz utils"
UNRELEASED=""
RELEASED="treeviz utils"

AC_SUBST(TOOLS)
AC_SUBST(RELEASED)
AC_SUBST(UNRELEASED)

AC_CONFIG_FILES([ 
  Makefile 
  VERSION

  src/Makefile 
  src/templates/Makefile 

  src/treeviz/Makefile
  
  src/utils/Makefile
])
AC_OUTPUT
