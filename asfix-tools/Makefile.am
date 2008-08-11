include $(top_srcdir)/Makefile.xt

BUILDDIRS         = sig lib src xtc
TESTSDIRS         = test

SUBDIRS           = $(BUILDDIRS)
if XT_STAGE_CHECK
SUBDIRS 	       += $(TESTSDIRS)
endif

BOOTCLEAN_SUBDIRS = $(BUILDDIRS) $(TESTSDIRS)
EXTRA_DIST        = Makefile.xt svn-revision config/libtool_execute

ACLOCAL_AMFLAGS = -I ../config
