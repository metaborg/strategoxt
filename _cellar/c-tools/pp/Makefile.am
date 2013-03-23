include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = C.pp C.pp.af C-pretty.pp C-pretty.pp.af
lib_LTLIBRARIES= libc-pp.la
EXTRA_DIST     = C.pp C.pp.af C-pretty.pp C-pretty.pp.af
BOOTCLEANFILES = C.pp.af C-pretty.pp.af
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = c-pp.c c-pp-pretty.c C.pp.af C-pretty.pp.af

libc_pp_la_SOURCES = c-pp.c c-pp-pretty.c
libc_pp_la_LIBADD  = $(STRATEGO_XTC_LIBS)   $(STRATEGO_LIB_LIBS)   $(STRATEGO_RUNTIME_LIBS)   $(ATERM_LIBS)
libc_pp_la_CFLAGS  = $(STRATEGO_XTC_CFLAGS) $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) $(AM_CFLAGS)
libc_pp_la_LDFLAGS = -avoid-version -no-undefined $(AM_LDFLAGS)

c-pp.c: C.pp ../syn/C.def
	$(GPP)/bin/pp2c -i $(srcdir)/C.pp -p ../syn/C.def -n pp_c_0_0 -o c-pp.c

c-pp-pretty.c: C-pretty.pp ../syn/C.def
	$(GPP)/bin/pp2c -i $(srcdir)/C-pretty.pp -p ../syn/C.def -n pp_c_pretty_0_0 \
	  -o c-pp-pretty.c
