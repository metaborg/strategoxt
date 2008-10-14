include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = C.pp C.pp.af C-pretty.pp C-pretty.pp.af
lib_LTLIBRARIES= libc-pp.la
EXTRA_DIST    += C.pp C-pretty.pp
XT_BUILD_DIST  = C.pp.af C-pretty.pp.af c-pp.c c-pp-pretty.c
CLEANFILES    += $(wildcard *.dep)

libc_pp_la_SOURCES = c-pp.c c-pp-pretty.c
libc_pp_la_LIBADD  = $(STRATEGO_XTC_LIBS)   $(STRATEGO_LIB_LIBS)   $(STRATEGO_RUNTIME_LIBS)   $(ATERM_LIBS)
libc_pp_la_CFLAGS  = $(STRATEGO_XTC_CFLAGS) $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) $(AM_CFLAGS)
libc_pp_la_LDFLAGS = -avoid-version -no-undefined $(AM_LDFLAGS)

c-pp.c: C.pp $(top_builddist)/syn/C.def
	$(PP2C) -i $< -p $(top_builddist)/syn/C.def -n pp_c_0_0 -o c-pp.c

c-pp-pretty.c: C-pretty.pp $(top_builddist)/syn/C.def
	$(PP2C) -i $< -p $(top_builddist)/syn/C.def -n pp_c_pretty_0_0 \
	  -o c-pp-pretty.c
