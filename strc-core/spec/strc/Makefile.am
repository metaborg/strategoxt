include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		= -I $(STRATEGO_FRONT)/share/stratego-front \
	  	  -I $(XTC)/share/xtc			    \
	  	  -I $(srcdir)/../sig			    \
	  	  -I $(srcdir)/../match			    \
	  	  -I $(srcdir)/../lib			    \
	  	  -I $(srcdir)/../front			    \
		  -I $(SSL)/share/ssl			    \
	  	  --main $*	--verbose 4

LDADD           += $(SSL_LIBS)

bin_PROGRAMS 	= strc
noinst_PROGRAMS = strc-pre
pkgdata_DATA 	= strc-manual.txt

nodist_strc_SOURCES = strc.c

CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= strc.c

EXTRA_DIST 	= $(wildcard *.str) strc-version.str.in \
		  strc-manual.txt $(man_MANS)

man_MANS 	= strc.1

strc.1 : 
	help2man -n "compile Stratego programs" \
		-m StrategoXT -S "strc $(VERSION)" --no-info ./strc > $@
