include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Makefile.xml-tools
include $(wildcard *.dep) 


check_PROGRAMS =
# str-xml-interpret-tests TODO: enable
TESTS          =
# str-xml-interpret-tests TODO: enable

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(XTC)/share/xtc 

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.strxml2)
CLEANFILES     = $(wildcard *.dep) $(wildcard *.rtree)
BOOTCLEANFILES = $(wildcard *.c)

# RHGNF = Exp-choice.rhg-nf

# str-xml-interpret-tests.c : interpret-xml.rtree Exp-choice.str
# interpret-xml.rtree : $(RHGNF)

# Exp-choice.str:
# 	$(STRATEGO_REGULAR)/bin/rtg2sig -i $(top_srcdir)/tests/interpret/Exp-choice.rhg -o $@

# Exp-choice.rhg:
# 	ln -s $(top_srcdir)/tests/interpret/$@ $@
