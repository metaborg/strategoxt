include $(top_srcdir)/Makefile.xt

pkgdata_DATA=.ALLCLASSES strategoxt.jar

RUNTIMEJAVAS = \
  $(wildcard runtime/org/strategoxt/*.java) \
  $(wildcard runtime/org/strategoxt/lang/*.java) \
  $(wildcard runtime/org/strategoxt/lang/compat/*.java) \
  $(wildcard runtime/org/strategoxt/lang/compat/sglr/*.java) \
  $(wildcard runtime/org/strategoxt/lang/terms/*.java) \
  $(wildcard runtime/org/strategoxt/lang/parallel/*.java) \
  $(wildcard runtime/org/strategoxt/lang/parallel/*/*.java) \
  runtime/org/strategoxt/lang/compat/override/jsglr_parser/Main.java \
  runtime/org/strategoxt/lang/compat/override/jsglr_parser_compat/Main.java \
  runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat/Main.java \
  runtime/org/strategoxt/lang/compat/override/performance_tweaks/Main.java \
  runtime/org/strategoxt/lang/compat/override/xtc_compat/Main.java \
  runtime/org/strategoxt/lang/compat/override/strc_compat/Main.java

COMPILERJAVAS = \
  compiler/org/strategoxt/strj/Main.java

LIBRARYJAVAS = \
  lib/org/strategoxt/stratego_lib/Main.java \
  lib/org/strategoxt/stratego_xtc/Main.java \
  lib/org/strategoxt/stratego_sglr/Main.java \
  lib/org/strategoxt/stratego_gpp/Main.java \
  lib/org/strategoxt/stratego_rtg/Main.java \
  lib/org/strategoxt/stratego_aterm/Main.java \
  lib/org/strategoxt/stratego_sdf/Main.java \
  lib/org/strategoxt/stratego_tool_doc/Main.java \
  lib/org/strategoxt/strc/Main.java \
  lib/org/strategoxt/java_front/Main.java

nobase_pkgdata_DATA = \
  runtime/org/strategoxt/lang/parallel/stratego_parallel/libstratego-parallel.rtree \
  $(LIBRARYJAVAS) $(COMPILERJAVAS) .ALLCLASSES

EXTRA_DIST=\
  $(wildcard runtime/org/strategoxt/*.java) \
  $(wildcard runtime/org/strategoxt/*/*.java) \
  $(wildcard runtime/org/strategoxt/*/*/*.java) \
  $(wildcard runtime/org/strategoxt/*/*/*/*.java) \
  $(wildcard runtime/org/strategoxt/*/*/*/*/*.java) \
  $(wildcard runtime/org/strategoxt/*/*/*/*/*/*.java) \
  $(wildcard runtime/org/strategoxt/*.str) \
  $(wildcard runtime/org/strategoxt/*/*.str) \
  $(wildcard runtime/org/strategoxt/*/*/*.str) \
  $(wildcard runtime/org/strategoxt/*/*/*/*.str) \
  $(wildcard runtime/org/strategoxt/*/*/*/*/*.str) \
  $(wildcard runtime/org/strategoxt/*/*/*/*/*/*.str) \
  runtime/org/strategoxt/lang/parallel/stratego_parallel/libstratego-parallel.rtree \
  spoofax-libs.jar \
  META-INF/MANIFEST.MF

CLEANFILES = \
  $(LIBRARYJAVAS) $(COMPILERJAVAS) \
  runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat.rtree \
  lib/org/strategoxt/stratego-xtc.rtree \
  .ALLCLASSES
  
clean :
	rm -rf bin/* lib/org/strategoxt/*

SPOOFAX=../../../spoofax/trunk/spoofax
CLASSPATH=runtime:lib:compiler:spoofax-libs.jar:.
JAVACFLAGS=-J-Xmx512m -J-Xms300m -J-server -J-XX:+UseParallelGC -cp $(CLASSPATH) -source 5 -nowarn -d bin
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

STRJFLAGS=--library --verbose 3 -clean -O 3

JAR=`if which fastjar >/dev/null; then echo fastjar; else echo jar; fi`
JARIN1=`find runtime  | grep -E '\.rtree|\.af|\.tbl' | sed 's!runtime/!-C runtime/ !'`
JARIN2=`find lib      | grep -E '\.rtree|\.af|\.tbl' | sed 's!lib/!-C lib/ !'`
JARIN3=`find compiler | grep -E '\.rtree|\.af|\.tbl' | sed 's!compiler/!-C compiler/ !'`

jar strategoxt.jar : spoofax-libs.jar # .ALLCLASSES $(RUNTIMEJAVAS) $(LIBARYJAVAS) $(COMPILERJAVAS)
	@if [ ! -e bin/org/strategoxt/stratego_lib/Main.class ]; then \
	  echo "Standard library classes not found; please run 'make all' first." >&2; exit 1; \
	fi 
	cp spoofax-libs.jar strategoxt.jar.tmp
	$(JAR) uf strategoxt.jar.tmp $(JARIN1) $(JARIN2) $(JARIN3)
	$(JAR) uf strategoxt.jar.tmp META-INF/MANIFEST.MF -C bin .
	jar i strategoxt.jar.tmp
	mv strategoxt.jar.tmp strategoxt.jar

smalljar :
	$(JAR) cfm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN1)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN2)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN3)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C spoofax-libs/ .
	mv strategoxt.jar strategoxt-no-compression.jar
	jar cfm strategoxt.jar META-INF/MANIFEST-repacked.MF strategoxt-no-compression.jar
	jar i strategoxt.jar

new-libs :
	rm -rf spoofax-libs-tmp
	mkdir spoofax-libs-tmp
	cat $(SPOOFAX)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar | (cd spoofax-libs-tmp; $(JAR) x)
	cat $(SPOOFAX)/org.spoofax.aterm/lib/shared-objects-1.4.jar | (cd spoofax-libs-tmp; $(JAR) x)
	cat $(SPOOFAX)/share/java/junit-3.8.1.jar | (cd spoofax-libs-tmp; $(JAR) x)
	rm -rf spoofax-libs-tmp/META-INF
	$(JAR) cf spoofax-libs.jar.tmp -C spoofax-libs-tmp .
	$(JAR) uf spoofax-libs.jar.tmp -C $(SPOOFAX)/org.spoofax.interpreter.core/bin/ .
	$(JAR) uf spoofax-libs.jar.tmp -C $(SPOOFAX)/org.spoofax.jsglr/bin/ .
	$(JAR) uf spoofax-libs.jar.tmp -C $(SPOOFAX)/org.spoofax.aterm/bin/ .
	$(JAR) uf spoofax-libs.jar.tmp -C $(SPOOFAX)/org.spoofax.interpreter.adapter.aterm/bin/ .
	$(JAR) uf spoofax-libs.jar.tmp -C $(SPOOFAX)/org.spoofax.interpreter.library.jsglr/bin/ .
	rm -rf spoofax-libs-tmp
	mv spoofax-libs.jar.tmp spoofax-libs.jar

.ALLCLASSES : bin/org/strategoxt/strj/Main.class

bin/org/strategoxt/strj/Main.class : $(RUNTIMEJAVAS) $(LIBARYJAVAS) $(COMPILERJAVAS)
	@if ! which ecj >/dev/null; \
	  then echo "WARNING: ecj is not installed; using the (much) slower javac compiler instead" >&2; \
	fi
	$(JAVAC) $(JAVACFLAGS) $(RUNTIMEJAVAS) $(LIBRARYJAVAS) $(COMPILERJAVAS) && touch .ALLCLASSES

debug-classes : $(RUNTIMEJAVA)
	$(JAVAC) -g $(JAVACFLAGS) $(RUNTIMEJAVAS)

###### LIBRARIES #######

bin/org/strategoxt/stratego_lib/Main.class : lib/org/strategoxt/stratego_lib/Main.java
	$(JAVAC) $(JAVACFLAGS) $<

lib/org/strategoxt/stratego_lib/Main.java : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../trans/strj
	[ -e lib/org/strategoxt ] || mkdir -p lib/org/strategoxt
	../trans/strj -I $(STRATEGOXT)/share/stratego-lib -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_lib

lib/org/strategoxt/stratego-xtc.rtree : $(STRATEGOXT)/share/xtc/stratego-xtc-posix-xsi.rtree
	cp $< $@

lib/org/strategoxt/stratego_xtc/Main.java : lib/org/strategoxt/stratego-xtc.rtree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/xtc -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_xtc -la stratego-lib -D GetInternalDefaultXtcRepository=None

lib/org/strategoxt/stratego_sglr/Main.java : $(STRATEGOXT)/share/libstratego-sglr.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_sglr -la stratego-lib -la stratego-xtc

lib/org/strategoxt/stratego_rtg/Main.java : $(STRATEGOXT)/share/libstratego-rtg.ctree ../trans/strj runtime/org/strategoxt/lang/compat/stratego_rtg_compat/Main.java
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_rtg -la stratego-lib -la stratego-sglr -la org.strategoxt.lang.compat.stratego_rtg_compat

lib/org/strategoxt/stratego_gpp/Main.java : $(STRATEGOXT)/share/libstratego-gpp.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_gpp -la stratego-lib -la stratego-lib -la stratego-sglr

lib/org/strategoxt/stratego_aterm/Main.java : $(STRATEGOXT)/share/libstratego-aterm.ctree runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat/Main.java ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_aterm -la stratego-lib -la stratego-gpp -la org.strategoxt.lang.compat.override.stratego_aterm_compat

lib/org/strategoxt/stratego_sdf/Main.java : $(STRATEGOXT)/share/libstratego-sdf.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_sdf -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-aterm 

lib/org/strategoxt/stratego_tool_doc/Main.java : $(STRATEGOXT)/share/libstratego-tool-doc.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_tool_doc -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-xtc -la stratego-aterm -D SRTS-package-bugreport='"bugs@strategoxt.org"' -D SRTS-package-name='"<SRTS-package-name>"' -D SRTS-package-revision='"<SRTS-package-revision>"' -D SRTS-package-version='"<SRTS-package-version>"'

lib/org/strategoxt/strc/Main.java : $(STRATEGOXT)/share/libstrc.ctree ../trans/strj runtime/org/strategoxt/lang/compat/strc_compat/Main.java
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.strc -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-rtg -la stratego-xtc -la org.strategoxt.lang.compat.strc_compat

lib/org/strategoxt/java_front/Main.java : $(JAVA_FRONT)/share/java-front/libjava-front.ctree ../trans/strj
	../trans/strj -I $(JAVA_FRONT)/share/java-front-syntax -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.java_front -la stratego-lib -la stratego-sglr -la stratego-gpp

###### RUNTIME #######

runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat.rtree : $(STRATEGOXT)/share/aterm-front/ATerms.str
	parse-stratego -i $< -o $@

runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat/Main.java : runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat.rtree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.stratego_aterm_compat -la stratego-lib -la stratego-gpp

runtime/org/strategoxt/lang/compat/override/jsglr_parser_compat/Main.java : runtime/org/strategoxt/lang/compat/override/jsglr-parser-compat.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.jsglr_parser_compat -la stratego-lib -la stratego-sglr -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/jsglr_parser/Main.java : runtime/org/strategoxt/lang/compat/override/jsglr-parser.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.jsglr_parser -la stratego-lib

runtime/org/strategoxt/lang/compat/override/performance_tweaks/Main.java : runtime/org/strategoxt/lang/compat/override/performance-tweaks.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.performance_tweaks -la stratego-lib

runtime/org/strategoxt/lang/compat/override/xtc_compat/Main.java : runtime/org/strategoxt/lang/compat/override/xtc-compat.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.xtc_compat -la stratego-lib -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/strc_compat/Main.java : runtime/org/strategoxt/lang/compat/override/strc-compat.str ../trans/strj runtime/org/strategoxt/lang/parallel/stratego_parallel/libstratego-parallel.rtree
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -I $(STRATEGOXT)/share/xtc -I $(STRATEGOXT)/share/stratego-lib -I $(JAVA_FRONT)/share/java-front -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.strc_compat -la stratego-lib -la stratego-xtc -la org.strategoxt.strc -I runtime/org/strategoxt/lang/parallel/stratego_parallel

###### COMPILER #######

compiler/org/strategoxt/strj/Main.java : ../trans/strj.ctree ../trans/strj
	[ -e compiler/org/strategoxt ] || mkdir -p compiler/org/strategoxt
	../trans/strj -i $< -o $@ -clean -p org.strategoxt.strj --verbose 3 -la stratego-lib -la stratego-xtc -la stratego-gpp -la org.strategoxt.strc -la org.strategoxt.java_front -O 3 # -D DEFAULT_XTC_REPOSITORY="\"$(REPOSITORY)\""

###### EXTERNAL #######

../trans/strj : .PURPLEPONY
	$(MAKE) -C ../trans strj

../trans/strj.ctree : .PURPLEPONY
	$(MAKE) -C ../trans strj.ctree

.PURPLEPONY:

