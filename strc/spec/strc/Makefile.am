include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		= -I $(STRATEGO_FRONT)/share/stratego-front \
	  	  -I $(XTC)/share/xtc			    \
	  	  -I $(srcdir)/../sig			    \
	  	  -I $(srcdir)/../match			    \
	  	  -I $(srcdir)/../lib			    \
	  	  -I $(srcdir)/../front			    \
		  -I $(SSL)/share/ssl			    \
	  	  --main $*	

bin_PROGRAMS 	= strc
pkgdata_DATA 	= strc-manual.txt

CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= strc.c

EXTRA_DIST 	= $(wildcard *.str) \
		  strc-manual.txt $(man_MANS)

man_MANS 	= strc.1

strc.1 : 
	help2man -n "compile Stratego programs" \
		-m StrategoXT -S "strc $(VERSION)" --no-info ./strc > $@
