include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS 	   = pp-aterm
libexec_PROGRAMS = PpTerm

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

SCFLAGS     = --main io-$*
STRINCLUDES = -I $(XTC)/share/xtc \
              -I $(GPP)/share/sdf/gpp \
              -I $(GPP)/share/gpp
