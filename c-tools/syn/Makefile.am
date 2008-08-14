include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = C.def Stratego-C.def Stratego-Stratego-C.def Stratego-Sugar-and-C-in-Stratego.def
TBLS = $(DEFS:.def=.tbl)

sdfdata_DATA 	= $(TBLS) $(DEFS) $(call srcwildcard,*.sdf)
XT_BUILD_DIST = $(DEFS)
CLEANFILES	 += $(TBLS) $(wildcard *.dep)
EXTRA_DIST   += $(call srcwildcard,*.sdf)

SDFINCLUDES  	= \
  -I $(top_srcdir)/../stratego-front/syn \
  -I $(top_builddir)/../stratego-front$(CURRENT_STAGE)/syn
PGEN_FLAGS   	= -m $*

# Should consider the dependencies if they have to be built.
C.def : C-AbstractDeclarators.sdf C-Constants.sdf C-Declarators.sdf \
		    C-Enumerators.sdf C-Expressions.sdf C-Identifiers.sdf \
		    C-Keywords.sdf C-Lexical.sdf C-ParameterDeclarators.sdf \
		    C-Preprocessor.sdf C-Program.sdf C-Statements.sdf \
		    C-StructsAndUnions.sdf C-Types.sdf C.sdf


Stratego-C.def : Stratego-C.sdf C.def

Stratego-Stratego-C.def : Stratego-Stratego-C.sdf C.def

Stratego-Sugar-and-C-in-Stratego.def : Stratego-Sugar-and-C-in-Stratego.sdf Stratego-C.def

