include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = parse-cs
pkgdata_DATA   = parse-cs-lib.rtree
LDADD         += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.rtree) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

SCFLAGS      = --main io-$* --dr new
STRINCLUDES  = -I $(XTC)/share/xtc \
               -I $(SRTS)/share/srts \
               -I $(top_srcdir)/sig
