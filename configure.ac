AC_PREREQ(2.62)
AC_INIT([strategoxt],[0.17],[stratego@cs.uu.nl])
AC_CONFIG_AUX_DIR([config])
AM_INIT_AUTOMAKE

# XT_ or AB_ left in configure is the sign a macro was not defined, or
# there was a typo in a macro invocation.
m4_pattern_forbid([^(AB|XT)_])
m4_pattern_forbid([^XT_USE_XT_PACKAGES$])

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

XT_SVN_REVISION
# comment to make this a stable release
XT_PRE_RELEASE

### DEPENDENCIES ##################################################
PKGS=""

XT_CHECK_ATERM
XT_CHECK_SDF

AC_ARG_WITH([strategoxt],
  [AS_HELP_STRING([--with-strategoxt=DIR], [use Stratego/XT baseline at DIR])],
  [BASELINE=$withval],[BASELINE=])

AC_ARG_ENABLE([bootstrap],
  [AS_HELP_STRING([--enable-bootstrap], [Force the bootstrap of the compiler @<:@no@:>@])],
  [xt_bootstrap="$enableval"],
  [xt_bootstrap="no"])

AC_ARG_ENABLE([generation-check],
  [AS_HELP_STRING([--enable-generation-check], [Enable a generation check @<:@yes@:>@])],
  [xt_gencheck="$enableval"],
  [xt_gencheck="yes"])

XT_WITH_XTC_ARG
XT_WITH_XTC_ARGS

## End of options.

if test "${BASELINE}" = "no"; then
  xt_baseline="no"
  BASELINE=
else
  xt_baseline="yes"
  if test "x${BASELINE}" = "x"; then
    AC_MSG_NOTICE([as no Stratego/XT baseline is specified, the option --without-strategoxt will be passed to sub-packages.])
    xt_baseline="no"
    ac_configure_args="$ac_configure_args --without-strategoxt"
  fi
fi

AC_MSG_CHECKING([whether a Stratego/XT baseline is used])
if test "$xt_baseline" = "yes"; then
  AC_MSG_RESULT([yes])
  # Check the specified value of $STRATEGOXT
  STRATEGOXT=$BASELINE
  XT_PKG_STRATEGOXT
else
  AC_MSG_RESULT([no])
fi

AC_MSG_CHECKING([whether location of XTC package is explicitly set])
if test "${XTC:+set}" = set; then
  AC_MSG_RESULT([yes])
else
  AC_MSG_RESULT([no])
  if test "$xt_baseline" = "no"; then
    AC_MSG_NOTICE([as a Stratego/XT baseline is not used, XTC will use a fake-baseline.])
    XTC=no
  fi
fi

AC_MSG_CHECKING([whether a XTC fake-baseline is used])
if test "${XTC}" = "no"; then
  AC_MSG_RESULT([yes])
  AC_MSG_NOTICE([override user configuration option to use the fake-baseline version.])
  XTC="$(pwd)/fake-baseline"
  COMMON_ARGS="--with-xtc=${XTC}"

  ## hacky stuff to do not pass the option to sub packages
  #AC_MSG_CHECKING([old command options])
  #AC_MSG_RESULT([$ac_configure_args])
  #AC_MSG_CHECKING([new command options])
  eval "set x $ac_configure_args"
  ac_configure_args=""
  shift
  for ac_arg
  do
  #AC_MSG_CHECKING([if the argument "$ac_arg" is kept])
  case $ac_arg in
    *-xtc | *-xtc=*)
      #AC_MSG_RESULT([no])
      ;; # remove option
    *)
      #AC_MSG_RESULT([yes])
      case $ac_arg in
      *\'*) ac_arg=`echo "$ac_arg" | sed "s/'/'\\\\\\\\''/g"` ;;
      esac
      ac_configure_args="$ac_configure_args '$ac_arg'" ;;
    esac
  done
  #AC_MSG_RESULT([$ac_configure_args])

  AC_MSG_NOTICE([will first compile prerequisite for xtc.])
  PKGS="stratego-libraries xtc $PKGS"
else
  AC_MSG_RESULT([no])
fi

AC_PROG_CC
AC_PROG_LIBTOOL
PKG_PROG_PKG_CONFIG

AC_PATH_PROG([getopt], [getopt])
if test -z "$getopt"; then
  AC_MSG_ERROR([getopt is required])
fi

# ensure PKG_CONFIG_PATH is correct
DISTCHECK_CONFIGURE_FLAGS="--enable-werror --without-strategoxt --without-xtc 'PKG_CONFIG_PATH=$PKG_CONFIG_PATH'"
if test -n "$CFLAGS"; then
  DISTCHECK_CONFIGURE_FLAGS="$DISTCHECK_CONFIGURE_FLAGS 'CFLAGS=$CFLAGS'"
fi
AC_SUBST([DISTCHECK_CONFIGURE_FLAGS])

### CONFIGURATION OF STRATEGOXT PACKAGES ##########################
if test "$xt_baseline" = "yes"; then
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
else
  xt_bootstrap=no
fi

### CONFIGURATION OF STAGES #######################################
AC_MSG_CHECKING([in which order to build subpackages])

LIB_PKGS="stratego-libraries"
STRC_PKGS="stratego-front xtc asfix-tools gpp c-tools strc-core"
BASE_PKGS="concrete-syntax xml-front aterm-front sdf-front sdf-tools stratego-regular"

LIB_PKGCONFIG_FILES="stratego-runtime stratego-lib-native stratego-lib stratego-xtc stratego-sglr stratego-gpp stratego-rtg stratego-sdf stratego-tool-doc stratego-aterm"

STRC_PKGCONFIG_FILES="xtc"

# subpackages should pick up the staged pkgconfig descriptions.
PKG_CONFIG_PATH="$(pwd):${ATERM}/lib/pkgconfig:${PKG_CONFIG_PATH}"
export PKG_CONFIG_PATH

# determine the number of stages
xt_max_stage=2
if test "$xt_bootstrap" = "yes"; then
  xt_start_at_stage=1
else
  xt_start_at_stage=2
  xt_lib_first=true
fi

STAGE_SUFFIX="-stage"
PKGS="autoxt $PKGS"
UNINSTALLED_PKGCONFIG_FILES=""

xt_lib_first_save=$xt_lib_first
xt_current_stage=$xt_start_at_stage
while test $xt_current_stage -le $xt_max_stage; do

  STAGE_PKGS=
  STAGE_PKGCONFIG_FILES=
  if $xt_lib_first; then
    STAGE_PKGS="$LIB_PKGS"
    STAGE_PKGCONFIG_FILES="$LIB_PKGCONFIG_FILES"
  else
    xt_lib_first=true
  fi

  STAGE_PKGS="$STAGE_PKGS $STRC_PKGS"
  STAGE_PKGCONFIG_FILES="$STAGE_PKGCONFIG_FILES${STAGE_PKGCONFIG_FILES+: }$STRC_PKGCONFIG_FILES"

  # No suffix for the last stage
  CURRENT_STAGE_SUFFIX="${STAGE_SUFFIX}${xt_current_stage}"
  if test $xt_current_stage -eq $xt_max_stage; then
    CURRENT_STAGE_SUFFIX=""
  fi

  for subpkgname in $STAGE_PKGS; do
    PKGS="$PKGS ${subpkgname}${CURRENT_STAGE_SUFFIX}"
  done

  for pkgcname in $STAGE_PKGCONFIG_FILES; do
    UNINSTALLED_PKGCONFIG_FILES="$UNINSTALLED_PKGCONFIG_FILES $pkgcname${CURRENT_STAGE_SUFFIX}-uninstalled.pc"
  done

  xt_current_stage=$(($xt_current_stage + 1))
done
xt_lib_first=$xt_lib_first_save

PKGS="$PKGS $BASE_PKGS"


AC_MSG_RESULT([$PKGS])
AC_SUBST([PKGS])
AC_SUBST([UNINSTALLED_PKGCONFIG_FILES])

# define suffix for pkgconfig files
AC_SUBST([STAGE1_SUFFIX],["${STAGE_SUFFIX}1"])
AC_SUBST([STAGE2_SUFFIX],[""])

AC_SUBST([STAGE_FILE], ["stage1.pc.in stage2.pc.in"])


if test "$xt_baseline" = "no"; then
  abs_top_builddist=$abs_top_srcdir
else
  abs_top_builddist=$abs_top_builddir
fi
AC_SUBST([abs_top_builddist])

### OUTPUT #####################################################
AC_CONFIG_FILES([
  fake-baseline/bin/xtc

  Makefile
  news-archive/Makefile
  manpages/Makefile
  strategoxt.spec
  strategoxt.pc

  stratego-aterm-template.pc
  stratego-gpp-template.pc
  stratego-lib-native-template.pc
  stratego-lib-template.pc
  stratego-rtg-template.pc
  stratego-runtime-template.pc
  stratego-sdf-template.pc
  stratego-sglr-template.pc
  stratego-tool-doc-template.pc
  stratego-xtc-template.pc
  xtc-template.pc
  stage1.pc
  stage2.pc
],[
  chmod a+x fake-baseline/bin/xtc
])

AC_OUTPUT

### UNINSTALLED PKG-CONFIG #####################################

xt_lib_first_save=$xt_lib_first
xt_current_stage=$xt_start_at_stage
while test $xt_current_stage -le $xt_max_stage; do
  # No suffix for the last stage
  CURRENT_STAGE_SUFFIX="${STAGE_SUFFIX}${xt_current_stage}"
  if test $xt_current_stage -eq $xt_max_stage; then
    CURRENT_STAGE_SUFFIX=""
  fi

  if $xt_lib_first; then
    for pkgcname in $LIB_PKGCONFIG_FILES; do
      cat  > $pkgcname${CURRENT_STAGE_SUFFIX}-uninstalled.pc \
      -- stage$xt_current_stage.pc $pkgcname-template.pc
    done
  else
    xt_lib_first=true
  fi

  for pkgcname in $STRC_PKGCONFIG_FILES; do
    cat  > $pkgcname${CURRENT_STAGE_SUFFIX}-uninstalled.pc \
    -- stage$xt_current_stage.pc $pkgcname-template.pc
  done

  xt_current_stage=$(($xt_current_stage + 1))
done
xt_lib_first=$xt_lib_first_save

### CONFIGURE SUBPACKAGES #####################################

AB_CONFIG_PKG(autoxt, )

COMMON_ARGS="--with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY} ${COMMON_ARGS}"
STRC_STAGE_ARGS=""
LIB_STAGE_ARGS=""
LINK_STAGE_ARGS=""
NEW_LINK_STAGE_ARGS=""

if test "$xt_baseline" = "no"; then # checks should be run with its own files.
  # No suffix for the last stage.
  CURRENT_STAGE_SUFFIX=""
  LIB_STAGE_ARGS="--with-use-lib-stage=${CURRENT_STAGE_SUFFIX}"
  STRC_STAGE_ARGS="--with-use-strc-stage=${CURRENT_STAGE_SUFFIX}"
  NEW_LINK_STAGE_ARGS="--with-link-lib-stage=${CURRENT_STAGE_SUFFIX}"
fi

xt_lib_first_save=$xt_lib_first
xt_current_stage=$xt_start_at_stage
while test $xt_current_stage -le $xt_max_stage; do
  # No suffix for the last stage.
  CURRENT_STAGE_SUFFIX="${STAGE_SUFFIX}${xt_current_stage}"
  if test $xt_current_stage -eq $xt_max_stage; then
    CURRENT_STAGE_SUFFIX=""
  fi

  CURRENT_STAGE_ARGS="--with-current-stage=${CURRENT_STAGE_SUFFIX}"
  if test $xt_current_stage -lt $xt_max_stage; then
    # do not check intermediate stages.
    CURRENT_STAGE_ARGS="$CURRENT_STAGE_ARGS --disable-stage-check"
  fi

  LINK_STAGE_ARGS="$NEW_LINK_STAGE_ARGS"
  if $xt_lib_first; then
    AB_CONFIG_PKG_SUFFIX("$LIB_PKGS", ${CURRENT_STAGE_SUFFIX}, $COMMON_ARGS $LIB_STAGE_ARGS $STRC_STAGE_ARGS $CURRENT_STAGE_ARGS $LINK_STAGE_ARGS)
    LIB_STAGE_ARGS="--with-use-lib-stage=${CURRENT_STAGE_SUFFIX}"
    NEW_LINK_STAGE_ARGS="--with-link-lib-stage=${CURRENT_STAGE_SUFFIX}"
  else
    xt_lib_first=true
  fi

  AB_CONFIG_PKG_SUFFIX("$STRC_PKGS", ${CURRENT_STAGE_SUFFIX}, $COMMON_ARGS $LIB_STAGE_ARGS $STRC_STAGE_ARGS $CURRENT_STAGE_ARGS $LINK_STAGE_ARGS)
  STRC_STAGE_ARGS="--with-use-strc-stage=${CURRENT_STAGE_SUFFIX}"

  xt_current_stage=$(($xt_current_stage + 1))
done
xt_lib_first=$xt_lib_first_save

LINK_STAGE_ARGS="$NEW_LINK_STAGE_ARGS"


AB_CONFIG_PKG("$BASE_PKGS", $COMMON_ARGS $LIB_STAGE_ARGS $STRC_STAGE_ARGS $LINK_STAGE_ARGS)
