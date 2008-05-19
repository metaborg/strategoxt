include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

libexec_PROGRAMS = cgen-aterm

STRCFLAGS           = --main main-$* $(STRATEGO_UNINSTALLED_STRCFLAGS)
cgen_aterm_LDADD    = $(STRATEGO_UNINSTALLED_LIBS)
cgen_aterm_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) \
  -I $(top_srcdir)/lib/native

EXTRA_DIST     = cgen-aterm.rtree $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

cgen-aterm.c : cgen-aterm.rtree
	$(STRC_UNINSTALLED) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) -i $< -o $@ -c
