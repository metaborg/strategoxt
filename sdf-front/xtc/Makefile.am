include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = parse-sdf-module parse-sdf-definition pp-sdf sdf2text
pkgdata_DATA   = sdf-xtc-tools.rtree sdf-options.rtree

SCFLAGS        = --main io-$*
STRINCLUDES    = -I $(XTC)/share/xtc
LDADD         += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rtree) 
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree) 