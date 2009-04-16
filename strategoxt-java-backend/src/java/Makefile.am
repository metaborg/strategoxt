include $(top_srcdir)/Makefile.xt

nobase_pkgdata_DATA = org/strategoxt/libstratego_lib.class

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:../test/java:.
JAVACFLAGS=-J-Xmx256m -J-server -J-XX:+UseParallelGC -cp $(CLASSPATH)

org/strategoxt/libstratego_lib.sctree : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../str/backend-simplify
	../str/backend-simplify -i $< -o $@

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis; rm -f $@; exit 1)

org/strategoxt/libstratego_lib.ajava : org/strategoxt/libstratego_lib.sctree ../str/s2j
	../str/s2j -i $< -o $@  -p org.strategoxt --library

org/strategoxt/libstratego_lib.class : org/strategoxt/libstratego_lib.java
	javac $(JAVACFLAGS) $<

.PURPLEPONY:

../str/s2j : .PURPLEPONY
	$(MAKE) -C ../str s2j

../str/backend-simplify : .PURPLEPONY
	$(MAKE) -b -C ../str backend-simplify
