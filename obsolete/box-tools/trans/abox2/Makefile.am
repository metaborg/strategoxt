include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = Abox-2-text Abox-2-html Abox-2-latex
pkgdata_DATA     = boxstyle.css

SCFLAGS          = --main io-$*
STRINCLUDES      = -I $(top_srcdir)/sig/pp-table \
                   -I $(top_srcdir)/trans \
                   -I $(XTC)/share/xtc

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta) boxstyle.css
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)

