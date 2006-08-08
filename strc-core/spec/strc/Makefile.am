include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS = -I $(srcdir)/../../../stratego-front/syn/ \
	  -I $(srcdir)/../../../stratego-front/sig/ \
	  -I $(XTC)/share/xtc			    \
	  -I $(srcdir)/../match			    \
	  -I $(srcdir)/../lib			    \
	  -I $(srcdir)/../front			    \
	  --main $*	

LDADD          += $(SSL_LIBS)

bin_PROGRAMS 	= strc

CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= strc.c
EXTRA_DIST 	= $(wildcard *.str)
