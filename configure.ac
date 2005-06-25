AC_PREREQ([2.58])
AC_INIT([strategoxt],[0.15],[stratego-bugs@cs.uu.nl])
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

XT_ARG_WITH2([aterm], [prefix], [DIR], [ATerm Library], [lib/libATerm.a])
XT_ARG_WITH2([sdf],   [prefix], [DIR], [SDF Packages],  [bin/sglr])
XT_ARG_WITH2([repository], [datadir/$PACKAGE_NAME/XTC], [FILE], [XTC Repository])

AC_SUBST([PGEN], [$SDF])
AC_SUBST([SGLR], [$SDF])
AC_SUBST([PT_SUPPORT], [$SDF])

AC_ARG_WITH([strategoxt],
  [AS_HELP_STRING([--with-strategoxt=DIR], [use Stratego/XT baseline at DIR @<:@prefix@:>@])],
  [BASELINE=$withval
   xt_baseline="yes"
  ],
  [BASELINE=$prefix
   xt_baseline="no"
  ])

AC_PROG_CC
AC_PROG_LIBTOOL
PKG_PROG_PKG_CONFIG

AC_PATH_PROG([getopt], [getopt])
if test -z "$getopt"; then
  AC_MSG_ERROR([getopt is required])
fi

# AC_ARG_WITH([curl], 
#   [AS_HELP_STRING([--with-curl=DIR], [use Curl package at DIR @<:@/usr@:>@])],
#   [CURL="$withval"], 
#   [CURL="/usr"])

### CONFIGURATION OF STRATEGOXT PACKAGES ##########################

#AC_ARG_ENABLE([strc-core],
#  AS_HELP_STRING([--enable-strc-core], [build new Stratego compiler]),
#  [CORE_ENABLED=$enable_strc_core],
#  [CORE_ENABLED="yes"]
#)
#AC_SUBST([CORE_ENABLED])

AC_ARG_ENABLE([xtc2],
  AS_HELP_STRING([--enable-xtc2], [use the xtc2 library]),
  [XTC2_ENABLED=$enable_xtc2],
  [XTC2_ENABLED="no"]
)
AC_SUBST([XTC2_ENABLED])

# Constructing PKGS list

PKGS="autoxt srts"


if test "$xt_baseline" = "yes"
then
  echo "*** this is a baseline build; building stratego-front first"
  PKGS="$PKGS stratego-front stratego-lib"
else
  echo "*** this is a bootstrap build; building stratego-lib first"
  PKGS="$PKGS stratego-lib stratego-front"
fi

if test "x$XTC2_ENABLED" = "xyes"
then
  PKGS="$PKGS xtc2"
  DIST_PKGS="$DIST_PKGS xtc"
  XTC_DIR="xtc2"
else
  PKGS="$PKGS xtc"
  DIST_PKGS="$DIST_PKGS xtc2" 
  XTC_DIR="xtc"
fi

PKGS="$PKGS asfix-tools"

PKGS="$PKGS strc-core"

#if test "x$CORE_ENABLED" = "xyes"
#then
#  PKGS="$PKGS strc-core"
#  DIST_PKGS="$DIST_PKGS strc"
#else
#  PKGS="$PKGS strc"
#  DIST_PKGS="$DIST_PKGS strc-core" 
#fi

PKGS="$PKGS gpp c-tools concrete-syntax xml-front \
        aterm-front sdf-front sdf-tools \
        stratego-regular"

DIST_PKGS="$PKGS $DIST_PKGS"

AC_SUBST([PKGS])
AC_SUBST([DIST_PKGS])
AC_SUBST([XTC_DIR])

# Construction of PKG_CONFIG_PATH for the specified configuration

# TODO: replace with locations of aterm and sdf2-bundle 
#   if they contain pkg-config files.
PKG_CONFIG_PATH="`pwd`/external:${PKG_CONFIG_PATH}"

if test "$xt_baseline" = "yes"
then
  PKG_CONFIG_PATH="$BASELINE/lib/pkgconfig:${PKG_CONFIG_PATH}"
  export PKG_CONFIG_PATH
  XT_CHECK_PACKAGES
  AC_SUBST([XTC_PKG_CONFIG_PATH], [$BASELINE/lib/pkgconfig])
else
  PKG_CONFIG_PATH="`pwd`:${PKG_CONFIG_PATH}"
  export PKG_CONFIG_PATH
  AC_SUBST([XTC_PKG_CONFIG_PATH], [`pwd`:`pwd`/external])
fi

### OUTPUT #####################################################
AC_CONFIG_FILES([
  Makefile 
  news-archive/Makefile
  strategoxt.spec
  external/aterm.pc
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
#AB_CONFIG_PKG(strc,             --with-repository=${REPOSITORY})
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

