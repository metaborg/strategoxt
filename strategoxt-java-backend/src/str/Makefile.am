include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = strj s2j backend-simplify

LDADD += $(SSL_LIBS) -lstrc 

STRINCLUDES    = -I $(XTC)/share/xtc -I $(JAVA_FRONT)/share/java-front -I $(STRATEGO_FRONT)/share/stratego-front -I ../../syn

STRCFLAGS        = --main main-$* -O 0 --format-check 0

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.syn) 
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.c) $(wildcard *.o)
BOOTCLEANFILES = $(wildcard *.c) 

XTC_IMPORT = $(JAVA_FRONT_XTC)

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:../test/java:.
JAVACFLAGS=-J-Xmx256m -cp $(CLASSPATH)

%.rtg.af : $(JAVA_FRONT)/share/java-front/Java-15.rtg
	parse-rtg -i $< -o $@

%.ctree : %.str
	strc -F --library -la stratego-lib -i $< -o $@ -O 0

%.sctree : %.ctree backend-simplify
	backend-simplify -b -i $< -o $@

%.ajava : %.sctree s2j
	s2j -i $< -o $@ -la org.strategoxt.libstratego_lib

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg $(JAVA_FRONT)/share/java-front/Java-15.rtg --vis && exit 1)

%.class : %.java
	javac $(JAVACFLAGS)j $<

%.run : %.class
	java -client -cp $(CLASSPATH) `basename $< .class`

