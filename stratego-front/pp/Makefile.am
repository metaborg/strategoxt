include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

LDADD += $(SSL_LIBS)

CLEANFILES 	=  $(wildcard *.dep)

SCFLAGS 	= --main $* $(XTCFLAGS)

PPS = $(call srcwildcard,*.pp)
ALL_PPS = $(PPS) $(PPS:-pretty.pp=.pp)

pkgdata_DATA 	= $(ALL_PPS) $(ALL_PPS:=.af)
XT_BUILD_DIST = $(pkgdata_DATA)


VPATH += $(top_builddist)/syn/
