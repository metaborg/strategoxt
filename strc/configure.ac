AC_PREREQ([2.58])
AC_INIT([strc],[0.14],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

XT_INTERNAL_USE_XT_PACKAGES
XT_TERM_DEFINE

if test "$xt_darwin" = "yes"; then
  AC_DEFINE([STRC_SYSTEM_LDFLAGS()],
            [((ATerm) ATmakeList1(ATmakeString("-bind_at_load")))],
            [Additional arguments to pass to the linker.])
else
  AC_DEFINE([STRC_SYSTEM_LDFLAGS()],
            [((ATerm) ATmakeList0())],
            [Additional arguments to pass to the linker.])
fi

libexecdir=\$\{exec_prefix\}/libexec/$PACKAGE
AC_SUBST(libexecdir)

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_SUBST(CC)

AC_CONFIG_FILES([
  Makefile 
  spec/Makefile 

  spec/c/Makefile 
  spec/front/Makefile 
  spec/front/data/Makefile 
  spec/match/Makefile 
  spec/match/data/Makefile 
  spec/opt/Makefile 
  spec/strc/Makefile 
  spec/sig/Makefile 
  spec/pack/Makefile 

  spec/lib/Makefile 

  spec/log/Makefile 

  spec/test1/Makefile 
  spec/test2/Makefile 
  spec/testneg/Makefile
  spec/test-strc/Makefile
])

AC_OUTPUT
