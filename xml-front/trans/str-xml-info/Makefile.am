include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = \
  process-stratego-xml-info \
  parse-stratego-xml-info

SCFLAGS     = --main main-$* --dr new
STRINCLUDES = -I $(XTC)/share/xtc \
              -I $(top_srcdir)/sig/xml \
              -I $(top_srcdir)/sig/xml-info \
              -I $(top_srcdir)/trans \
              -I $(top_srcdir)/trans/process \
              -I $(STRATEGO_REGULAR)/share/stratego-regular

process_stratego_xml_info_LDADD = $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)