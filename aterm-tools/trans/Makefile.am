include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = explode-aterm
pkgdata_DATA   = explode-aterm.rtree

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(pkgdata_DATA)

SCFLAGS     = --main io-$*
STRINCLUDES = -I $(top_srcdir)/sig
