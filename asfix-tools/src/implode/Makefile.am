include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS	= implode-asfix sglri 
pkgdata_DATA 	= implode-asfix.str error-reporting.str
#pkgdata_DATA 	= implode-asfix.str error-reporting.rtree

SCFLAGS = --main $*
STRINCLUDES = \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib \
  -I $(XTC)/share/xtc

LDADD += $(SSL_LIBS)

EXTRA_DIST  	= $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
BOOTCLEANFILES 	= implode-asfix.c sglri.c
CLEANFILES	= $(wildcard *.dep)
