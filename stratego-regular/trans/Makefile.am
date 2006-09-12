include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = sig sdf2rtg interpret
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
libexec_PROGRAMS  = rtg-reduce rtg-group

STRCFLAGS = --main main-$* 
STRINCLUDES = $(STRATEGO_RTG_STRCFLAGS)

LDADD += $(STRATEGO_RTG_LIBS) $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)
