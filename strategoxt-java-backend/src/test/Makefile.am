include $(top_srcdir)/Makefile.xt

TESTFILES   = $(wildcard java/org/strategoxt/compiler/tests/cases/*.str)
JAVAFILES   = $(TESTFILES:.str=.java)
JTESTFILES  = $(wildcard java/org/strategoxt/compiler/tests/cases/*.java)
SCTREEFILES = $(JTESTFILES:.java=.sctree)
RUNNERFILES = $(JTESTFILES:.java=.runner)
CLEANFILES  = $(SCTREEFILES) $(JAVAFILES)

nobase_pkgdata_DATA = $(SCTREEFILES) $(JAVAFILES)

TESTS=$(RUNNERFILES)

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:../test/java:.
JAVACFLAGS=-J-Xmx256m -J-server -cp $(CLASSPATH)

../str/s2j : .PURPLEPONY
	$(MAKE) -C ../str s2j

../str/backend-simplify : .PURPLEPONY
	$(MAKE) -b -C ../str backend-simplify

%.ctree : %.str
	$(SCOMPILE) -O 0 -F -i $< -o $@

%.sctree : %.ctree ../str/backend-simplify
	../str/backend-simplify -i $< -o $@

%.ajava : %.sctree ../str/s2j
	../str/s2j -i $< -o $@ -la org.strategoxt.libstratego_lib -p org.strategoxt.compiler.tests.cases

java/org/strategoxt/libstratego_lib.sctree : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree
	../str/backend-simplify -i $< -o $@

java/org/strategoxt/libstratego_lib.ajava : java/org/strategoxt/libstratego_lib.sctree
	../str/s2j -i $< -o $@  -p org.strategoxt --library

java/org/strategoxt/libstratego_lib.class : java/org/strategoxt/libstratego_lib.java
	javac $(JAVACFLAGS) $<

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis; rm -f $@; exit 1)

%.class : %.java java/org/strategoxt/libstratego_lib.class
	javac $(JAVACFLAGS) $<

%.run : %.class
	java -ea -cp $(CLASSPATH) org.strategoxt.compiler.tests.cases.`basename $< .class`

%.runner : %.class
	echo java -ea -cp $(CLASSPATH) org.strategoxt.compiler.tests.cases.`basename $< .class` > $@
	chmod 755 $@

x:
	echo $(TESTFILES)

.PURPLEPONY:

