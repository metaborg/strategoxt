include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = parse-cs

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rtg) 
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) prolog-xtc-tools.rtree dtdinst.artg

SCFLAGS      = --main io-$* 
STRINCLUDES  = -I $(XTC)/share/xtc \
               -I $(top_srcdir)/sig



