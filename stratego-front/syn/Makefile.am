include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

sdfdata_DATA = \
  Stratego.def \
  StrategoStratego.def \
  Stratego-Amb.def \
  Stratego.tbl \
  StrategoStratego.tbl \
  Stratego-Core.def \
  Stratego-Core.tbl \
  StrategoForTesting.tbl \
  StrategoStrategoForTesting.tbl \
  StrategoRenamed.sdf \
  $(wildcard *.sdf)				       

EXTRA_DIST     = $(sdfdata_DATA)
CLEANFILES     = $(wildcard *.tbl)
BOOTCLEANFILES = $(wildcard *.def) StrategoRenamed.sdf

PGEN_FLAGS = -m $*

%Renamed.sdf: %.def
	$(SDF_TOOLS)/bin/gen-renamed-sdf-module -i $< -o $@ --main $* --name $*Renamed --prefix Stratego

StrategoForTesting.def : \
  StrategoForTesting.sdf \
  Stratego.def \
  Stratego-DynamicRules.sdf

StrategoStrategoForTesting.def : \
  StrategoStrategoForTesting.sdf \
  StrategoForTestingRenamed.sdf \
  StrategoStratego.def

Stratego.def : \
  Stratego.sdf \
  Stratego-Signatures.sdf \
  Stratego-Modules.sdf \
  Stratego-Strategies.sdf \
  Stratego-Overlays.sdf \
  Stratego-Constants.sdf \
  Stratego-Terms.sdf \
  Stratego-Identifiers.sdf \
  Stratego-DynamicRules.sdf \
  Stratego-Rules.sdf \
  Stratego-Layout.sdf

Stratego-Core.def : \
  Stratego-Core.sdf \
  Stratego-Core-Signatures.sdf \
  Stratego-Core-Modules.sdf \
  Stratego-Core-Strategies.sdf \
  Stratego-Core-Constants.sdf \
  Stratego-Core-Terms.sdf \
  Stratego-Core-Layout.sdf \
  Stratego-Identifiers.sdf	 

StrategoStratego.def : \
  StrategoStratego.sdf \
  StrategoRenamed.sdf \
  Stratego.def

Stratego-Amb.def : \
  Stratego.def \
  Stratego-Amb.sdf
