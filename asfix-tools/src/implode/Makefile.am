include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS	= implode-asfix sglri 
libexec_SCRIPTS = implode-asfix sglri

sglri.o		: xtc-conf.h 
implode-asfix.o	: xtc-conf.h 

pkgdata_DATA 	= implode-asfix.str 

TESTS        	= implode-asfix-test

EXTRA_DIST  	= $(wildcard *.str) $(wildcard *.meta)

SCFLAGS     	= -I $(srcdir)/../asfix --main $* $(XTCFLAGS)

BOOTCLEANFILES 	= implode-asfix.c sglri.c

CLEANFILES	= $(wildcard *.dep)
