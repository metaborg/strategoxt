include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = \
  parse-stratego-xml-doc \
  process-stratego-xml-doc

SCFLAGS = --main main-$*
STRINCLUDES = \
  -I $(top_srcdir)/sig/xml \
  -I $(top_srcdir)/trans/process \
  -I $(STRATEGO_REGULAR)/share/stratego-regular \
  -I $(XTC)/share/xtc 

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)