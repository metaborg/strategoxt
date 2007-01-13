include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = \
  Stratego.def \
  StrategoStratego.def \
  Stratego-Core.def \
  Stratego-Sugar.def \
  Stratego-Amb.def \
  Stratego-Sugar-in-Stratego.def \
  Stratego-Core-in-Stratego.def \
  StrategoMix.def

TBLS = \
  Stratego.tbl \
  StrategoStratego.tbl \
  Stratego-Core.tbl \
  Stratego-Sugar.tbl \
  Stratego-Sugar-in-Stratego.tbl \
  Stratego-Core-in-Stratego.tbl

sdfdata_DATA = \
  $(TBLS) \
  $(DEFS) \
  StrategoRenamed.sdf \
  $(wildcard *.sdf)			       

EXTRA_DIST     = $(DEFS) StrategoRenamed.sdf StrategoMix.sdf $(wildcard *.sdf) 
CLEANFILES     = $(TBLS) $(wildcard *.dep)
BOOTCLEANFILES = $(DEFS) StrategoRenamed.sdf

PGEN_FLAGS = -m $*

%Renamed.sdf: %.def
	$(SDF_TOOLS)/bin/gen-renamed-sdf-module -i $< -o $@ --main $* --name $*Renamed --prefix Stratego

StrategoMix.sdf : Stratego.def
	$(SDF_TOOLS)/bin/gen-sdf-mix -i $< --main Stratego --name StrategoMix -o $@

StrategoStratego.def : \
  StrategoMix.sdf \
  StrategoStratego.sdf \
  Stratego.def

Stratego.def : \
  Stratego-Sugar.def

Stratego-Sugar.def : \
  Stratego-Core.def \
  Stratego-Sugar.sdf \
  Stratego-Sugar-Signatures.sdf \
  Stratego-Sugar-Modules.sdf \
  Stratego-Sugar-Strategies.sdf \
  Stratego-Sugar-Overlays.sdf \
  Stratego-Sugar-Constants.sdf \
  Stratego-Sugar-Terms.sdf \
  Stratego-Sugar-DynamicRules.sdf \
  Stratego-Sugar-Rules.sdf \
  Stratego-Sugar-Layout.sdf

Stratego-Core.def : \
  Stratego-Core.sdf \
  Stratego-Core-Signatures.sdf \
  Stratego-Core-Modules.sdf \
  Stratego-Core-Strategies.sdf \
  Stratego-Core-Constants.sdf \
  Stratego-Core-Terms.sdf \
  Stratego-Core-Layout.sdf \
  Stratego-Core-Identifiers.sdf	 

Stratego-Amb.def : \
  Stratego.def \
  Stratego-Amb.sdf

Stratego-Sugar-in-Stratego.def : \
  Stratego.def \
  Stratego-Sugar.def \
  Stratego-Sugar-in-Stratego.sdf

Stratego-Core-in-Stratego.def :\
  Stratego.def \
  Stratego-Core.def \
  Stratego-Core-in-Stratego.sdf

