include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = C.def Stratego-C.def Stratego-Stratego-C.def
TBLS = C.tbl Stratego-C.tbl Stratego-Stratego-C.tbl

sdfdata_DATA 	= $(TBLS) $(DEFS) $(wildcard *.sdf)
CLEANFILES	= $(TBLS)
BOOTCLEANFILES	= $(DEFS)
EXTRA_DIST   	= $(DEFS) $(wildcard *.sdf)

SDFINCLUDES  	= -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS   	= -m $*

C.def : C-AbstractDeclarators.sdf C-Constants.sdf C-Declarators.sdf \
		    C-Enumerators.sdf C-Expressions.sdf C-Identifiers.sdf \
		    C-Keywords.sdf C-Lexical.sdf C-ParameterDeclarators.sdf \
		    C-Preprocessor.sdf C-Program.sdf C-Statements.sdf \
		    C-StructsAndUnions.sdf C-Types.sdf C.sdf


Stratego-C.def : Stratego-C.sdf C.def

Stratego-Stratego-C.def : Stratego-Stratego-C.sdf C.def

