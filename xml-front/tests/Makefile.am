include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = syn str-xml str-xml-info
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

check_PROGRAMS = xml-aterm-tests
TESTS          = $(check_PROGRAMS)
LDADD         += $(SSL_LIBS)

SCFLAGS       = --main main-$* --dr new
STRINCLUDES   = -I $(top_srcdir)/sig/xml-info 

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

nodist_xml_aterm_tests_SOURCES = xml-aterm-tests.c
