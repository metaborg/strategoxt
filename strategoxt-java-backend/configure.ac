AC_PREREQ([2.58])
AC_INIT([strc-java],[0.1],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

XT_SVN_REVISION
# comment to make this a stable release
XT_PRE_RELEASE
USE_XT_PACKAGES

XT_TERM_DEFINE 

# sets EXEEXT
AC_PROG_CC

### PACKAGES ##########################

XT_SETUP

XT_PKG_ATERM
XT_PKG_SDF
XT_PKG_STRATEGOXT

AC_PROG_LIBTOOL


AC_ARG_WITH(java-front,
  AC_HELP_STRING([--with-java-front=DIR], [use java-front at DIR @<:@/usr@:>@]),
  JAVA_FRONT="$withval",
  JAVA_FRONT="/usr"
)
AC_SUBST(JAVA_FRONT)


### OUTPUT #############################
AC_CONFIG_FILES([
  Makefile
  syn/Makefile
  s2j/Makefile
  xtc/Makefile
])
AC_OUTPUT

