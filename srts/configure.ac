AC_PREREQ([2.58])
AC_INIT([srts],[0.15],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

AM_CONFIG_HEADER(config.h)

XT_CHECK_ATERM

AC_CHECK_FUNCS([getpagesize mkdtemp])
AC_CHECK_HEADERS([stdlib.h])
AC_CHECK_HEADERS([string.h])
AC_CHECK_HEADERS([unistd.h])

AC_C_INLINE
AC_HEADER_STDC
AC_TYPE_SIZE_T

AC_PROG_LIBTOOL
AC_PROG_CC
AC_PROG_INSTALL

CHECK_FOR_MPROTECT

AC_SUBST(CC)
AC_SUBST(RELEASE)

AC_CONFIG_FILES([
  Makefile
  stratego-runtime.pc
  src/Makefile
  src/srts/Makefile
])
AC_OUTPUT
