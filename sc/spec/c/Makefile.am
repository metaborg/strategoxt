EXTRA_DIST = $(wilcard *.r) ac2c.in

bin_SCRIPTS = s2c canonicalize ac2c

CLEANFILES = $(bin_SCRIPTS) *.dep

SCFLAGS = --main $@ -I ../sig \
	  -I $(CGEN)/share/cgen \
	  -I ../match

C-Format: C-Format.r
	$(SC) $(SCFLAGS) -i $< --main c-format-comp -o $@

TESTS = C-simplify-test canonicalize-test

include $(srcdir)/../make-rules
#include C-Format.dep
#include PP-C.dep
include s2c.dep
include canonicalize-test.dep
