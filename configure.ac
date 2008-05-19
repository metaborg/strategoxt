AC_PREREQ([2.60])
AC_INIT([strategoxt],[0.17],[stratego@cs.uu.nl])
AC_CONFIG_AUX_DIR([config])
AM_INIT_AUTOMAKE

# XT_ or AB_ left in configure is the sign a macro was not defined, or
# there was a typo in a macro invocation.
m4_pattern_forbid([^(AB|XT)_])
m4_pattern_forbid([^USE_XT_PACKAGES$])

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

XT_SVN_REVISION
# comment to make this a stable release
XT_PRE_RELEASE

### DEPENDENCIES ##################################################

XT_CHECK_ATERM
XT_CHECK_SDF

AC_ARG_WITH([strategoxt],
  [AS_HELP_STRING([--with-strategoxt=DIR], [use Stratego/XT baseline at DIR @<:@prefix@:>@])],
  [BASELINE=$withval
   xt_baseline="yes"
  ],
  [BASELINE=$prefix
   xt_baseline="no"
  ])

AC_ARG_ENABLE([bootstrap],
  [AS_HELP_STRING([--enable-bootstrap], [Enable the bootstrap of the compiler @<:@no@:>@])],
  [xt_bootstrap="$enableval"],
  [xt_bootstrap="no"])

AC_ARG_ENABLE([generation-check],
  [AS_HELP_STRING([--enable-generation-check], [Enable a generation check @<:@yes@:>@])],
  [xt_gencheck="$enableval"],
  [xt_gencheck="yes"])

AC_MSG_CHECKING([whether a baseline Stratego/XT is used])
if test "$xt_baseline" = "yes"; then
  AC_MSG_RESULT([yes])
  # Check the specified value of $STRATEGOXT
  STRATEGOXT=$BASELINE
  XT_PKG_STRATEGOXT
else
  AC_MSG_RESULT([no])
fi

XT_WITH_XTC_ARGS

AC_PROG_CC
AC_PROG_LIBTOOL
PKG_PROG_PKG_CONFIG

AC_PATH_PROG([getopt], [getopt])
if test -z "$getopt"; then
  AC_MSG_ERROR([getopt is required])
fi

### CONFIGURATION OF STRATEGOXT PACKAGES ##########################
COMPILER_GEN=$srcdir/compiler_generation
BASELINE_GEN=$BASELINE/share/strategoxt/compiler_generation

if test -r $BASELINE_GEN; then
  . $BASELINE_GEN
  xt_baseline_generation=$compiler_generation
else
  xt_baseline_generation=0
fi

. $COMPILER_GEN
xt_compiler_generation=$compiler_generation
xt_minimal_generation=$baseline_generation
xt_lib_first=$modify_library


AC_MSG_CHECKING([check if the compiler can be bootstrap])
if $modify_library && $modify_compiler; then
  AC_MSG_RESULT([no])
  exit 1
fi
AC_MSG_RESULT([yes])

AC_MSG_CHECKING([check baseline compiler generation])
if test "$xt_gencheck" = "yes"; then
  AC_MSG_RESULT([yes])
  AC_MSG_CHECKING([identical compiler generation])
  if test $xt_compiler_generation -ne $xt_baseline_generation; then
    AC_MSG_RESULT([no])
    xt_bootstrap="yes"
  else
    AC_MSG_RESULT([yes])
  fi
else
  AC_MSG_RESULT([no])
fi

if test "$xt_bootstrap" = "yes"; then
  AC_MSG_CHECKING([can bootstrap])
  if test "$xt_minimal_generation" -le "$xt_baseline_generation"; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    exit 1
  fi
fi

AC_MSG_CHECKING([in which order to build subpackages])

LIB_PKGS="stratego-libraries"
STRC_PKGS="xtc stratego-front asfix-tools gpp c-tools strc-core"
BASE_PKGS="concrete-syntax xml-front aterm-front sdf-front sdf-tools stratego-regular"

STAGE1_LIB_PKGS=""
STAGE1_STRC_PKGS=""
STAGE1_PKGNAMES=""
STAGE1_SUFFIX="-stage1"

STAGE2_SUFFIX=""
# should care about the bootstrap variable.
if test "$xt_bootstrap" = "yes"; then
  STAGE1_STRC_PKGS=$STRC_PKGS
  if $xt_lib_first; then
    STAGE1_LIB_PKGS=$LIB_PKGS
  fi
  for subpkgname in $STAGE1_LIB_PKGS $STAGE1_STRC_PKGS; do
    STAGE1_PKGNAMES="$STAGE1_PKGNAMES $subpkgname$STAGE1_SUFFIX"
  done
fi

PKGS="autoxt $STAGE1_PKGNAMES $LIB_PKGS $STRC_PKGS $BASE_PKGS"

AC_MSG_RESULT([$PKGS])
AC_SUBST([PKGS])
AC_SUBST([STAGE1_SUFFIX])
AC_SUBST([STAGE2_SUFFIX])

### OUTPUT #####################################################
AC_CONFIG_FILES([
  Makefile 
  news-archive/Makefile
  manpages/Makefile
  strategoxt.spec
  strategoxt.pc
])

AC_CONFIG_FILES([
  stratego-runtime-uninstalled.pc:stage2.pc.in:stratego-runtime-uninstalled.pc.in
  stratego-lib-native-uninstalled.pc:stage2.pc.in:stratego-lib-uninstalled.pc.in
  stratego-lib-uninstalled.pc:stage2.pc.in:stratego-lib-uninstalled.pc.in
  stratego-xtc-uninstalled.pc:stage2.pc.in:stratego-xtc-uninstalled.pc.in
  stratego-sglr-uninstalled.pc:stage2.pc.in:stratego-sglr-uninstalled.pc.in
  stratego-gpp-uninstalled.pc:stage2.pc.in:stratego-gpp-uninstalled.pc.in
  stratego-rtg-uninstalled.pc:stage2.pc.in:stratego-rtg-uninstalled.pc.in
  stratego-sdf-uninstalled.pc:stage2.pc.in:stratego-sdf-uninstalled.pc.in
  stratego-tool-doc-uninstalled.pc:stage2.pc.in:stratego-tool-doc-uninstalled.pc.in
  stratego-aterm-uninstalled.pc:stage2.pc.in:stratego-aterm-uninstalled.pc.in
  xtc-uninstalled.pc:stage2.pc.in:xtc-uninstalled.pc.in
])

if test "$xt_bootstrap" = "yes"; then
  AC_CONFIG_FILES([
    stratego-runtime-stage1-uninstalled.pc:stage1.pc.in:stratego-runtime-uninstalled.pc.in
    stratego-lib-native-stage1-uninstalled.pc:stage1.pc.in:stratego-lib-uninstalled.pc.in
    stratego-lib-stage1-uninstalled.pc:stage1.pc.in:stratego-lib-uninstalled.pc.in
    stratego-xtc-stage1-uninstalled.pc:stage1.pc.in:stratego-xtc-uninstalled.pc.in
    stratego-sglr-stage1-uninstalled.pc:stage1.pc.in:stratego-sglr-uninstalled.pc.in
    stratego-gpp-stage1-uninstalled.pc:stage1.pc.in:stratego-gpp-uninstalled.pc.in
    stratego-rtg-stage1-uninstalled.pc:stage1.pc.in:stratego-rtg-uninstalled.pc.in
    stratego-sdf-stage1-uninstalled.pc:stage1.pc.in:stratego-sdf-uninstalled.pc.in
    stratego-tool-doc-stage1-uninstalled.pc:stage1.pc.in:stratego-tool-doc-uninstalled.pc.in
    stratego-aterm-stage1-uninstalled.pc:stage1.pc.in:stratego-aterm-uninstalled.pc.in
    xtc-stage1-uninstalled.pc:stage1.pc.in:xtc-uninstalled.pc.in
  ])
fi

AC_OUTPUT

### CONFIGURE SUBPACKAGES #####################################
AB_CONFIG_PKG(autoxt, )

STAGE1_ARGS=""
USE_STAGE_ARG=""
if test "$xt_bootstrap" = "yes"; then
  if $xt_lib_first; then
    AB_CONFIG_PKG_SUFFIX("$STAGE1_LIB_PKGS", -stage1, --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY} --enable-baseline $STAGE1_ARGS)
  fi
  STAGE1_ARGS="--enable-baseline $STAGE1_ARGS"
  USE_STAGE_ARG="--with-use-stage=-stage1"

  AB_CONFIG_PKG_SUFFIX("$STAGE1_STRC_PKGS", -stage1, --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY} $STAGE1_ARGS $USE_STAGE_ARG)

  # subpackages should pick up the stage1 pkgconfig descriptions.
  PKG_CONFIG_PATH="$(pwd):${ATERM}/lib/pkgconfig:${PKG_CONFIG_PATH}"
  export PKG_CONFIG_PATH

  # FIXME: Should specify the pathes in the build-dir (strc-core-stage1 ...)
  STAGE2_ARGS=""
  USE_STAGE_ARG="--with-use-stage=-stage1"
else
  STAGE2_ARGS="--enable-baseline"
fi

# FIXME: STAGE2_ARGS are not handled yet
AB_CONFIG_PKG("$LIB_PKGS",  --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY} $STAGE2_ARGS $USE_STAGE_ARG)

# stage 2
USE_STAGE_ARG="--with-use-stage="

AB_CONFIG_PKG("$STRC_PKGS", --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY} $STAGE2_ARGS)

AB_CONFIG_PKG("$BASE_PKGS", --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY} $STAGE2_ARGS)
