include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = Box.str

pkgdata_DATA     = Box.rtg abox-ext.str $(SIGS)
#pkgdata_DATA     = Box.rtg abox-ext.rtree $(subst .str,.rtree,$(SIGS))
libexec_PROGRAMS = abox-format
LDADD += $(SSL_LIBS)

SCFLAGS          = --main io-$*
SDF2RTG_FLAGS    = -m $*

EXTRA_DIST       = abox-ext.str abox-format.str $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = Box.def $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(SIGS) 
#$(pkgdata_DATA)

Box.def :
	ln -s $(top_srcdir)/syn/box/Box.def $@

abox-format.c: Box.str


