include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		= -I $(srcdir)/../sig		      \
	  	  -I $(srcdir)/../match		      \
	  	  -I $(srcdir)/../lib		      \
	  	  --main $*			      \
	  	  --C-include "\"conf.h\"" -CI "-I.."

bin_PROGRAMS 	= sc
pkgdata_DATA 	= sc.config sc-manual.txt

CLEANFILES 	= $(wildcard *.dep) sc.config
BOOTCLEANFILES 	= sc.c

EXTRA_DIST 	= $(wildcard *.str) sc.config.src sc-manual.txt
INCLUDES  	+= -I ..
