AC_PREREQ(2.57)
AC_INIT([strategoxt-tool-reference],[0.1pre],[stratego-bugs@cs.uu.nl])
AM_INIT_AUTOMAKE([1.7.0 -Wall -Wno-portability])

test "x$prefix" = xNONE && prefix=$ac_default_prefix

USE_DOCBOOK
USE_XT_PACKAGES
USE_STRATEGO_SHELL
USE_XML_TOOLS

AC_PROG_INSTALL

AC_CONFIG_FILES([
  Makefile
  doc/Makefile

  man/Makefile
  html/Makefile
  xhtml/Makefile
  wiki/Makefile

  wiki/xml-tools.strs
])
AC_OUTPUT