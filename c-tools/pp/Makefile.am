include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = C.pp C.pp.af C-pretty.pp C-pretty.pp.af
EXTRA_DIST     = C.pp.af 
BOOTCLEANFILES = C.pp.af

C-pretty.pp : C.pp
	ln -s $< $@

C-pretty.pp.af : C.pp.af
	ln -s $< $@
