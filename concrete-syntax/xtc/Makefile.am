include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = parse-cs
pkgdata_DATA   = parse-cs-lib.rtree
LDADD         += $(SSL_LIBS)

EXTRA_DIST     = $(call srcwildcard,*.str) $(wildcard *.rtree) $(call srcwildcard,*.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) parse-cs-lib.rtree

SCFLAGS      = --main io-$* 
STRINCLUDES  = -I $(XTC)/share/xtc 
