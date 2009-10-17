include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = strj
# libexec_PROGRAMS = s2j backend-simplify

nobase_pkgdata_DATA = strj.ctree

STRJSOURCES = $(wildcard *.str) $(wildcard lib/*.str)

LDADD += $(SSL_LIBS) libjava-pp.la -lstrc 

STRINCLUDES    = -I $(XTC)/share/xtc -I $(JAVA_FRONT)/share/java-front -I $(STRATEGO_FRONT)/share/stratego-front -I ../syn

STRJ_VERSION=$(VERSION) based on `$(STRATEGOXT)/bin/strc --version | head -n1 | sed 's/ (revision \(.*\))/r\1/'`

STRCFLAGS      = --main main-$* -O 0 --format-check 0

DEFS += -DSTRJ_VERSION_TERM\(\)=\(\(ATerm\)\ ATmakeString\(\""$(STRJ_VERSION)"\"\)\)

#  -D SVN_REVISION_TERM=\"$(SVN_REVISION)\" -D STRC_SYSTEM_LDFLAGS=\"\" -D STRC_SYSTEM_CFLAGS=\"\"

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard lib/*.str) $(wildcard lib/*.meta)
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.o) # $(wildcard *.c)
BOOTCLEANFILES = $(wildcard *.c) 

XTC_IMPORT = $(JAVA_FRONT_XTC)
LDADD     += $(JAVA_FRONT_LIBS)

CLASSPATH=.:../java/spoofax-libs.jar:../java/bin:../java/strategoxt.jar
JAVACFLAGS=-J-Xmx256m -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

%.rtg.af : $(JAVA_FRONT)/share/java-front/Java-15.rtg
	parse-rtg -i $< -o $@

%.ctree : %.str
	strc -F --format-check 0 --library -la stratego-lib -i $< -o $@ -O 0

%.str : %.astr
	aster -i $< -o $@

strj.c : $(STRJSOURCES:.str=.rtree)

strj$(exeext) : $(STRJSOURCES:.str=.rtree) libjava-pp.la

strj.ctree : strj.rtree $(STRJSOURCES:.str=.rtree) strj
	$(SCOMPILE) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) -i $< -o $@ -F -m main-strj

strj.java : strj.ctree strj
	./strj -i $< -o $@ -la stratego-lib -la stratego-xtc -la stratego-gpp -la strc -la java-front -m main-strj

strj_parallel.java : strj-parallel.str strj
	strj -la org.strategoxt.strj -la stratego-parallel -i strj-parallel.str

%.java : %.str strj
	./strj -i $< -o $@ --verbose 2 -la stratego-lib -la java-front -la stratego-sglr

%.class : %.java
	$(JAVAC) $(JAVACFLAGS) $<

%.run : %.class
	java -client -cp $(CLASSPATH) `basename $< .class`

%.crun : %.str
	strc -la strc -la stratego-lib -la stratego-sglr -i $<
	`dirname $<`/`basename $< .str`

## fast C-based pretty-printer

lib_LTLIBRARIES = libjava-pp.la 

libjava_pp_la_SOURCES = java-pp.c
libjava_pp_la_LIBADD  = $(STRATEGO_XTC_LIBS)   $(STRATEGO_LIB_LIBS)   $(STRATEGO_RUNTIME_LIBS)   $(ATERM_LIBS)
libjava_pp_la_CFLAGS  = $(STRATEGO_XTC_CFLAGS) $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) $(AM_CFLAGS)
libjava_pp_la_LDFLAGS = -avoid-version -no-undefined $(AM_LDFLAGS)

