include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = sig sdf2rtg interpret
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS = rtg2dfta rtg-normalize
libexec_PROGRAMS  = rtg-reduce rtg-group 

STRCFLAGS = --main main-$* 
STRINCLUDES = $(STRATEGO_RTG_STRCFLAGS)


LOCAL_STRATEGO_RTG_LIBS = ../../stratego-libraries/rtg/lib/libstratego-rtg.la

LDADD += $(STRATEGO_RTG_LIBS) $(SSL_LIBS)

EXTRA_DIST     = $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)
