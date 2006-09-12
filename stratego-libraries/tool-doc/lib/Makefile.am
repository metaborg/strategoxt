include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

# Hack for problem with .meta file.
stratego/tool-doc/PrettyPrint.rtree : stratego/tool-doc/PrettyPrint.str
	$(SGLRI) --heuristic-filters on -p $(STRATEGOBOXTBL_UNINSTALLED) -i $< | $(METAEXPLODE) -o $@


nobase_data_DATA = libstratego-tool-doc.rtree
lib_LTLIBRARIES  = libstratego-tool-doc.la
EXTRA_DIST = $(tooldoclib) $(tooldoclib:.str=.rtree) libstratego-tool-doc.rtree
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = libstratego-tool-doc.rtree libstratego-tool-doc.c $(tooldoclib:.str=.rtree)

tooldoclib = stratego-tool-doc.str $(wildcard stratego/tool-doc/*.str)

libstratego_tool_doc_la_SOURCES = libstratego-tool-doc.c
libstratego_tool_doc_la_CFLAGS   = $(AM_CFLAGS)
libstratego_tool_doc_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_tool_doc_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
libstratego_tool_doc_la_LIBADD   =  $(STRATEGO_XTC_UNINSTALLED_LIBS) $(STRATEGO_GPP_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = \
  $(STRATEGO_XTC_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_GPP_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

STRINCLUDES = -I $(top_srcdir)/../gpp/syn/box

libstratego-tool-doc.rtree libstratego-tool-doc.c : $(tooldoclib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c --library -i stratego-tool-doc.str -o libstratego-tool-doc.rtree --verbose 1 $(STRCFLAGS)
	rm libstratego-tool-doc.str
