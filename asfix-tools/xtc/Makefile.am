include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	  = visamb
pkgdata_DATA 	  = visamb.pp.af

STRINCLUDES     = -I $(XTC)/share/xtc
SCFLAGS         = --main main-$*
LDADD          += $(SSL_LIBS)

CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES  = visamb.c visamb.pp.af 

EXTRA_DIST   	  = $(wildcard *.str) visamb.pp visamb.pp.af
