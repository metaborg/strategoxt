include $(top_srcdir)/Makefile.xt
#include $(wildcard *.dep)

libexec_PROGRAMS = s2j backend-simplify

LDADD += $(SSL_LIBS) -lstrc 

STRINCLUDES    = -I $(XTC)/share/xtc -I $(JAVA_FRONT)/share/java-front -I $(STRATEGO_FRONT)/share/stratego-front -I ../../syn

SCFLAGS        = --main io-$* -O 0

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.syn) 
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.c) $(wildcard *.o)
BOOTCLEANFILES = $(wildcard *.c) 

# command-line testing

CLASSPATH=../../../../spoofax/trunk/spoofax/org.spoofax.interpreter.core/bin/:../../../../spoofax/trunk/spoofax/org.spoofax.aterm/bin/:../java:.

s2j.c : s2j.str $(wildcard *.str) $(wildcard lib/*.str)

%.ctree : %.str
	strc -F --library -la stratego-lib -i $< -o $@

%.sctree : %.ctree backend-simplify
	backend-simplify -i $< -o $@

%.ajava : %.sctree s2j
	s2j -i $< -o $@

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis && exit 1)

%.class : %.java
	javac -cp $(CLASSPATH) $<

%.run : %.class
	mkdir -p /tmp/org/strategoxt/compiler/tests/cases
	cp *.class /tmp/org/strategoxt/compiler/tests/cases
	java -cp $(CLASSPATH):/tmp org.strategoxt.compiler.tests.cases.`basename $< .class`

