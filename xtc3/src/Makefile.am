include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = xtc xtc-migrate 
libexec_PROGRAMS = parse-xtd
pkgdata_DATA     = strategoxt-xtc-tools.rtree stratego-xt-xtc-tools.rtree 

SCFLAGS          = --main main-$* $(XTCFLAGS) -O 2

xtc_LDFLAGS         = $(AM_LDFLAGS) -static
xtc_migrate_LDFLAGS = $(AM_LDFLAGS) -static
parse_xtd_LDFLAGS   = $(AM_LDFLAGS) -static

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA) 
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(wildcard *.rtree)

STRINCLUDES    = -I $(top_srcdir)/syn \
		 -I $(top_srcdir)/sig \
		 -I $(top_srcdir)/lib \
		 -I $(top_srcdir)/lib/core \
		 -I $(top_srcdir)/lib/dispatch \
		 -I $(top_srcdir)/lib/trans \
		 -I $(top_srcdir)/lib/io \
		 -I $(top_srcdir)/lib/contract \
		 -I $(top_srcdir)/libraries 
