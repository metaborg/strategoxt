include $(srcdir)/../make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS		 = data

bin_PROGRAMS 	 = strip-comments   conc-modules   strat-count
libexec_PROGRAMS = strip-comments   conc-modules   strat-count
BOOTCLEANFILES 	 = strip-comments.c conc-modules.c strat-count.c

SCFLAGS     	 = --main $*

EXTRA_DIST 	 = $(wildcard *.str)

