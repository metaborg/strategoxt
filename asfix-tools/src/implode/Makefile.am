include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS	= implode-asfix sglri 
pkgdata_DATA 	= implode-asfix.str 

SCFLAGS = --main $*
STRINCLUDES = \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib \
  -I $(XTC)/share/xtc

EXTRA_DIST  	= $(wildcard *.str) $(wildcard *.meta)
BOOTCLEANFILES 	= implode-asfix.c sglri.c
CLEANFILES	= $(wildcard *.dep)
