include $(wildcard *.dep)
include $(top_srcdir)/Makefile.xt

SCFLAGS     = --main $*
STRINCLUDES = -I $(DOT_TOOLS)/share/sdf/dot-tools \
              -I $(DOT_TOOLS)/share/dot-tools \
              -I $(GRAPH_TOOLS)/share/graph-tools \
              -I $(XTC)/share/xtc

LDADD      += $(SSL_LIBS)

bin_PROGRAMS     = term-to-dot
libexec_PROGRAMS = term-to-adot

CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)
EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)

check_PROGRAMS	 = term-to-adot-test
TESTS            = term-to-adot-test

nodist_term_to_adot_test_SOURCES = term-to-adot-test.c
