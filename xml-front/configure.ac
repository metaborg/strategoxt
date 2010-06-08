AC_PREREQ([2.60])
AC_INIT([xml-front],[1.8],[users@strategoxt.org])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

test "x$prefix" = xNONE && prefix=$ac_default_prefix
XT_INTERNAL_USE_XT_PACKAGES

# NATHAN: this makes the build system use the old (installed) strc
AC_DEFINE_UNQUOTED([STRC_SYSTEM_LDFLAGS()],[((ATerm) ATmakeString("${STR_LDFLAGS}"))], [Additional arguments to pass to the linker.])
AC_DEFINE_UNQUOTED([STRC_SYSTEM_CFLAGS()],[((ATerm) ATmakeString("${STR_CFLAGS} -DSIZEOF_VOID_P=${ac_cv_sizeof_void_p} -DSIZEOF_LONG=${ac_cv_sizeof_long} -DSIZEOF_INT=${ac_cv_sizeof_int}"))], [Additional arguments to pass to the C compiler.])

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
