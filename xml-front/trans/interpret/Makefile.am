include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = xml-info2irhg
libexec_PROGRAMS = process-stratego-xml-interpret

SCFLAGS       = --main main-$*
STRINCLUDES   = -I $(STRATEGO_REGULAR)/share/stratego-regular \
                -I $(XTC)/share/xtc \
                -I $(top_srcdir)/lib \
                -I $(top_srcdir)/sig/xml-info \
                -I $(top_srcdir)/trans/str-xml-info

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)