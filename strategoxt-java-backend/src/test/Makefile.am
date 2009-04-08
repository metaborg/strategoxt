include $(top_srcdir)/Makefile.xt

TESTFILES  = $(wildcard java/org/strategoxt/compiler/tests/cases/*.ctree)
JAVAFILES  = $(patsubst %.ctree,%.java,$(TESTFILES))
CLEANFILES = $(JAVAFILES)

nobase_pkgdata_DATA = $(JAVAFILES)

TESTS=$(TESTFILES:.ctree=.runner)

# HACK: hardcoded, relative classpath

CLASSPATH=../../../../spoofax/trunk/spoofax/org.spoofax.interpreter.core/bin/:../../../../spoofax/trunk/spoofax/org.spoofax.aterm/bin/:../java:.

../str/s2j : .PURPLEPONY
	$(MAKE) -C ../str s2j

%.sctree : %.ctree ../str/backend-simplify
	../str/backend-simplify -i $< -o $@

%.ajava : %.sctree ../str/s2j
	../str/s2j -i $< -o $@

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis && exit 1)

%.class : %.java
	javac -cp $(CLASSPATH) $<

%.run : %.class
	java org.strategoxt.compiler.tests.cases.`basename $< .class`

%.runner : %.class
	echo java org.strategoxt.compiler.tests.cases.`basename $< .class` > $@
	chmod 755 $@

x:
	echo $(TESTFILES)

.PURPLEPONY:

