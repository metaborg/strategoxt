include $(top_srcdir)/Makefile.xt

SUBDIRS           = syn sig pp trans xtc-tools tohtml
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = bootstrap Makefile.xt make_rules.tests autoxt.m4

ACLOCAL_AMFLAGS = -I .

# Run-time dependencies
# XTC_IMPORT = $(ASFIX_TOOLS)/share/asfix-tools/XTC
# graphviz