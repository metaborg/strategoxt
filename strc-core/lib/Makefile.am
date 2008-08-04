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
	$(call srcwildcard,stratego/strc/*.str)	\
	$(call srcwildcard,stratego/strc/front/*.str)	\
	$(call srcwildcard,stratego/strc/c/*.str)	\
	$(call srcwildcard,stratego/strc/lib/*.str)	\
	$(call srcwildcard,stratego/strc/match/*.str)	\
	$(call srcwildcard,stratego/strc/opt/*.str)	\
	$(call srcwildcard,stratego/strc/pack/*.str)	\
	$(call srcwildcard,stratego/strc/pp/*.str)	\
	$(call srcwildcard,stratego/strc/parse/*.str)	\
	$(call srcwildcard,stratego/strc/strc/*.str)	\
	$(call srcwildcard,stratego/strc/model/*.str)	\
	stratego/strc/pp/stratego-parenthesize.str

libstrc_la_SOURCES  = libstrc.c libstrc-native.c
libstrc_la_CFLAGS   = $(AM_CFLAGS) -O0
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
  $(top_builddir)/../c-tools$(CURRENT_STAGE)/pp/libc-pp.la

STRCFLAGS= \
  $(STRATEGO_GPP_STRCFLAGS) \
  $(STRATEGO_RTG_STRCFLAGS) \
  $(STRATEGO_XTC_STRCFLAGS) \
  $(STRATEGO_LIB_STRCFLAGS) \
  $(STRATEGO_RUNTIME_STRCFLAGS)


STRINCLUDES = \
  -I $(top_srcdir)/lib \
  -I $(top_builddir)/lib \
  -I $(top_builddir)/../stratego-front$(CURRENT_STAGE)/syn \
  -I $(top_builddir)/../stratego-front$(CURRENT_STAGE)/sig \
  -I $(top_builddir)/../c-tools$(CURRENT_STAGE)/syn \
  -I $(top_builddir)/../c-tools$(CURRENT_STAGE)/sig \
  -I $(GPP)/share/sdf/gpp


STRCFLAGS =

# stratego/strc/parse/Stratego.tbl
libstrc.rtree libstrc.c : $(strclib:.str=.rtree) 
	$(SCOMPILE) -c --library -i $(srcdir)/strc.str -o libstrc.rtree -O 2 --verbose 1 $(STRCFLAGS) $(STRINCLUDES)
	rm libstrc.str

# stratego/strc/parse/Stratego.tbl
libstrc.ctree : $(strclib:.str=.rtree) 
	$(SCOMPILE) -F -c --library -i $(srcdir)/strc.str -o libstrc.ctree -O 2 --verbose 1 $(STRCFLAGS) $(STRINCLUDES)

# stratego/strc/parse/Stratego.tbl : ../../stratego-front/syn/Stratego.tbl
# 	mkdir -p $(top_builddir)/lib/stratego/strc/parse
# 	cp $< $@

stratego/strc/pp/stratego-parenthesize.str : $(top_builddir)/../stratego-front$(CURRENT_STAGE)/syn/Stratego.def
	mkdir -p $(top_builddir)/lib/stratego/strc/pp
	XTC_REPOSITORY=$(SDF_FRONT)/share/strategoxt/XTC \
	$(SDF_TOOLS)/bin/sdf2parenthesize -i $< -o $@ -m Stratego --omod stratego-parenthesize --lang Stratego
