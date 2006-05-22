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

AC_SUBST([STRATEGO_LIB_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/../stratego-lib/libraries'])
AC_SUBST([STRATEGO_LIB_UNINSTALLED_CFLAGS],['-I $(top_builddir)/../stratego-lib/native'])
AC_SUBST([STRATEGO_LIB_UNINSTALLED_LIBS],
  ['$(top_builddir)/../stratego-lib/libraries/libstratego-lib.la $(top_builddir)/../stratego-lib/native/stratego-lib/libstratego-lib-native.la'])

AC_SUBST([XTC_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/../libraries'])
AC_SUBST([XTC_UNINSTALLED_LIBS],['$(top_builddir)/../xtc/libraries/libstratego-xtc.la'])

AC_SUBST([STRATEGO_SGLR_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/stratego-sglr/lib'])
AC_SUBST([STRATEGO_SGLR_UNINSTALLED_LIBS],['$(top_builddir)/stratego-sglr/lib/libstratego-sglr.la'])

AC_SUBST([STRATEGO_GPP_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/gpp/lib'])
AC_SUBST([STRATEGO_GPP_UNINSTALLED_LIBS],['$(top_builddir)/gpp/lib/libstratego-gpp.la'])

# Variable for compiling with local strc
AC_SUBST([STRC_UNINSTALLED],['XTC_REPOSITORY=$(BUILD_REPOSITORY) $(top_builddir)/../strc-core/spec/strc/strc'])

# Combinations of all libraries that are needed.
AC_SUBST([STRATEGO_UNINSTALLED_STRCFLAGS],['$(STRATEGO_LIB_UNINSTALLED_STRCFLAGS)'])
AC_SUBST([STRATEGO_UNINSTALLED_CFLAGS],['$(STRATEGO_LIB_UNINSTALLED_CFLAGS) $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) $(ATERM_CFLAGS)'])
AC_SUBST([STRATEGO_UNINSTALLED_LIBS],['$(STRATEGO_LIB_UNINSTALLED_LIBS) $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) $(ATERM_LIBS)'])

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
