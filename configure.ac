AC_INIT([koala-tools],[0.3beta],[mdejonge@cs.uu.nl])
AM_INIT_AUTOMAKE

USE_XT_PACKAGES

dnl commented out koala-pnet-composer because xml-tools changed so much that
dnl koala-pnet-composer needs to be reimplemented.
dnl AC_ARG_WITH(xml-tools,
dnl   AC_HELP_STRING([--with-xml-tools], [use XML-TOOLS at DIR @<:@PREFIX@:>@]), 
dnl   XML_TOOLS="$withval", 
dnl   XML_TOOLS="$prefix"
dnl )
dnl AC_SUBST(XML_TOOLS)

AC_REVISION($Id: configure.in,v 1.8 2003/08/19 13:20:20 mdejonge Exp $)

AC_PROG_CC

AC_PROG_INSTALL

AC_OUTPUT(
	Makefile
	syn/Makefile
	tohtml-koala/Makefile
	trans/Makefile
	trans/shared/Makefile
	trans/koala-imports/Makefile
	trans/koala-imports/data/Makefile
	trans/pack-koala/Makefile
	trans/pack-koala/data/Makefile
	trans/koala-analyze/Makefile
	trans/koala-analyze/data/Makefile
	trans/koala-graph/Makefile
	trans/koala-graph/data/Makefile
	trans/koala-compiler/Makefile
	trans/koala-compiler/data/Makefile
	trans/koala-configure/Makefile
	trans/koala-configure/data/Makefile
	trans/koala-make/Makefile
	trans/koala-make/data/Makefile
	trans/koala-buildorder/Makefile
	trans/koala-buildorder/data/Makefile
	trans/koala-build-composer/Makefile
	trans/koala-build-composer/data/Makefile
	trans/koala-tree-composer/Makefile
	trans/koala-tree-composer/data/Makefile
	trans/koala-wire/Makefile
	trans/koala-wire/data/Makefile
	trans/koala-trans/Makefile
	trans/koala-trans/data/Makefile
	trans/koala-tred/Makefile
	trans/koala-tred/data/Makefile
	trans/koala-graph-composer/Makefile
	trans/koala-graph-composer/data/Makefile
dnl	trans/koala-pnet-composer/Makefile
dnl	trans/koala-pnet-composer/data/Makefile
)
