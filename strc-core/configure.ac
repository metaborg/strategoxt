AC_PREREQ([2.60])
AC_INIT([strc-core],[0.18],[users@strategoxt.org])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

XT_INTERNAL_USE_XT_PACKAGES
XT_TERM_DEFINE

AC_DEFINE_UNQUOTED([STRC_SYSTEM_LDFLAGS()],[((ATerm) ATmakeString("${STR_LDFLAGS}"))], [Additional arguments to pass to the linker.])
AC_DEFINE_UNQUOTED([STRC_SYSTEM_CFLAGS()],[((ATerm) ATmakeString("${STR_CFLAGS} -DSIZEOF_VOID_P=${ac_cv_sizeof_void_p} -DSIZEOF_LONG=${ac_cv_sizeof_long} -DSIZEOF_INT=${ac_cv_sizeof_int}"))], [Additional arguments to pass to the C compiler.])

libexecdir=\$\{exec_prefix\}/libexec/$PACKAGE
AC_SUBST(libexecdir)

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_CONFIG_FILES([
  Makefile 

  strc.pc
  lib/Makefile
  
  tools/Makefile

  tests/Makefile
  tests/test1/Makefile 
  tests/test2/Makefile 
  tests/testneg/Makefile
  tests/test-strc/Makefile
])

#  tests/unit/Makefile

AC_OUTPUT
