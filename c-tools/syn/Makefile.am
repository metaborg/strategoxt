include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS       = C.def C.tbl Stratego-C.def Stratego-C.tbl \
		  Stratego-Stratego-C.def Stratego-Stratego-C.tbl
sdfdata_DATA 	= $(TBLS_DEFS) $(wildcard *.sdf)
BOOTCLEANFILES	= $(TBLS_DEFS)
EXTRA_DIST   	= $(sdfdata_DATA)

SDFINCLUDES  	= -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS   	= -m $*

C.def : C-AbstractDeclarators.sdf C-Constants.sdf C-Declarators.sdf \
		    C-Enumerators.sdf C-Expressions.sdf C-Identifiers.sdf \
		    C-Keywords.sdf C-Lexical.sdf C-ParameterDeclarators.sdf \
		    C-Preprocessor.sdf C-Program.sdf C-Statements.sdf \
		    C-StructsAndUnions.sdf C-Types.sdf C.sdf


Stratego-C.def : Stratego-C.sdf C.def

Stratego-Stratego-C.def : Stratego-Stratego-C.sdf C.def

