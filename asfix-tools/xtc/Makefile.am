include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	  = visamb implode-asfix sglri
pkgdata_DATA 	  = visamb.pp.af

STRATEGO_SGLR = $(top_srcdir)/libraries/stratego-sglr

STRINCLUDES = \
  -I $(STRATEGO_SGLR)/lib \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib \
  -I $(XTC)/share/xtc

STRCFLAGS = --main main-$*
LDADD    += $(SSL_LIBS)

implode_asfix_LDADD = $(STRATEGO_SGLR)/lib/libstratego-sglr.la $(SSL_LIBS)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = visamb.c visamb.pp.af implode-asfix.c sglri.c
EXTRA_DIST     = $(wildcard *.str) visamb.pp visamb.pp.af
