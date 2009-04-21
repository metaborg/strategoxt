include $(top_srcdir)/Makefile.xt

COMPATSTRS    = $(wildcard org/strategoxt/lang/compat/*.str)
COMPATCLASSES = $(COMPATSTRS:.str=.class)

nobase_pkgdata_DATA = \
  org/strategoxt/libstratego_lib.class \
  org/strategoxt/libstratego_xtc.class \
  org/strategoxt/libstratego_sglr.class \
  org/strategoxt/libstratego_rtg.class \
  org/strategoxt/libstratego_gpp.class \
  $(COMPATCLASSES)

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:../test/java:.
JAVACFLAGS=-J-Xmx256m -J-server -J-XX:+UseParallelGC -cp $(CLASSPATH)

org/strategoxt/libstratego_lib.java : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share/stratego-lib -i $< -o $@ -p org.strategoxt --library

org/strategoxt/libstratego-xtc.rtree : $(STRATEGOXT)/share/xtc/stratego-xtc-posix-xsi.rtree
	cp $< $@

org/strategoxt/libstratego_xtc.java : org/strategoxt/libstratego-xtc.rtree ../str/strj
	../str/strj -I $(STRATEGOXT)/share/xtc -i $< -o $@ -p org.strategoxt --library -la org.strategoxt.libstratego_lib -D GetInternalDefaultXtcRepository=None

org/strategoxt/libstratego_sglr.java : $(STRATEGOXT)/share/libstratego-sglr.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ -p org.strategoxt --library -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc

org/strategoxt/libstratego_rtg.java : $(STRATEGOXT)/share/libstratego-rtg.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ -p org.strategoxt --library -la org.strategoxt.libstratego_lib

org/strategoxt/libstratego_gpp.java : $(STRATEGOXT)/share/libstratego-gpp.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ -p org.strategoxt --library -la org.strategoxt.libstratego_lib

org/strategoxt/libstratego_sdf.java : $(STRATEGOXT)/share/libstratego-sdf.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ -p org.strategoxt --library -la org.strategoxt.libstratego_lib

org/strategoxt/libstrc.java : $(STRATEGOXT)/share/libstrc.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ -p org.strategoxt --library -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr

org/strategoxt/lang/compat/jsglr-parser-compat.java : org/strategoxt/lang/compat/jsglr-parser-compat.str ../str/strj
	../str/strj -i $< -o $@ -p org.strategoxt.compat -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr

%.java : %.str ../str/strj
	../str/strj -i $< -o $@ -p org.strategoxt.compat -la org.strategoxt.libstratego_lib


%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis; rm -f $@; exit 1)

%.ajava : %ctree
	../str/s2j -la org.strategoxt.libstratego_lib

%.class : %.java
	javac $(JAVACFLAGS) $<

.PURPLEPONY:

../str/s2j : .PURPLEPONY
	$(MAKE) -C ../str s2j

../str/backend-simplify : .PURPLEPONY
	$(MAKE) -b -C ../str backend-simplify
