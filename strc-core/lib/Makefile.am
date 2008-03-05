include $(top_srcdir)/Makefile.xt
#include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstrc.rtree libstrc.ctree
lib_LTLIBRARIES  = libstrc.la
EXTRA_DIST 	 = $(strclib) $(strclib:.str=.rtree) $(nobase_data_DATA)
CLEANFILES 	 = $(wildcard *.dep) # stratego/strc/parse/Stratego.tbl
BOOTCLEANFILES 	 = libstrc.rtree libstrc.c $(gpplib:.str=.rtree) # stratego/strc/parse/Stratego.tbl

strclib =						\
	strc.str					\
	$(wildcard $(srcdir)/stratego/strc/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/front/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/c/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/lib/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/match/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/opt/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/pack/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/pp/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/parse/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/strc/*.str)	\
	$(wildcard $(srcdir)/stratego/strc/model/*.str)	\
	stratego/strc/pp/stratego-parenthesize.str

libstrc_la_SOURCES  = libstrc.c libstrc-native.c
libstrc_la_CFLAGS   = $(AM_CFLAGS)
libstrc_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)

libstrc_la_CPPFLAGS = $(STRATEGO_LIB_CFLAGS)			 \
		      $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) \
		      $(STRATEGO_GPP_CFLAGS)

libstrc_la_LIBADD = \
  $(STRATEGO_GPP_LIBS) \
  $(STRATEGO_RTG_LIBS) \
  $(STRATEGO_XTC_LIBS) \
  $(STRATEGO_LIB_LIBS) \
  $(STRATEGO_RUNTIME_LIBS) \
  $(ATERM_LIBS)	\
  $(top_builddir)/../c-tools/pp/libc-pp.la

STRINCLUDES      = \
                   -I $(top_srcdir)/lib                     \
                   -I $(top_builddir)/lib                   \
		   -I $(top_srcdir)/../stratego-front/syn   \
                   -I $(top_srcdir)/../stratego-front/sig   \
                   -I $(top_srcdir)/../c-tools/syn          \
                   -I $(top_srcdir)/../c-tools/sig          \
		   -I $(top_builddir)/../stratego-front/syn \
                   -I $(top_builddir)/../stratego-front/sig \
                   -I $(top_builddir)/../c-tools/syn        \
                   -I $(top_builddir)/../c-tools/sig        \
	           -I $(GPP)/share/sdf/gpp	


STRCFLAGS =

# stratego/strc/parse/Stratego.tbl
libstrc.rtree libstrc.c : $(strclib:.str=.rtree) 
	$(STRC)/bin/strc -c --library -i $(srcdir)/strc.str -o libstrc.rtree -O 2 --verbose 1 $(STRCFLAGS) $(STRINCLUDES)
	rm libstrc.str

# stratego/strc/parse/Stratego.tbl
libstrc.ctree : $(strclib:.str=.rtree) 
	$(STRC)/bin/strc -F -c --library -i $(srcdir)/strc.str -o libstrc.ctree -O 2 --verbose 1 $(STRCFLAGS) $(STRINCLUDES)

# stratego/strc/parse/Stratego.tbl : ../../stratego-front/syn/Stratego.tbl
# 	mkdir -p $(top_builddir)/lib/stratego/strc/parse
# 	cp $< $@

stratego/strc/pp/stratego-parenthesize.str : $(top_builddir)/../stratego-front/syn/Stratego.def
	mkdir -p $(top_builddir)/lib/stratego/strc/pp
	$(SDF_TOOLS)/bin/sdf2parenthesize -i $< -o $@ -m Stratego --omod stratego-parenthesize --lang Stratego
