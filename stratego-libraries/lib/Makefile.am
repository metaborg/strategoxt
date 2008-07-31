include $(top_srcdir)/Makefile.xt

BUILDDIRS         = native spec ssl-compat
TESTSDIRS         = tests

SUBDIRS           = $(BUILDDIRS)
if XT_STAGE_CHECK
SUBDIRS 	       += $(TESTSDIRS)
endif

BOOTCLEAN_SUBDIRS = $(BUILDDIRS) $(TESTSDIRS)
