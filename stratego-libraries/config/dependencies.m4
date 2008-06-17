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

  AC_ARG_WITH([current-stage], [],
    [CURRENT_STAGE=$withval],
    [CURRENT_STAGE=])
  AC_SUBST([CURRENT_STAGE])
])
