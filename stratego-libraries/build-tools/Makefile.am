include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

libexec_PROGRAMS = cgen-aterm

STRCFLAGS           = --main main-$* $(STRATEGO_UNINSTALLED_STRCFLAGS)
SCOMPILE            = $(STRC_UNINSTALLED)
cgen_aterm_LDADD    = $(STRATEGO_UNINSTALLED_LIBS)
cgen_aterm_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

