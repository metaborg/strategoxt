include $(top_srcdir)/Makefile.xt

TESTFILES  = $(wildcard java/org/strategoxt/compiler/tests/cases/*.ctree)
JAVAFILES  = $(patsubst %.ctree,%.java,$(TESTFILES))

nobase_pkgdata_DATA = $(JAVAFILES)

%.java : %.ctree
	../str/s2j -i $< | pp-java -o $@

x:
	echo $(TESTFILES)
