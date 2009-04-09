include $(top_srcdir)/Makefile.xt

TESTFILES   = $(wildcard java/org/strategoxt/compiler/tests/cases/*.str)
JAVAFILES   = $(TESTFILES:.str=.java)
SCTREEFILES = $(TESTFILES:.str=.sctree)
RUNNERFILES = $(TESTFILES:.str=.runner)
CLEANFILES  = $(SCTREEFILES) $(JAVAFILES)

nobase_pkgdata_DATA = $(SCTREEFILES) $(JAVAFILES)

TESTS=$(RUNNERFILES)

# HACK: hardcoded, relative classpath

CLASSPATH=../../../../spoofax/trunk/spoofax/org.spoofax.interpreter.core/bin/:../../../../spoofax/trunk/spoofax/org.spoofax.aterm/bin/:../java:java:.

../str/s2j : .PURPLEPONY
	$(MAKE) -C ../str s2j

../str/backend-simplify : .PURPLEPONY
	$(MAKE) -b -C ../str backend-simplify

%.ctree : %.str
	$(SCOMPILE) -O 0 -F -i $< -o $@

%.sctree : %.ctree ../str/backend-simplify
	../str/backend-simplify -i $< -o $@

%.ajava : %.sctree ../str/s2j
	../str/s2j -i $< -o $@

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis; rm -f $@; exit 1)

%.class : %.java
	javac -J-Xmx256m -J-server -J-XX:MaxInlineSize=128 -J-XX:FreqInlineSize=512 -cp $(CLASSPATH) $<

%.run : %.class
	java -cp $(CLASSPATH) org.strategoxt.compiler.tests.cases.`basename $< .class`

%.runner : %.class
	echo java -cp $(CLASSPATH) org.strategoxt.compiler.tests.cases.`basename $< .class` > $@
	chmod 755 $@

x:
	echo $(TESTFILES)

.PURPLEPONY:

