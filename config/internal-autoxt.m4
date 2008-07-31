#     							-*- Autoconf -*-
# serial 3
#
# Author: Martin Bravenboer <martin.bravenboer@gmail.com>
#

# XT_ left in configure is the sign a macro was not defined, or there was a typo
# in a macro invocation.
m4_pattern_forbid([^XT_])

################################### INTERNAL STRATEGOXT MACROS #######################

# XT_USE_STAGE
# ------------
# Check which stage to use to compile a sub-package.
AC_DEFUN([XT_CHECK_STAGE],
[
  AC_ARG_WITH([use-lib-stage], [],
    [LIB_STAGE=$withval],
    [LIB_STAGE=])
  AC_SUBST([LIB_STAGE])

  AC_ARG_WITH([use-strc-stage], [],
    [STRC_STAGE=$withval],
    [STRC_STAGE=])
  AC_SUBST([STRC_STAGE])

  AC_ARG_WITH([link-lib-stage], [],
    [LINK_STAGE=$withval],
    [LINK_STAGE=])

  AC_ARG_WITH([current-stage], [],
    [CURRENT_STAGE=$withval],
    [CURRENT_STAGE=])
  AC_SUBST([CURRENT_STAGE])
])

# XT_STAGED_SCOMPILE
# ------------------
# Define a variable which contains the code to use to call a staged "strc".
AC_DEFUN([XT_STAGED_SCOMPILE],
[
  xt_strc_stage=$2
  xt_link_stage=$3
  xt_lib_list="strc-core${xt_strc_stage}/lib/libstrc.la"
  xt_lib_list="c-tools${xt_strc_stage}/pp/libc-pp.la $xt_lib_list"

  if test "${xt_link_stage:+set}" = set; then
    # should be retrieved from pkg-config files (factor the work)
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/xtc/lib/libstratego-xtc.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/lib/native/stratego-lib/libstratego-lib-native.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/lib/spec/libstratego-lib.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/rtg/lib/libstratego-rtg.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/sdf/lib/libstratego-sdf.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/runtime/lib/libstratego-runtime.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/aterm/lib/libstratego-aterm.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/sglr/justsglr/libjustsglr.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/sglr/lib/libstratego-sglr.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/gpp/lib/libstratego-gpp.la"
    xt_lib_list="$xt_lib_list stratego-libraries${xt_link_stage}/tool-doc/lib/libstratego-tool-doc.la"
  fi

  xt_libs=""
  for l in $xt_lib_list; do
    xt_libs="$xt_libs -dlopen \$(top_builddir)/../$l"
  done

  POST_SCOMPILE="$POST_SCOMPILE -I \$(top_srcdir)/../stratego-libraries/lib/spec"

  # POST_SCOMPILE should be at the end of the strc command line
  $1SCOMPILE="XTC_REPOSITORY=\$(BUILD_REPOSITORY)\$(STRC_STAGE) \$(LIBTOOL) --mode=execute ${xt_libs} \$(top_builddir)/../strc-core${xt_strc_stage}/tools/strc $POST_SCOMPILE"
  $1PARSE_STRATEGO="XTC_REPOSITORY=\$(BUILD_REPOSITORY)\$(STRC_STAGE) \$(LIBTOOL) --mode=execute ${xt_libs} \$(top_builddir)/../strc-core${xt_strc_stage}/tools/parse-stratego $POST_SCOMPILE"
])


# XT_INTERNAL_CHECK_STRATEGOXT
# ----------------------------
# Check for Stratego/XT in Stratego/XT itself.
AC_DEFUN([XT_INTERNAL_CHECK_STRATEGOXT],
[
  AC_REQUIRE([XT_WITH_STRATEGOXT_ARG])
  AC_REQUIRE([XT_CHECK_XTC])

  AC_REQUIRE([XT_CHECK_STAGE])
  AC_MSG_CHECKING([whether a stage of the compiler is explicitly set])

  POST_SCOMPILE=""
  if test "${STRC_STAGE:+set}" = set; then
    AC_MSG_RESULT([yes])

    # Try to find the Stratego/XT Packages using pkgconfig.
    #
    # No witnesses are used here, since some packages might not
    # yet be installed.
    #  XT_CHECK_PACKAGE([STRATEGOXT],[strategoxt])
    XT_STAGED_SCOMPILE([],[${STRC_STAGE}],[${LINK_STAGE}])
  else
    AC_MSG_RESULT([no])

    AC_MSG_CHECKING([whether location of Stratego/XT is explicitly set])
    if test "${STRATEGOXT:+set}" = set; then
      AC_MSG_RESULT([yes])
      XT_HANDLE_EXPLICIT_STRATEGOXT
    else
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([neither stage nor baseline specified.])
    fi
  fi

  AC_MSG_CHECKING([whether a stage of the libraries is explicitly set])
  if test "${LIB_STAGE:+set}" = set; then
    AC_MSG_RESULT([yes])

    # Try to find the Stratego/XT Packages using pkgconfig.
    #
    # No witnesses are used here, since some packages might not
    # yet be installed.
    XT_CHECK_PACKAGE([STRATEGO_RUNTIME],[stratego-runtime$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_LIB],[stratego-lib$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_XTC],[stratego-xtc$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_SGLR],[stratego-sglr$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_GPP],[stratego-gpp$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_RTG],[stratego-rtg$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_TOOL_DOC],[stratego-tool-doc$LIB_STAGE])
    XT_CHECK_PACKAGE([STRATEGO_ATERM],[stratego-aterm$LIB_STAGE])
  else
    AC_MSG_RESULT([no])

    AC_MSG_CHECKING([whether location of Stratego/XT is explicitly set])
    if test "${STRATEGOXT:+set}" = set; then
      AC_MSG_RESULT([yes])
      STRATEGO_LIBRARIES="$STRATEGOXT"
      XT_HANDLE_EXPLICIT_STRATEGO_LIBRARIES
    else
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([neither stage nor baseline specified.])
    fi
  fi

  XT_STAGED_SCOMPILE([CURRENT_],[${CURRENT_STAGE}],[${LIB_STAGE}])

  # backward compatibitily
  AC_SUBST([SRTS], ['$(STRATEGO_RUNTIME)'])
  AC_SUBST([XTC_LIBS], ['$(STRATEGO_XTC_LIBS)'])
  AC_SUBST([XTC_STRCFLAGS], ['$(STRATEGO_XTC_STRCFLAGS)'])

  # These packages need pkg-config files.
  AC_SUBST([STRC], ['$(STRATEGOXT)'])
  AC_SUBST([GPP], ['$(STRATEGOXT)'])
  AC_SUBST([STRATEGO_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([C_TOOLS], ['$(STRATEGOXT)'])
  AC_SUBST([ASFIX_TOOLS], ['$(STRATEGOXT)'])
  AC_SUBST([ATERM_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([SDF_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([SDF_TOOLS], ['$(STRATEGOXT)'])
  AC_SUBST([CONCRETE_SYNTAX], ['$(STRATEGOXT)'])
  AC_SUBST([XML_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([STRATEGO_REGULAR], ['$(STRATEGOXT)'])
  if test "x$SCOMPILE" = x; then
    SCOMPILE='$(STRC)/bin/strc'
  fi
  AC_SUBST([SCOMPILE])
  AC_SUBST([CURRENT_SCOMPILE])
  AC_SUBST([PARSE_STRATEGO])
  AC_SUBST([CURRENT_PARSE_STRATEGO])
])

# XT_INTERNAL_CHECK_PACKAGES
# --------------------------
AC_DEFUN([XT_INTERNAL_CHECK_PACKAGES],
[
  AC_REQUIRE([XT_CHECK_ATERM])
  AC_REQUIRE([XT_CHECK_SDF])
  AC_REQUIRE([XT_INTERNAL_CHECK_STRATEGOXT])
])

# XT_INTERNAL_USE_XT_PACKAGES
# ---------------------------
AC_DEFUN([XT_INTERNAL_USE_XT_PACKAGES],
[
  AC_REQUIRE([XT_SETUP])
  AC_REQUIRE([XT_WITH_XTC_ARGS])
  AC_REQUIRE([XT_INTERNAL_CHECK_PACKAGES])
])
