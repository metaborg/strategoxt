#     							-*- Autoconf -*-

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

  AC_ARG_ENABLE([stage-check], [],
    [xt_stage_check="$enableval"],
    [xt_stage_check="yes"])
  AM_CONDITIONAL([XT_STAGE_CHECK], [test "$xt_stage_check" = "yes"])
])

m4_pattern_allow([^XT_STAGE_CHECK(_TRUE|_FALSE)?$])
