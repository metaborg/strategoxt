AC_INIT([strategoxt],[0.13],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE

XT_SVN_REVISION
# comment to make this a stable release
XT_PRE_RELEASE

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

### ATerm Library #####################
AC_ARG_WITH(aterm, 
  AC_HELP_STRING([--with-aterm=DIR], [use ATerm Library at DIR @<:@PREFIX@:>@]),
  ATERM=$withval, 
  ATERM="$prefix"
)
AC_SUBST(ATERM)

### XTC #########################
AC_ARG_WITH(repository,
  AC_HELP_STRING([--with-repository=FILE], [use XTC repository at FILE @<:@PREFIX/share/strategoxt/XTC@:>@]),
  REPOSITORY="$withval",
  REPOSITORY="$prefix/share/$PACKAGE_NAME/XTC"
)
AC_SUBST(REPOSITORY)

### SDF ###############################
AC_ARG_WITH(sdf, 
  AC_HELP_STRING([--with-sdf=SDF], [use SDF bundle at SDF @<:@PREFIX@:>@]),
  SDF="$withval", 
  SDF="$prefix"
)
AC_SUBST(SDF)

AC_ARG_WITH(sglr, 
  AC_HELP_STRING([--with-sglr=DIR], [use SGLR bundle at DIR @<:@SDF@:>@]),
  SGLR="$withval", 
  SGLR="$SDF"
)
AC_SUBST(SGLR)

AC_ARG_WITH([pgen], 
  AC_HELP_STRING([--with-pgen=DIR], [use SDF parser generator at DIR @<:@SDF@:>@]),
  [PGEN=$withval],
  [PGEN=$SDF]
)
AC_SUBST([PGEN])

AC_ARG_WITH([pt-support],
  AC_HELP_STRING([--with-pt-support=DIR], [use pt-support at DIR @<:@SDF@:>@]),
  [PT_SUPPORT=$withval],
  [PT_SUPPORT=$SDF]
)
AC_SUBST([PT_SUPPORT])

AC_ARG_WITH([asf-library],
  AC_HELP_STRING([--with-asf-library=DIR], [use ASF library at DIR @<:@SDF@:>@]),
  [ASF_LIBRARY=$withval],
  [ASF_LIBRARY=$SDF]
)
AC_SUBST([ASF_LIBRARY])

### BOOTSTRAP STRATEGOXT ##############

AC_ARG_WITH([strategoxt], 
  AC_HELP_STRING([--with-strategoxt=DIR], [use StrategoXT at DIR (bootstrap only) @<:@PREFIX@:>@]),
  [STRATEGOXT="$withval"], 
  [STRATEGOXT="$prefix"]
)
AC_SUBST(STRATEGOXT)

# sets EXEEXT
AC_PROG_CC

### PACKAGES ##########################

AC_ARG_ENABLE(strc-core,
  AC_HELP_STRING([--enable-strc-core], [build new Stratego compiler])
  , CORE_ENABLED=$enable_strc_core
  , CORE_ENABLED="no"
)

AC_SUBST(CORE_ENABLED)

PKGS="autoxt srts xtc sdf-import stratego-front asfix-tools strc gpp c-tools ssl stratego-lib concrete-syntax xml-front aterm-front sdf-front dot-tools graph-tools sdf-tools aterm-tools stratego-regular xml-front stratego-tools boxenv stratego-util"


if test "x$CORE_ENABLED" = "xyes"
then
  PKGS="$PKGS strc-core"
  DIST_PKGS=$PKGS
  STRC_CORE_PREFIX=${prefix}/strc-core
else
  DIST_PKGS="$PKGS strc-core" 
  STRC_CORE_PREFIX=${prefix}/strc-core 
fi

AC_SUBST(PKGS)
AC_SUBST(DIST_PKGS)

BUILD_SRTS_DEST="`pwd`/pre-pkgs/build"
INSTALL_XTC_DEST="`pwd`/pre-pkgs/install"
BUILD_SRTS="$BUILD_SRTS_DEST$prefix"
INSTALL_XTC="$INSTALL_XTC_DEST$prefix"
AC_SUBST(BUILD_SRTS_DEST)
AC_SUBST(INSTALL_XTC_DEST)

XT_PKG_ATERM
XT_PKG_SDF

AC_PATH_PROG([getopt], [getopt])
if test -z "$getopt"; then
    AC_MSG_ERROR([getopt is required])
fi

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

if test x$usecpl = xtrue
then
AB_CONFIG_PKG(srts,
   --with-aterm=${ATERM}
   --with-strc=${STRATEGOXT}
   --with-ssl=${STRATEGOXT}
   --with-xtc=${STRATEGOXT}
)
else
AB_CONFIG_PKG(srts,
   --with-aterm=${ATERM}
   --with-strc=${STRATEGOXT}
   --with-ssl=${STRATEGOXT}
)
fi

AB_CONFIG_PKG(xtc,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

# sdf-import registers the location of the installed SRTS,
# therefore we configure with this SRTS and not BUILD_SRTS

AB_CONFIG_PKG(sdf-import,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-pt-support=${PT_SUPPORT}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${prefix}  
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(strc,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(strc-core,
   --prefix=${STRC_CORE_PREFIX}
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
)

AB_CONFIG_PKG(c-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(ssl,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-lib,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(asfix-tools,
   --with-srts=${prefix}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(gpp,
   --with-srts=${prefix}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(concrete-syntax,
   --with-srts=${prefix}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(aterm-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(aterm-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(graph-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(sdf-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(sdf-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(dot-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-regular,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(xml-front,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-tools,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-asf-library=${ASF_LIBRARY}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(boxenv,
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

AB_CONFIG_PKG(stratego-util,
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)