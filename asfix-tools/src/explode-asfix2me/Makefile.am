include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS 	= explode-asfix2me
SCFLAGS          = --main $*
STRINCLUDES = \
  -I $(top_srcdir)/lib \
  -I $(top_srcdir)/sig \
  -I $(SDF_FRONT)/share/sdf-front
LDADD += $(SSL_LIBS)

EXTRA_DIST  	= explode-asfix2me.str asfix2me.str
BOOTCLEANFILES 	= explode-asfix2me.c
CLEANFILES	= $(wildcard *.dep)
