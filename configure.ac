AC_PREREQ([2.58])
AC_INIT([strategoxt],[0.14],[stratego-bugs@cs.uu.nl])
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

XT_ARG_WITH([aterm],         [ATERM],           [prefix],                    [DIR],  [ATerm Library])
XT_ARG_WITH([repository],    [REPOSITORY],      [datadir/$PACKAGE_NAME/XTC], [FILE], [XTC Repository])
XT_ARG_WITH([sdf],           [SDF],             [prefix],                    [SDF],  [SDF Packages])
XT_ARG_WITH([sglr],          [SGLR],            [SDF],                       [DIR],  [SGLR Parser])
XT_ARG_WITH([pgen],          [PGEN],            [SDF],                       [DIR],  [PGEN Parser Generator])
XT_ARG_WITH([pt-support],    [PT_SUPPORT],      [SDF],                       [DIR],  [PT Support])
XT_ARG_WITH([asf-library],   [ASF_LIBRARY],     [SDF],                       [DIR],  [ASF Library])
XT_ARG_WITH([strategoxt],    [BASELINE],        [prefix],                    [DIR],  [StrategoXT])

AC_ARG_WITH([strategoxt],
  [AS_HELP_STRING([--with-strategoxt=DIR], [use StrategoXT baseline at DIR @<:@prefix@:>@])],
  [STRATEGOXT=$withval
   xt_baseline="yes"
  ],
  [STRATEGOXT=$prefix
   xt_baseline="no"
  ])
AC_SUBST([STRATEGOXT])
AM_CONDITIONAL([XT_USING_BASELINE], [test "$xt_baseline" = "yes"])
m4_pattern_allow([^XT_USING_BASELINE(_TRUE|_FALSE)?$])

# sets EXEEXT
AC_PROG_CC

### PACKAGES ##########################

AC_ARG_ENABLE([strc-core],
  AS_HELP_STRING([--enable-strc-core], [build new Stratego compiler]),
  [CORE_ENABLED=$enable_strc_core],
  [CORE_ENABLED="no"]
)
AC_SUBST([CORE_ENABLED])

AC_ARG_ENABLE([xtc2],
  AS_HELP_STRING([--enable-xtc2], [use the xtc2 library]),
  [XTC2_ENABLED=$enable_xtc2],
  [XTC2_ENABLED="no"]
)
AC_SUBST([XTC2_ENABLED])

AC_ARG_ENABLE([xtc3],
  AS_HELP_STRING([--enable-xtc3], [use the xtc3 library]),
  [XTC3_ENABLED=$enable_xtc3],
  [XTC3_ENABLED="no"]
)
AC_SUBST([XTC3_ENABLED])

if test "x$XTC2_ENABLED" = "xyes"
then

  PKGS="autoxt srts xtc2 stratego-front asfix-tools \
     strc gpp c-tools ssl stratego-lib concrete-syntax xml-front \
     aterm-front sdf-front sdf-tools \
     stratego-regular xtar \
     boxenv"

  DIST_PKGS="$PKGS xtc xtc3"

  XTC_DIR="xtc2"

elif test "x$XTC3_ENABLED" = "xyes"
then

  PKGS="autoxt srts xtc3 stratego-front asfix-tools \
     strc gpp c-tools ssl stratego-lib concrete-syntax xml-front \
     aterm-front sdf-front sdf-tools \
     stratego-regular xtar \
     boxenv"

  DIST_PKGS="$PKGS xtc xtc2"

  XTC_DIR="xtc3"

else

  PKGS="autoxt srts xtc stratego-front asfix-tools \
     strc gpp c-tools ssl stratego-lib concrete-syntax xml-front \
     aterm-front sdf-front sdf-tools \
     stratego-regular xtar \
     boxenv"

  DIST_PKGS="$PKGS xtc2 xtc3" 

  XTC_DIR="xtc"

fi
AC_SUBST([PKGS])
AC_SUBST([DIST_PKGS])
AC_SUBST([XTC_DIR])


if test "x$CORE_ENABLED" = "xyes"
then
  PKGS="$PKGS strc-core"
  DIST_PKGS=$PKGS
  STRC_CORE_PREFIX=${prefix}/strc-core
else
  DIST_PKGS="$DIST_PKGS strc-core" 
  STRC_CORE_PREFIX=${prefix}/strc-core 
fi
AC_SUBST([PKGS])
AC_SUBST([DIST_PKGS])
AC_SUBST([STRC_CORE_PREFIX])

if test "$xt_baseline" = "yes"
then
  BASELINE_SRTS="$STRATEGOXT"
  BASELINE_SSL="$STRATEGOXT"
  BASELINE_XTC="$STRATEGOXT"
else
  BASELINE_DESTDIR="`pwd`/local-baseline"

  BASELINE_SRTS="$BASELINE_DESTDIR$prefix"
  BASELINE_SSL="$BASELINE_DESTDIR$prefix"
  BASELINE_XTC="$BASELINE_DESTDIR$prefix"

  AC_SUBST([BASELINE_DESTDIR])
fi

AC_SUBST([BASELINE_XTC])

XT_PKG_ATERM
XT_PKG_SDF

AC_PATH_PROG([getopt], [getopt])
if test -z "$getopt"; then
  AC_MSG_ERROR([getopt is required])
fi

AC_ARG_WITH([curl], 
  [AS_HELP_STRING([--with-curl=DIR], [use Curl package at DIR @<:@/usr@:>@])],
  [CURL="$withval"], 
  [CURL="/usr"])

AC_PROG_LIBTOOL

### OUTPUT #############################
AC_CONFIG_FILES([
  Makefile 
  news-archive/Makefile
  strategoxt.spec
])
AC_OUTPUT

### SUBPACKAGES ########################

AB_CONFIG_PKG(autoxt, )

AB_CONFIG_PKG(srts,
   --with-aterm=${ATERM}
)

AB_CONFIG_PKG(xtc,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(xtc2,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(xtc3,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
   --with-curl=${CURL}
)

AB_CONFIG_PKG(strc,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(strc-core,
   --prefix=${STRC_CORE_PREFIX}
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
)

AB_CONFIG_PKG(c-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(ssl,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-lib,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(asfix-tools,
   --with-srts=${prefix}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(gpp,
   --with-srts=${prefix}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(concrete-syntax,
   --with-srts=${prefix}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(aterm-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(sdf-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(sdf-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-regular,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(xml-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(xtar,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BASELINE_SRTS}
   --with-ssl=${BASELINE_SSL}
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(boxenv,
   --with-xtc=${BASELINE_XTC}
   --with-repository=${REPOSITORY}
)

