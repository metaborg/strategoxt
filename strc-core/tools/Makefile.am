include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS = \
	  -I $(top_srcdir)/lib \
	  --main $*-io	

LIB_STRC        = -L$(top_srcdir)/lib -lstrc

LDADD      = $(LIB_STRC) $(SSL_LIBS)

#strc_LDADD      = $(LIB_STRC) $(SSL_LIBS)

bin_PROGRAMS 	 = strc parse-stratego
libexec_PROGRAMS = pack-stratego report-ambs stratego-ensugar

EXTRA_DIST      = $(wildcard *.str)
CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)
EXTRA_DIST 	= $(wildcard *.str)

