include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

treegrammars =					\
  Stratego.rtg					\
  Stratego-Amb.rtg				\
  Stratego-Core.rtg				\
  Stratego-Sugar.rtg				\
  Stratego-Sugar-Cong.rtg			\
  Stratego-Sugar-HL.rtg				\
  Stratego-Core-Cong.rtg			\
  Stratego-Sugar-1.rtg				\
  Stratego-Sugar-2.rtg				\
  Stratego-Sugar-3.rtg				\
  Stratego-Sugar-4.rtg				\
  Stratego-Sugar-5.rtg

rtg_nfs = $(subst .rtg,.rtg-nf,$(treegrammars))
sigs = $(subst .rtg,.str,$(treegrammars))

autogensignatures =				\
  $(treegrammars)				\
  $(rtg_nfs)					\
  $(sigs)

staticsignatures =				\
  Stratego-MetaTransition.str			\
  Stratego-Sugar-MetaTransition.str

signatures = $(autogensignatures) $(staticsignatures)

CLEANFILES	= $(wildcard *.atree)
BOOTCLEANFILES	= $(autogensignatures) $(wildcard *.rtree)

pkgdata_DATA    = $(signatures:.str=.rtree)
EXTRA_DIST      = \
  $(call srcwildcard,*.rtg-script) \
  Cong.rtg \
  $(call srcwildcard,*.str) \
  $(wildcard *.rtree) \
  $(pkgdata_DATA)

VPATH += $(top_builddir)/syn/ $(top_srcdir)/syn/

$(autogensignatures) : Stratego.def Stratego-Core.def Stratego-Sugar.def Stratego-Amb.def

%.rtg : %.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m $* -o $@

%.str : %.rtg
	$(STRATEGO_REGULAR)/bin/rtg2sig -i $< -o $@

%.rtg : $(srcdir)/%.rtg-script Stratego-Sugar.rtg $(srcdir)/Cong*.rtg
	$(STRATEGO_REGULAR)/bin/rtg-script -i $< -o $@ -I $(srcdir)

Stratego-Sugar-2.rtg : Stratego-Sugar-1.rtg
Stratego-Sugar-3.rtg : Stratego-Sugar-2.rtg
Stratego-Sugar-4.rtg : Stratego-Sugar-3.rtg
