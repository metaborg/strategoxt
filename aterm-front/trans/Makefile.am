include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = map-aterm
libexec_PROGRAMS = explode-aterm implode-aterm
pkgdata_DATA     = explode-aterm.str implode-aterm.str

#pkgdata_DATA   = explode-aterm.rtree implode-aterm.rtree

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)

STRCFLAGS     = --main io-$*
STRINCLUDES = -I $(top_srcdir)/sig 

LDADD = $(SSL_LIBS)

