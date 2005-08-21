AC_PREREQ([2.58])
AC_INIT([strategoxt],[0.16M1],[stratego-bugs@cs.uu.nl])
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

AC_ARG_ENABLE([xtc2],
  AS_HELP_STRING([--enable-xtc2], [use the xtc2 library]),
  [XTC2_ENABLED=$enable_xtc2],
  [XTC2_ENABLED="no"]
)
AC_SUBST([XTC2_ENABLED])

AC_MSG_CHECKING([in which order to build subpackages])
PKGS="autoxt srts"
if test "$xt_baseline" = "yes"; then
  PKGS="$PKGS stratego-front asfix-tools strc-core gpp c-tools stratego-lib"

  if test "x$XTC2_ENABLED" = "xyes"; then
    PKGS="$PKGS xtc2"
    DIST_PKGS="$DIST_PKGS xtc"
    XTC_DIR="xtc2"
  else
    PKGS="$PKGS xtc"
    DIST_PKGS="$DIST_PKGS xtc2" 
    XTC_DIR="xtc"
  fi
else
  PKGS="$PKGS stratego-lib"

  if test "x$XTC2_ENABLED" = "xyes"; then
    PKGS="$PKGS xtc2"
    DIST_PKGS="$DIST_PKGS xtc"
    XTC_DIR="xtc2"
  else
    PKGS="$PKGS xtc"
    DIST_PKGS="$DIST_PKGS xtc2" 
    XTC_DIR="xtc"
  fi

  PKGS="$PKGS stratego-front asfix-tools strc-core gpp c-tools"
fi

PKGS="$PKGS concrete-syntax xml-front aterm-front sdf-front sdf-tools stratego-regular"
AC_MSG_RESULT([$PKGS])

DIST_PKGS="$PKGS $DIST_PKGS"

AC_SUBST([PKGS])
AC_SUBST([DIST_PKGS])
AC_SUBST([XTC_DIR])

AC_MSG_CHECKING([for the location of the xtc tool to be used])
if test "$xt_baseline" = "yes"; then
  XTC_PROG="$STRATEGOXT/bin/xtc"
else
  XTC_PROG="`pwd`/xtc/src/xtc"

  # subpackages should pick up the -uninstalled pkgconfig descriptions.
  PKG_CONFIG_PATH="`pwd`:${ATERM}/lib/pkgconfig:${PKG_CONFIG_PATH}"
  export PKG_CONFIG_PATH
fi
AC_SUBST([XTC_PROG])
AC_MSG_RESULT([$XTC_PROG])

### OUTPUT #####################################################
AC_CONFIG_FILES([
  Makefile 
  news-archive/Makefile
  strategoxt.spec
  external/sdf2-bundle.pc
  strategoxt.pc
  stratego-runtime-uninstalled.pc
  stratego-lib-uninstalled.pc
  xtc-uninstalled.pc
])
AC_OUTPUT

### CONFIGURE SUBPACKAGES #####################################

AB_CONFIG_PKG(autoxt, )
AB_CONFIG_PKG(srts,   )
AB_CONFIG_PKG(xtc,              --with-repository=${REPOSITORY})
AB_CONFIG_PKG(xtc2,             --with-repository=${REPOSITORY})
AB_CONFIG_PKG(strc-core,        --with-repository=${REPOSITORY})
AB_CONFIG_PKG(c-tools,          --with-repository=${REPOSITORY})
AB_CONFIG_PKG(stratego-front,   --with-repository=${REPOSITORY})
AB_CONFIG_PKG(stratego-lib,     --with-repository=${REPOSITORY})
AB_CONFIG_PKG(asfix-tools,      --with-repository=${REPOSITORY})
AB_CONFIG_PKG(gpp,              --with-repository=${REPOSITORY})
AB_CONFIG_PKG(concrete-syntax,  --with-repository=${REPOSITORY})
AB_CONFIG_PKG(aterm-front,      --with-repository=${REPOSITORY})
AB_CONFIG_PKG(sdf-front,        --with-repository=${REPOSITORY})
AB_CONFIG_PKG(sdf-tools,        --with-repository=${REPOSITORY})
AB_CONFIG_PKG(stratego-regular, --with-repository=${REPOSITORY})
AB_CONFIG_PKG(xml-front,        --with-repository=${REPOSITORY})

# AB_CONFIG_PKG(xtar,             --with-repository=${REPOSITORY})
# AB_CONFIG_PKG(boxenv,           --with-repository=${REPOSITORY})

