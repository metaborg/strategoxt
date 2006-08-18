include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS = -I $(srcdir)/../../../stratego-front/syn/ \
	  -I $(srcdir)/../../../stratego-front/sig/ \
	  -I $(XTC)/share/xtc			    \
	  -I $(srcdir)/../match			    \
	  -I $(srcdir)/../lib			    \
	  -I $(srcdir)/../front			    \
	  -I $(top_srcdir)/lib			    \
	  --main $*-io	

LIB_STRC = -L$(top_srcdir)/lib -lstrc

strc_LDADD      = $(LIB_STRC) $(SSL_LIBS)

bin_PROGRAMS 	= strc

CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= strc.c
EXTRA_DIST 	= $(wildcard *.str)
