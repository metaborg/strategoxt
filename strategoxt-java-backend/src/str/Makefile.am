include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = strj
# libexec_PROGRAMS = s2j

LDADD += $(SSL_LIBS) -lstrc 

STRINCLUDES    = -I $(XTC)/share/xtc -I $(JAVA_FRONT)/share/java-front -I $(STRATEGO_FRONT)/share/stratego-front -I ../../syn

STRCFLAGS      = --main main-$* -O 0 --format-check 0

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.syn) 
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.c) $(wildcard *.o)
BOOTCLEANFILES = $(wildcard *.c) 

XTC_IMPORT = $(JAVA_FRONT_XTC)
LDADD     += $(JAVA_FRONT_LIBS)

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:.
JAVACFLAGS=-J-Xmx256m -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

%.rtg.af : $(JAVA_FRONT)/share/java-front/Java-15.rtg
	parse-rtg -i $< -o $@

%.ctree : %.str
	strc -F --format-check 0 --library -la stratego-lib -i $< -o $@ -O 0

strj.java : %.str
	strj -i $< -o $@ -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc -la org.strategoxt.libstratego_gpp -la org.strategoxt.libstrc -la org.strategoxt.libjava-front

%.java : %.ctree strj
	strj -i $< -o $@ -la org.strategoxt.libstratego_lib

%.class : %.java
	$(JAVAC) $(JAVACFLAGS)j $<

%.run : %.class
	java -client -cp $(CLASSPATH) `basename $< .class`

