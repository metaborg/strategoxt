include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = xml.def Stratego-xml.def Stratego-xml-info.def
TBLS = xml.tbl Stratego-xml.tbl  Stratego-xml-info.tbl

sdfdata_DATA   = $(TBLS) $(DEFS) $(wildcard *.sdf)
EXTRA_DIST     = $(DEFS) $(wildcard *.sdf)
CLEANFILES     = $(TBLS)
BOOTCLEANFILES = $(DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

xml.def : xml.sdf xml-attribute.sdf xml-comments.sdf xml-document.sdf \
          xml-external.sdf xml-lexical.sdf xml-names.sdf xml-pi.sdf \
          xml-prolog.sdf xml-text.sdf xml-whitespace.sdf

Stratego-xml.def : xml.def Stratego-xml.sdf

Stratego-xml-info.def : Stratego-xml.def Stratego-xml-info.sdf
