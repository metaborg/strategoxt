AC_PREREQ([2.58])
AC_INIT([stratego-libraries],[0.17M1],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

XT_INTERNAL_USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_LIBTOOL_WIN32_DLL
AC_PROG_LIBTOOL

AC_SUBST([STRATEGO_RUNTIME_UNINSTALLED_CFLAGS],['-I $(top_builddir)/../srts/src'])
AC_SUBST([STRATEGO_RUNTIME_UNINSTALLED_LIBS],['$(top_builddir)/../srts/src/libstratego-runtime.la'])

AC_SUBST([STRATEGO_LIB_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/../libraries'])
AC_SUBST([STRATEGO_LIB_UNINSTALLED_CFLAGS],['-I $(top_builddir)/../stratego-lib/native'])
AC_SUBST([STRATEGO_LIB_UNINSTALLED_LIBS],
  ['$(top_builddir)/../stratego-lib/libraries/libstratego-lib.la $(top_builddir)/../stratego-lib/native/stratego-lib/libstratego-lib-native.la'])

AC_SUBST([XTC_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/../libraries'])
AC_SUBST([XTC_UNINSTALLED_LIBS],['$(top_builddir)/../xtc/libraries/libstratego-xtc.la'])
AC_SUBST([XTC_UNINSTALLED_STRCFLAGS],['$(top_builddir)/../xtc/libraries/libstratego-xtc.la'])

AC_CONFIG_FILES([
  Makefile

  build-tools/Makefile

  stratego-sglr.pc
  stratego-sglr/Makefile
  stratego-sglr/justsglr/Makefile
  stratego-sglr/lib/Makefile
  stratego-sglr/tests/Makefile

  gpp/Makefile
  gpp/lib/Makefile
  gpp/tests/Makefile
])
AC_OUTPUT
