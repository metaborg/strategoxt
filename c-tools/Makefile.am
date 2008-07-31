include $(top_srcdir)/Makefile.xt

BUILDDIRS         = syn sig pp xtc-tools
TESTSDIRS         = tests

SUBDIRS           = $(BUILDDIRS)
if XT_STAGE_CHECK
SUBDIRS 	       += $(TESTSDIRS)
endif

BOOTCLEAN_SUBDIRS = $(BUILDDIRS) $(TESTSDIRS)
DIST_SUBDIRS      = $(BUILDDIRS) $(TESTSDIRS)
EXTRA_DIST 	  = Makefile.xt c-tools.pc.in svn-revision

ACLOCAL_AMFLAGS = -I ../config

pkgconfig_DATA = c-tools.pc
