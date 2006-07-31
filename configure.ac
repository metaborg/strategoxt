AC_PREREQ([2.58])
AC_INIT([strategoxt],[0.17M1],[stratego-bugs@cs.uu.nl])
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
AC_MSG_CHECKING([in which order to build subpackages])

##############################
#PKGS="autoxt"
#
#if test "$xt_baseline" = "yes"; then
#  PKGS="$PKGS stratego-front asfix-tools c-tools strc-core gpp stratego-libraries xtc"
#else
#  PKGS="$PKGS stratego-libraries xtc stratego-front asfix-tools strc-core gpp c-tools"
#
#  # subpackages should pick up the -uninstalled pkgconfig descriptions.
#  PKG_CONFIG_PATH="`pwd`:${ATERM}/lib/pkgconfig:${PKG_CONFIG_PATH}"
#  export PKG_CONFIG_PATH
#fi
#PKGS="$PKGS concrete-syntax xml-front aterm-front sdf-front sdf-tools stratego-regular"
##############################

BPKGS="stratego-front asfix-tools strc-core gpp c-tools concrete-syntax xml-front aterm-front sdf-front sdf-tools stratego-regular"

if test "$xt_baseline" = "yes"; then
  PKGS="autoxt xtc $BPKGS stratego-libraries"
else
  PKGS="autoxt stratego-libraries xtc $BPKGS "

  # subpackages should pick up the -uninstalled pkgconfig descriptions.
  PKG_CONFIG_PATH="`pwd`:${ATERM}/lib/pkgconfig:${PKG_CONFIG_PATH}"
  export PKG_CONFIG_PATH
fi

AC_MSG_RESULT([$PKGS])
AC_SUBST([PKGS])

### OUTPUT #####################################################
AC_CONFIG_FILES([
  Makefile 
  news-archive/Makefile
  manpages/Makefile
  strategoxt.spec
  strategoxt.pc
  stratego-runtime-uninstalled.pc
  stratego-lib-uninstalled.pc
  stratego-sglr-uninstalled.pc
  stratego-gpp-uninstalled.pc
  xtc-uninstalled.pc
])
AC_OUTPUT

### CONFIGURE SUBPACKAGES #####################################
AB_CONFIG_PKG(autoxt, )
AB_CONFIG_PKG(xtc,                --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(strc-core,          --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(c-tools,            --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(stratego-front,     --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(stratego-libraries, --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(asfix-tools,        --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(gpp,                --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(concrete-syntax,    --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(aterm-front,        --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(sdf-front,          --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(sdf-tools,          --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(stratego-regular,   --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
AB_CONFIG_PKG(xml-front,          --with-repository=${REPOSITORY} --with-build-repository=${BUILD_REPOSITORY})
