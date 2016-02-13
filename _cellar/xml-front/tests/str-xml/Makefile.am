include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = str-xml-tests
TESTS          = $(check_PROGRAMS)
LDADD         += $(SSL_LIBS)

SCFLAGS       = --main main-$*
STRINCLUDES   = -I $(top_srcdir)/sig/xml \
                -I $(top_srcdir)/syn/xml

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

nodist_str_xml_tests_SOURCES = str-xml-tests.c
