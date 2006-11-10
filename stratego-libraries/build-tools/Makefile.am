include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

libexec_PROGRAMS = cgen-aterm

STRCFLAGS           = --main main-$* $(STRATEGO_UNINSTALLED_STRCFLAGS)
SCOMPILE            = $(STRC_UNINSTALLED)
cgen_aterm_LDADD    = $(STRATEGO_UNINSTALLED_LIBS)
cgen_aterm_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) -I $(top_srcdir)/runtime/lib -I $(top_builddir)/runtime/lib/srts -I $(top_srcdir)/lib/native

EXTRA_DIST     = cgen-aterm.rtree $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

cgen-aterm.c : cgen-aterm.rtree
	$(STRC_UNINSTALLED) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) -i $< -o $@ -c
