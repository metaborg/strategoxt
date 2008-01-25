include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS = \
	  -I $(top_srcdir)/lib \
	  -I $(top_builddir)/lib \
	  --main $*-io	

LIB_STRC        = -L$(top_builddir)/lib -L$(top_srcdir)/lib -lstrc

LDADD      = $(LIB_STRC) $(SSL_LIBS)

#strc_LDADD      = $(LIB_STRC) $(SSL_LIBS)

bin_SCRIPTS      = strcflags
bin_PROGRAMS 	 = strc parse-stratego pp-stratego

libexec_PROGRAMS = pack-stratego report-ambs stratego-ensugar \
		   meta-explode stratego2abox stratego-parenthesize


EXTRA_DIST      = $(wildcard *.str) strcflags
CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)
