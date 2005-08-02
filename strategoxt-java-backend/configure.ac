AC_PREREQ([2.58])
AC_INIT([strc-java],[0.1],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

m4_pattern_forbid([^XT_])

XT_SETUP
XT_SVN_REVISION
# comment to make this a stable release
XT_PRE_RELEASE

XT_USE_XT_PACKAGES
XT_USE_JAVA_FRONT
XT_TERM_DEFINE 

AC_PROG_CC
AC_PROG_LIBTOOL

### OUTPUT #############################
AC_CONFIG_FILES([
  Makefile
  syn/Makefile
  s2j/Makefile
  xtc/Makefile
])
AC_OUTPUT
