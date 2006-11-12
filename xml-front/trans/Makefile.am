include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = process str-xml-doc str-xml-info 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

libexec_PROGRAMS  = xml-info2data data2xml-doc
SCFLAGS       = --main main-$*

# FIXME: bootstrap problem. The local parse table cannot
# be used in combination with the baseline strc.
STRINCLUDES   = -I $(top_srcdir)/lib \
                -I $(top_srcdir)/sig/xml-info \
                -I $(top_srcdir)/sig/xml \
		-I $(XML_FRONT)/share/sdf/xml-front \
                -I $(top_srcdir)/syn/xml \
                -I $(top_srcdir)/trans/process


LDADD += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)
