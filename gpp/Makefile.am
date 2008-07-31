include $(top_srcdir)/Makefile.xt

BUILDDIRS         = syn sig tools tools2 tools3
TESTSDIRS         = test

SUBDIRS           = $(BUILDDIRS)
if XT_STAGE_CHECK
SUBDIRS 	       += $(TESTSDIRS)
endif

BOOTCLEAN_SUBDIRS = $(BUILDDIRS) $(TESTSDIRS)
DIST_SUBDIRS      = $(BUILDDIRS) $(TESTSDIRS)
EXTRA_DIST        = Makefile.xt svn-revision

ACLOCAL_AMFLAGS = -I ../config
