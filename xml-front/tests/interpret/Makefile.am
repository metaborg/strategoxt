include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = 
# TODO: interpret-tests
TESTS          = $(check_PROGRAMS)

SCFLAGS       = --main io-$*
STRINCLUDES   = -I $(prefix)/share/xml-tools \
                -I $(XTC)/share/xtc

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rtg)  $(wildcard *.rhg)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)