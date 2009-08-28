include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = strj
# libexec_PROGRAMS = s2j backend-simplify

nobase_pkgdata_DATA = strj.ctree

STRJSOURCES = $(wildcard *.str) $(wildcard lib/*.str)

LDADD += $(SSL_LIBS) libjava-pp.la -lstrc 

STRINCLUDES    = -I $(XTC)/share/xtc -I $(JAVA_FRONT)/share/java-front -I $(STRATEGO_FRONT)/share/stratego-front -I ../syn

STRCFLAGS      = --main main-$* -O 0 --format-check 0

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.syn) 
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.c) $(wildcard *.o)
BOOTCLEANFILES = $(wildcard *.c) 

XTC_IMPORT = $(JAVA_FRONT_XTC)
LDADD     += $(JAVA_FRONT_LIBS)

# HACK: hardcoded, relative classpath

BASEPATH=../../../spoofax/trunk/spoofax
SPCLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin:$(BASEPATH)/../../branches/spoofax-recovery/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar
CLASSPATH=.:$(SPCLASSPATH):../java/runtime:../java/lib:../java/compiler
JAVACFLAGS=-J-Xmx256m -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

%.rtg.af : $(JAVA_FRONT)/share/java-front/Java-15.rtg
	parse-rtg -i $< -o $@

%.ctree : %.str
	strc -F --format-check 0 --library -la stratego-lib -i $< -o $@ -O 0

%.str : %.astr
	aster -i $< -o $@

strj$(exeext) : $(STRJSOURCES:.str=.rtree) libjava-pp.la

strj.ctree : strj.rtree $(STRJSOURCES:.str=.rtree) strj
	$(SCOMPILE) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) -i $< -o $@ -F -m main-strj

strj.java : strj.ctree strj
	./strj -i $< -o $@ -la stratego-lib -la stratego-xtc -la stratego-gpp -la strc -la java-front -m main-strj

%.java : %.str strj
	./strj -i $< -o $@ --verbose 2 -la stratego-lib -la java-front

%.class : %.java
	$(JAVAC) $(JAVACFLAGS) $<

%.run : %.class
	java -client -cp $(CLASSPATH) `basename $< .class`

%.crun : %.str
	strc -la strc -la stratego-lib -i $<
	`dirname $<`/`basename $< .str`

## fast C-based pretty-printer

lib_LTLIBRARIES = libjava-pp.la 

libjava_pp_la_SOURCES = java-pp.c
libjava_pp_la_LIBADD  = $(STRATEGO_XTC_LIBS)   $(STRATEGO_LIB_LIBS)   $(STRATEGO_RUNTIME_LIBS)   $(ATERM_LIBS)
libjava_pp_la_CFLAGS  = $(STRATEGO_XTC_CFLAGS) $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) $(AM_CFLAGS)
libjava_pp_la_LDFLAGS = -avoid-version -no-undefined $(AM_LDFLAGS)

