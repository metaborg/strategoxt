include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS   = explode-aterm implode-aterm
pkgdata_DATA   = explode-aterm.str implode-aterm.str

#pkgdata_DATA   = explode-aterm.rtree implode-aterm.rtree

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)

SCFLAGS     = --main io-$*
STRINCLUDES = -I $(top_srcdir)/sig -I $(SRTS)/share/srts

explode_aterm_LDADD = $(SSL_LIBS)
implode_aterm_LDADD = $(SSL_LIBS)
