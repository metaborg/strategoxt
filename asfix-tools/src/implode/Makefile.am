include $(top_srcdir)/Makefile.stratego
include $(wildcard *.dep)

SUBDIRS      = data

#STRATEGO_PRG = implode-asfix

bin_PROGRAMS	= implode-asfix
libexec_SCRIPTS = implode-asfix

implode_asfix_SOURCES = implode-asfix.c

pkgdata_DATA = implode-asfix.str 

TESTS        = implode-asfix-test

EXTRA_DIST  = $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS     = -I $(srcdir)/../asfix --main $*

BOOTCLEANFILES = implode-asfix.c
