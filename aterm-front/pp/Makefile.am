include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS     = pp-aterm
libexec_PROGRAMS = PpTerm
LDADD += $(SSL_LIBS)

pkgdata_DATA = pp-aterm-options.rtree ugly-print.rtree

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

SCFLAGS     = --main io-$*
STRINCLUDES = -I $(XTC)/share/xtc \
              -I $(GPP)/share/sdf/gpp \
              -I $(GPP)/share/gpp
