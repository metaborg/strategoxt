include $(top_srcdir)/Makefile.xt

TESTFILES  = $(wildcard java/org/strategoxt/compiler/tests/cases/*.ctree)
JAVAFILES  = $(patsubst %.ctree,%.java,$(TESTFILES))
CLEANFILES = $(JAVAFILES)

nobase_pkgdata_DATA = $(JAVAFILES)

%.java : %.ctree ../str/s2j
	../str/backend-simplify -i $< \
		| XTC_REPOSITORY=../../BUILDTIME_XTC ../str/s2j \
		| $(STRATEGOXT)/bin/format-check --rtg $(JAVA_FRONT)/share/java-front/Java-15.rtg \
		| $(JAVA_FRONT)/bin/pp-java -o $@

x:
	echo $(TESTFILES)
