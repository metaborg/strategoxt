include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pptables    = rtg.pp
pptables_af = rtg.pp.af

pkgdata_DATA   = $(pptables_af)
EXTRA_DIST     = $(pptables) $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(pptables_af) $(wildcard *.c) $(wildcard *.rtree)

SCFLAGS      = --main main-$*
STRINCLUDES  = -I $(top_srcdir)/sig
LDADD       += $(SSL_LIBS)
