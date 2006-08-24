AC_PREREQ([2.58])
AC_INIT([stratego-libraries],[0.17M1],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([config])
AM_INIT_AUTOMAKE

AM_CONFIG_HEADER(config.h)
m4_pattern_forbid([^XT_])
m4_pattern_allow([^XT_XTC_REGISTER(_TRUE|_FALSE)?$])
m4_pattern_allow([^XT_DIST_CHECK_SOURCES(_TRUE|_FALSE)?$])

XT_SETUP
XT_PRE_RELEASE
XT_WITH_XTC_ARGS
XT_CHECK_ATERM
XT_CHECK_MKSTEMP
XT_DISABLE_XTC_REGISTER

AC_ARG_ENABLE([baseline],
  [AS_HELP_STRING([--enable-baseline], [Enable a baseline build @<:@no@:>@])],
  [xt_baseline="$enableval"],
  [xt_baseline="no"])

AC_ARG_ENABLE([uninstalled-baseline],
  [AS_HELP_STRING([--enable-uninstalled-baseline], [Enable an uninstalled baseline build @<:@no@:>@])],
  [xt_uninstalled_baseline="$enableval"],
  [xt_uninstalled_baseline="no"])

AM_CONDITIONAL([XT_DIST_CHECK_SOURCES], [test "$xt_baseline" = "yes"])

if test "$xt_baseline" = "yes"; then
  XT_CHECK_SDF
  XT_WITH_STRATEGOXT_ARG
  AC_MSG_CHECKING([whether location of Stratego/XT is explicitly set])
  if test "${STRATEGOXT:+set}" = set; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    XT_CHECK_PACKAGE([STRATEGOXT],[strategoxt])
  fi
  XT_PKG_STRATEGOXT

  STRC_UNINSTALLED='$(STRATEGOXT)/bin/strc'
  BOX_UNINSTALLED_STRCFLAGS='-I $(STRATEGOXT)/share/sdf/gpp'
  PPTABLETBL_UNINSTALLED='$(STRATEGOXT)/share/sdf/gpp/pp-table.tbl'
  RTGTBL_UNINSTALLED='$(STRATEGOXT)/share/sdf/stratego-regular/rtg.tbl'
  STRATEGOTBL_UNINSTALLED='$(STRATEGOXT)/share/sdf/stratego-front/Stratego.tbl'
  SGLRI='$(STRATEGOXT)/bin/sglri'
  PACKSDF='$(STRATEGOXT)/bin/pack-sdf'
  RTG2SIG='$(STRATEGOXT)/bin/rtg2sig'
  SDF2RTG='$(STRATEGOXT)/bin/sdf2rtg'
else
  if test "$xt_uninstalled_baseline" = "yes"; then
    XT_CHECK_SDF

    STRC_UNINSTALLED='XTC_REPOSITORY=$(BUILD_REPOSITORY) $(top_builddir)/../strc-core/spec/strc/strc'
    BOX_UNINSTALLED_STRCFLAGS='-I $(top_builddir)/../gpp/syn/box'
    PPTABLETBL_UNINSTALLED='$(top_builddir)/../gpp/syn/pp-table/pp-table.tbl'
    RTGTBL_UNINSTALLED='$(top_builddir)/../stratego-regular/syn/rtg.tbl'
    STRATEGOTBL_UNINSTALLED='$(top_builddir)/../stratego-front/syn/Stratego.tbl'
    SGLRI='XTC_REPOSITORY=$(BUILD_REPOSITORY) $(top_builddir)/../asfix-tools/xtc/sglri'
    PACKSDF='XTC_REPOSITORY=$(BUILD_REPOSITORY) $(top_builddir)/../sdf-front/parse/pack-sdf'
    RTG2SIG='XTC_REPOSITORY=$(BUILD_REPOSITORY) $(top_builddir)/../stratego-regular/xtc/rtg2sig'
    SDF2RTG='XTC_REPOSITORY=$(BUILD_REPOSITORY) $(top_builddir)/../stratego-regular/xtc/sdf2rtg'
  fi
fi

AC_SUBST([STRC_UNINSTALLED])
AC_SUBST([PACKSDF])
AC_SUBST([SGLRI])
AC_SUBST([RTG2SIG])
AC_SUBST([SDF2RTG])
AC_SUBST([BOX_UNINSTALLED_STRCFLAGS])
AC_SUBST([PPTABLETBL_UNINSTALLED])
AC_SUBST([RTGTBL_UNINSTALLED])
AC_SUBST([STRATEGOTBL_UNINSTALLED])

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

AC_SUBST([STRATEGO_RTG_UNINSTALLED_STRCFLAGS],['-I $(top_builddir)/rtg/lib'])
AC_SUBST([STRATEGO_RTG_UNINSTALLED_LIBS],['$(top_builddir)/rtg/lib/libstratego-rtg.la'])

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

  stratego-rtg.pc
  rtg/Makefile
  rtg/lib/Makefile
  rtg/tests/Makefile

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
