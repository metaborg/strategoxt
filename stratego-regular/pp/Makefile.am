include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = rhg-ppfix rtg-ppfix

pptables    = rhg.pp.af rhg.pp
pptables_af = rtg.pp.af rhg.pp.af

pkgdata_DATA   = $(pptables_af) regexp-parenthesize.rtree
EXTRA_DIST     = $(pptables) $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(pptables_af) $(wildcard *.c) $(wildcard *.rtree)

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/sig
