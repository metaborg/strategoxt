include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

LANGUAGE     	= C
TBLS         	= $(LANGUAGE).tbl Stratego-$(LANGUAGE).tbl
DEFS         	= $(LANGUAGE).def Stratego-$(LANGUAGE).def

pkgdata_DATA 	= $(TBLS) $(DEFS) $(wildcard *.sdf)
CLEANFILES   	= $(TBLS) 
BOOTCLEANFILES 	= $(DEFS)
EXTRA_DIST   	= $(TBLS) $(DEFS) $(wildcard *.sdf)

SDFINCLUDES  	= -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS   	= -m $*

