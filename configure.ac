AC_PREREQ([2.58])
AC_INIT([strategoxt],[0.13],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([config])
AM_INIT_AUTOMAKE


# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

XT_SVN_REVISION
# comment to make this a stable release
# XT_PRE_RELEASE

XT_ARG_WITH([aterm],         [ATERM],           [prefix],                    [DIR],       [ATerm Library])
XT_ARG_WITH([repository],    [REPOSITORY],      [datadir/$PACKAGE_NAME/XTC], [FILE],      [XTC Repository])
XT_ARG_WITH([sdf],           [SDF],             [prefix],                    [SDF],       [SDF Packages])
XT_ARG_WITH([sglr],          [SGLR],            [SDF],                       [DIR],       [SGLR Parser])
XT_ARG_WITH([pgen],          [PGEN],            [SDF],                       [DIR],       [PGEN Parser Generator])
XT_ARG_WITH([pt-support],    [PT_SUPPORT],      [SDF],                       [DIR],       [PT Support])
XT_ARG_WITH([asf-library],   [ASF_LIBRARY],     [SDF],                       [DIR],       [ASF Library])
XT_ARG_WITH([strategoxt],    [STRATEGOXT],      [prefix],                    [STRATEGOXT],[StrategoXT])

AC_ARG_WITH(curl, 
  AC_HELP_STRING([--with-curl=DIR], [use Curl package at DIR @<:@/usr@:>@]),
  CURL="$withval", 
  CURL="/usr")
AC_SUBST(CURL)

# sets EXEEXT
AC_PROG_CC

### PACKAGES ##########################

PKGS="autoxt srts xtc stratego-front asfix-tools \
   strc gpp c-tools ssl concrete-syntax xml-front \
   aterm-front sdf-front sdf-tools \
   stratego-regular boxenv"

DIST_PKGS="$PKGS" 
XTC_DIR="xtc"
AC_SUBST([PKGS])
AC_SUBST([DIST_PKGS])
AC_SUBST([XTC_DIR])

BUILD_SRTS_DEST="`pwd`/pre-pkgs/build"
INSTALL_XTC_DEST="`pwd`/pre-pkgs/install"
BUILD_SRTS="$BUILD_SRTS_DEST$prefix"
INSTALL_XTC="$INSTALL_XTC_DEST$prefix"
AC_SUBST([BUILD_SRTS_DEST])
AC_SUBST([INSTALL_XTC_DEST])
AC_SUBST([INSTALL_XTC])

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

AB_CONFIG_PKG(strc,
   --with-aterm=${ATERM}
   --with-sglr=${SGLR}
   --with-pgen=${PGEN}
   --with-strategoxt=${STRATEGOXT}
   --with-srts=${BUILD_SRTS}
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
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

AB_CONFIG_PKG(boxenv,
   --with-xtc=${INSTALL_XTC}
   --with-repository=${REPOSITORY}
)

