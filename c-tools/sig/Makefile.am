include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = C.str C.rtg
pkgdata_DATA     = C.rtree C.rtg C.rtg-nf

XT_BUILD_DIST    = $(SIGS) $(pkgdata_DATA)
CLEANFILES      += $(wildcard *.dep)

VPATH += $(top_builddist)/syn/

C.rtg : C.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -o $@ -m C 

C.str : C.rtg
	$(STRATEGO_REGULAR)/bin/rtg2sig -i $< -o $@
