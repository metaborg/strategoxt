AC_PREREQ([2.58])
AC_INIT([stratego-libraries],[0.17M1],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

AM_CONFIG_HEADER(config.h)

XT_INTERNAL_USE_XT_PACKAGES
XT_CHECK_MKSTEMP
XT_CHECK_MPROTECT
XT_DISABLE_XTC_REGISTER

AC_CHECK_FUNCS([getpagesize mkdtemp])
AC_CHECK_HEADERS([stdlib.h])
AC_CHECK_HEADERS([string.h])
AC_CHECK_HEADERS([unistd.h])

AC_C_INLINE
AC_HEADER_STDC
AC_TYPE_SIZE_T

AC_PROG_CC
AC_PROG_INSTALL
AC_LIBTOOL_WIN32_DLL
AC_PROG_LIBTOOL


AC_SUBST([STRATEGO_RUNTIME_UNINSTALLED_CFLAGS],['-I $(top_builddir)/runtime/lib'])
AC_SUBST([STRATEGO_RUNTIME_UNINSTALLED_LIBS],['$(top_builddir)/runtime/lib/libstratego-runtime.la'])

AC_SUBST([STRATEGO_LIB_NATIVE_UNINSTALLED_CFLAGS],['-I $(top_builddir)/lib/native'])
AC_SUBST([STRATEGO_LIB_NATIVE_UNINSTALLED_LIBS],['$(top_builddir)/lib/native/stratego-lib/libstratego-lib-native.la'])

AC_SUBST([STRATEGO_LIB_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/lib/spec'])
AC_SUBST([STRATEGO_LIB_UNINSTALLED_CFLAGS],['$(STRATEGO_LIB_NATIVE_UNINSTALLED_CFLAGS)'])
AC_SUBST([STRATEGO_LIB_UNINSTALLED_LIBS],['$(top_builddir)/lib/spec/libstratego-lib.la $(STRATEGO_LIB_NATIVE_UNINSTALLED_LIBS)'])

AC_SUBST([XTC_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/xtc/lib'])
AC_SUBST([XTC_UNINSTALLED_LIBS],['$(top_builddir)/xtc/lib/libstratego-xtc.la'])

AC_SUBST([STRATEGO_SGLR_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/sglr/lib'])
AC_SUBST([STRATEGO_SGLR_UNINSTALLED_LIBS],['$(top_builddir)/sglr/lib/libstratego-sglr.la'])

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
  sglr/Makefile
  sglr/justsglr/Makefile
  sglr/lib/Makefile
  sglr/tests/Makefile

  stratego-gpp.pc
  gpp/Makefile
  gpp/lib/Makefile
  gpp/tests/Makefile

  xtc/Makefile
  xtc/lib/Makefile
  xtc/tests/Makefile

  stratego-lib.pc
  lib/Makefile
  lib/ssl-compat/Makefile
  lib/spec/Makefile
  lib/native/Makefile
  lib/native/stratego-lib/Makefile
  lib/tests/Makefile
  lib/tests/dynamic-rules/Makefile
  lib/tests/dynamic-rules/til/Makefile
  lib/tests/dynamic-rules/til/syn/Makefile

  stratego-runtime.pc
  runtime/Makefile
  runtime/lib/Makefile
  runtime/lib/srts/Makefile
])
AC_OUTPUT
