include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

STRINCLUDES = \
  -I $(STRATEGO_FRONT)/share/stratego-front \
  -I $(STRATEGO_FRONT)/share/sdf/stratego-front

noinst_PROGRAMS  = primitives
noinst_DATA      = eval-lib-primitives.str

CLEANFILES 	 = $(wildcard *.dep)
EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) eval-lib-primitives.str

#primitives
eval-lib-primitives.str: primitives
	$(STRC)/bin/pack-stratego -I $(SSL)/share/ssl -i lib -o lib.packed
	./primitives -i lib.packed | $(STRATEGO_FRONT)/bin/pp-stratego --abstract -o $@

BOOTSOURCES = primitives.c

BOOTCLEANFILES = \
  eval-lib-primitives.str \
  eval-lib-primitives.rtree \
  primitives.c
