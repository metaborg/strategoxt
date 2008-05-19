AC_PREREQ([2.60])
AC_INIT([strc-core],[0.17],[stratego@cs.uu.nl])
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
],[
  AS_MKDIR_P(lib/stratego/strc/parse)
  AS_MKDIR_P(lib/stratego/strc/match)
  AS_MKDIR_P(lib/stratego/strc/opt)
  AS_MKDIR_P(lib/stratego/strc/front)
  AS_MKDIR_P(lib/stratego/strc/strc)
  AS_MKDIR_P(lib/stratego/strc/c)
  AS_MKDIR_P(lib/stratego/strc/lib)
  AS_MKDIR_P(lib/stratego/strc/model)
  AS_MKDIR_P(lib/stratego/strc/pack)
  AS_MKDIR_P(lib/stratego/strc/pp)

  AS_MKDIR_P(tools)

  AS_MKDIR_P(spec/testneg)
  AS_MKDIR_P(spec/test2)
  AS_MKDIR_P(spec/match/data)
  AS_MKDIR_P(spec/opt)
  AS_MKDIR_P(spec/front/data)
  AS_MKDIR_P(spec/front/attic)
  AS_MKDIR_P(spec/strc)
  AS_MKDIR_P(spec/c)
  AS_MKDIR_P(spec/lib)
  AS_MKDIR_P(spec/test-strc)
  AS_MKDIR_P(spec/pack)
  AS_MKDIR_P(spec/test1)

  AS_MKDIR_P(tests/testneg)
  AS_MKDIR_P(tests/test2)
  AS_MKDIR_P(tests/test-strc)
  AS_MKDIR_P(tests/test1)
  AS_MKDIR_P(tests/unit)
])

#  tests/unit/Makefile

AC_OUTPUT
