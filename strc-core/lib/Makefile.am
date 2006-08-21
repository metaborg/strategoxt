include $(top_srcdir)/Makefile.xt
#include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstrc.rtree
lib_LTLIBRARIES  = libstrc.la
EXTRA_DIST 	 = $(strclib) $(strclib:.str=.rtree) libstrc.rtree
CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = libstrc.rtree libstrc.c $(gpplib:.str=.rtree)

strclib =					\
	strc.str				\
	$(wildcard stratego/strc/*.str)		\
	$(wildcard stratego/strc/front/*.str)	\
	$(wildcard stratego/strc/c/*.str)	\
	$(wildcard stratego/strc/lib/*.str)	\
	$(wildcard stratego/strc/match/*.str)	\
	$(wildcard stratego/strc/opt/*.str)	\
	$(wildcard stratego/strc/pack/*.str)	\
	$(wildcard stratego/strc/parse/*.str)

libstrc_la_SOURCES  = libstrc.c 
libstrc_la_CFLAGS   = $(AM_CFLAGS)
libstrc_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)

libstrc_la_CPPFLAGS = $(STRATEGO_LIB_CFLAGS)			 \
		      $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) \
		      $(STRATEGO_GPP_CFLAGS)

libstrc_la_LIBADD = $(STRATEGO_GPP_LIBS) $(XTC_LIBS)	   \
		    $(STRATEGO_LIB_LIBS)		   \
		    $(STRATEGO_RUNTIME_LIBS) $(ATERM_LIBS)		    

STRINCLUDES      = -I $(top_srcdir)/../stratego-front/syn \
                   -I $(top_srcdir)/../stratego-front/sig \
                   -I $(top_srcdir)/../c-tools/syn        \
                   -I $(top_srcdir)/../c-tools/sig        

STRCFLAGS = 

libstrc.rtree libstrc.c : $(strclib:.str=.rtree)
	$(STRC)/bin/strc -c --library -i strc.str -o libstrc.rtree -O 2 --verbose 1 $(STRCFLAGS)
	rm libstrc.str
