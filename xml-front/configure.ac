AC_PREREQ(2.57)
AC_INIT([xml-tools],[0.4.0pre],[martin@cs.uu.nl])
AM_INIT_AUTOMAKE([1.7.2 -Wall -Wno-portability])

test "x$prefix" = xNONE && prefix=$ac_default_prefix
XML_TOOLS="$prefix"
AC_SUBST(XML_TOOLS)

USE_XT_PACKAGES

AC_CHECK_PROG(XSLTPROC,xsltproc,xsltproc,)

AC_ARG_WITH(j2re, 
  AC_HELP_STRING([--with-j2re=DIR], [use Java 2 Runtime Environment at DIR]), 
  J2RE="$withval"; usejava=true, 
  usejava=false)
AC_SUBST(J2RE)
AM_CONDITIONAL(USEJAVA, test x$usejava = xtrue)

AC_ARG_WITH(netx, 
  AC_HELP_STRING([--with-netx=DIR], [use Netx at DIR]), 
  NETX="$withval",
  NETX="$prefix"
)
AC_SUBST(NETX)

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S

DETECT_SVN_REVISION

AC_CONFIG_FILES([
  xml-tools.spec

  Makefile
  lib/Makefile

  syn/Makefile
  syn/dtd/Makefile
  syn/xml/Makefile

  tg/Makefile
  tg/xml/Makefile
  tg/xml-info/Makefile
  tg/dtdinst/Makefile

  sig/Makefile
  sig/dtd/Makefile
  sig/xml/Makefile
  sig/xml-info/Makefile

  pp/Makefile
  pp/xml/Makefile
  pp/dtd/Makefile

  tests/Makefile
  tests/syn/Makefile
  tests/syn/xml/Makefile
  tests/syn/xml/Document/Makefile
  tests/syn/dtd/Makefile
  tests/interpret/Makefile
  tests/str-xml/Makefile
  tests/str-xml-info/Makefile
  tests/str-xml-interpret/Makefile

  trans/Makefile 
  trans/process/Makefile 
  trans/schema/Makefile 
  trans/interpret/Makefile
  trans/meta-explode/Makefile
  trans/str-xml-doc/Makefile
  trans/str-xml-info/Makefile

  xtc/Makefile
])
AC_OUTPUT
