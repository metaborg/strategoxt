include $(top_srcdir)/Makefile.xt

SDFINCLUDES = -I $(STRATEGO_FRONT)/share/sdf/stratego-front

check: check1 check2 check3 check4

check1 : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop.str -o prop.rtree --verbose 10

check2 : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop2.cr -o prop2.rtree --verbose 10

check3 : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop3.str -o prop3.rtree --verbose 10

check4 : Prop.str
	$(MAKE) clean
	ls
	$(MAKE) PropStratego.def
	$(srcdir)/../parse/parse-stratego -i prop2.cr -o prop2.rtree --verbose 10

CLEANFILES = PropStratego.def PropStratego.tbl $(wildcard *.rtree)

EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.sdf) \
	     $(wildcard *.cr) $(wildcard *.syn)

