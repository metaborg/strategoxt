include $(top_srcdir)/Makefile.xt

pkgdata_DATA=.ALLCLASSES strategoxt.jar

RUNTIMEJAVAS = \
  $(wildcard runtime/*.java) \
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
  runtime/org/strategoxt/lang/compat/override/native_calls_compat/Main.java \
  runtime/org/strategoxt/lang/compat/override/java_integration/Main.java \
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

TOOLJAVAS = \
  tools/org/strategoxt/tools/Main.java

TOOLSTRS = \
  $(wildcard tools/org/strategoxt/tools/*.str) \
  $(wildcard tools/org/strategoxt/tools/*.meta) \
  $(wildcard tools/org/strategoxt/tools/lib/*.str) \
  $(wildcard tools/org/strategoxt/tools/lib/*.meta)

nobase_pkgdata_DATA = \
  runtime/org/strategoxt/lang/parallel/stratego_parallel/libstratego-parallel.rtree \
  $(LIBRARYJAVAS) $(COMPILERJAVAS) .ALLCLASSES

EXTRA_DIST=\
  $(wildcard runtime/*.java) \
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
  $(TOOLSTRS) \
  spoofax-libs.jar \
  bin \
  META-INF/MANIFEST.MF

STRINCLUDES= \
  -I $(STRATEGOXT)/share/sdf/stratego-regular

CLEANFILES = \
  $(LIBRARYJAVAS) $(COMPILERJAVAS) $(TOOLJAVAS) \
  runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat.rtree \
  lib/org/strategoxt/stratego-xtc.rtree \
  .ALLCLASSES
  
clean :
	rm -rf bin/* lib/org/strategoxt/*

SPOOFAX=../../../spoofax/trunk/spoofax
CLASSPATH=runtime:lib:compiler:tools:spoofax-libs.jar:.
JAVACFLAGS=-J-Xmx1024m -J-Xms512m -J-server -J-XX:+UseConcMarkSweepGC -cp $(CLASSPATH) -source 5 -target 5 -nowarn -d bin
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

STRJ=XTC_REPOSITORY="$(BUILD_REPOSITORY)" ../trans/strj
STRJFLAGS=--library --verbose 3 -clean -O 3

STRJ_VERSION=$(VERSION) (Java version) based on `$(STRATEGOXT)/bin/strc --version | head -n1 | sed 's/ (revision \(.*\))/r\1/'`
STRJ_CONSTANTS=-D STRJ_VERSION_TERM="\"$(STRJ_VERSION)\"" -D SVN_REVISION_TERM=\"$(SVN_REVISION)\" -D STRC_SYSTEM_LDFLAGS=\"\" -D STRC_SYSTEM_CFLAGS=\"\"

JAR=`if which fastjar >/dev/null; then echo fastjar; else echo jar; fi`
JARIN0=`find tools    | grep -E         '\.af|\.tbl' | sed 's!tools/!-C tools/ !'`
JARIN1=`find runtime  | grep -E '\.rtree|\.af|\.tbl' | sed 's!runtime/!-C runtime/ !'`
JARIN2=`find lib      | grep -E '\.rtree|\.af|\.tbl' | sed 's!lib/!-C lib/ !'`
JARIN3=`find compiler | grep -E '\.rtree|\.af|\.tbl' | sed 's!compiler/!-C compiler/ !'`

jar strategoxt.jar : spoofax-libs.jar # .ALLCLASSES $(RUNTIMEJAVAS) $(LIBRARYJAVAS) $(TOOLJAVAS) $(COMPILERJAVAS)
	@if [ ! -e bin/org/strategoxt/stratego_lib/Main.class ]; then \
	  echo "Standard library classes not found; please run 'make all' first." >&2; exit 1; \
	fi 
	cp spoofax-libs.jar strategoxt.jar.tmp
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF $(JARIN0) $(JARIN1) $(JARIN2) $(JARIN3)
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C bin .
	jar i strategoxt.jar.tmp
	mv strategoxt.jar.tmp strategoxt.jar

smalljar :
	$(JAR) cfm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN0)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN1)
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

bin/org/strategoxt/strj/Main.class : $(RUNTIMEJAVAS) $(LIBARYJAVAS) $(TOOLJAVAS) $(COMPILERJAVAS)
	@if ! which ecj >/dev/null; \
	  then echo "WARNING: ecj is not installed; using the (much) slower javac compiler instead" >&2; \
	fi
	$(JAVAC) $(JAVACFLAGS) $(RUNTIMEJAVAS) $(LIBRARYJAVAS) $(TOOLJAVAS) $(COMPILERJAVAS) && touch .ALLCLASSES

debug-classes : $(RUNTIMEJAVA)
	$(JAVAC) -g $(JAVACFLAGS) $(RUNTIMEJAVAS)

###### LIBRARIES #######

bin/org/strategoxt/stratego_lib/Main.class : lib/org/strategoxt/stratego_lib/Main.java
	$(JAVAC) $(JAVACFLAGS) $<

lib/org/strategoxt/stratego_lib/Main.java : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../trans/strj runtime/org/strategoxt/lang/compat/override/native_calls_compat/Main.java runtime/org/strategoxt/lang/compat/override/java_integration/Main.java runtime/org/strategoxt/lang/compat/override/performance_tweaks/Main.java
	[ -e lib/org/strategoxt ] || mkdir -p lib/org/strategoxt
	$(STRJ) -I $(STRATEGOXT)/share/stratego-lib -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_lib -la org.strategoxt.lang.compat.override.native_calls_compat -la org.strategoxt.lang.compat.override.java_integration -la org.strategoxt.lang.compat.override.performance_tweaks

lib/org/strategoxt/stratego-xtc.rtree : $(STRATEGOXT)/share/xtc/stratego-xtc-posix-xsi.rtree
	cp $< $@

lib/org/strategoxt/stratego_xtc/Main.java : lib/org/strategoxt/stratego-xtc.rtree ../trans/strj runtime/org/strategoxt/lang/compat/override/xtc_compat/Main.java
	$(STRJ) -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/xtc -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_xtc -la stratego-lib -la org.strategoxt.lang.compat.override.xtc_compat -D GetInternalDefaultXtcRepository_0_0=None -D PACKAGE_NAME_TERM='"<package name>"'

lib/org/strategoxt/stratego_sglr/Main.java : $(STRATEGOXT)/share/libstratego-sglr.ctree ../trans/strj runtime/org/strategoxt/lang/compat/override/jsglr_parser/Main.java runtime/org/strategoxt/lang/compat/override/jsglr_parser_compat/Main.java
	$(STRJ) -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -O 2 -p org.strategoxt.stratego_sglr -la stratego-lib -la stratego-xtc -la org.strategoxt.lang.compat.override.jsglr_parser -la org.strategoxt.lang.compat.override.jsglr_parser_compat # compile with limited inlining for all the overridden overloads

lib/org/strategoxt/stratego_rtg/Main.java : $(STRATEGOXT)/share/libstratego-rtg.ctree ../trans/strj runtime/org/strategoxt/lang/compat/stratego_rtg_compat/Main.java lib/org/strategoxt/stratego_rtg/rtg.tbl
	$(STRJ) -I lib/org/strategoxt/stratego_rtg -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_rtg -la stratego-lib -la stratego-sglr -la org.strategoxt.lang.compat.stratego_rtg_compat

# HACK: work-around for the Java BAFReader
lib/org/strategoxt/stratego_rtg/rtg.tbl : $(STRATEGOXT)/share/sdf/stratego-regular/rtg.tbl
	[ -e lib/org/strategoxt/stratego_rtg ] || mkdir lib/org/strategoxt/stratego_rtg
	$(ATERM)/bin/baffle -ws -i $< -o $@
	@if [ `du -b $@ | grep -o '[0-9]*'` -lt 500 ]; then \
		echo $@ corrupted >&2; \
		ls -l $@; \
		rm $@; \
		exit 1 ;\
	fi

lib/org/strategoxt/stratego_gpp/Main.java : $(STRATEGOXT)/share/libstratego-gpp.ctree ../trans/strj
	$(STRJ) -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/gpp -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_gpp -la stratego-lib -la stratego-lib -la stratego-sglr

lib/org/strategoxt/stratego_aterm/Main.java : $(STRATEGOXT)/share/libstratego-aterm.ctree runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat/Main.java ../trans/strj
	$(STRJ) -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_aterm -la stratego-lib -la stratego-gpp -la org.strategoxt.lang.compat.override.stratego_aterm_compat

lib/org/strategoxt/stratego_sdf/Main.java : $(STRATEGOXT)/share/libstratego-sdf.ctree ../trans/strj
	$(STRJ) -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/sdf-front -I $(STRATEGOXT)/share/sdf-front -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_sdf -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-aterm 

lib/org/strategoxt/stratego_tool_doc/Main.java : $(STRATEGOXT)/share/libstratego-tool-doc.ctree ../trans/strj
	$(STRJ) -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.stratego_tool_doc -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-xtc -la stratego-aterm -D SRTS_package_bugreport_0_0='"bugs@strategoxt.org"' -D SRTS_package_name_0_0='"<SRTS-package-name>"' -D SRTS_package_revision_0_0='"<SRTS-package-revision>"' -D SRTS_package_version_0_0='"<SRTS-package-version>"'

lib/org/strategoxt/strc/Main.java : $(STRATEGOXT)/share/libstrc.ctree ../trans/strj runtime/org/strategoxt/lang/compat/strc_compat/Main.java runtime/org/strategoxt/lang/compat/override/strc_compat/Main.java
	$(STRJ) -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -i $< -o $@ $(STRJFLAGS) $(STRJCONSTANTS) -p org.strategoxt.strc -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-rtg -la stratego-xtc -la org.strategoxt.lang.compat.strc_compat

lib/org/strategoxt/java_front/Main.java : $(JAVA_FRONT)/share/java-front/libjava-front.ctree ../trans/strj
	$(STRJ) -I $(JAVA_FRONT)/share/java-front-syntax -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.java_front -la stratego-lib -la stratego-sglr -la stratego-gpp

###### RUNTIME #######

runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat.rtree : $(STRATEGOXT)/share/aterm-front/ATerms.str
	parse-stratego -i $< -o $@

runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat/Main.java : runtime/org/strategoxt/lang/compat/override/stratego_aterm_compat.rtree ../trans/strj
	$(STRJ) -I $(STRATEGOXT)/share -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.stratego_aterm_compat -la stratego-lib -la stratego-gpp

runtime/org/strategoxt/lang/compat/override/jsglr_parser_compat/Main.java : runtime/org/strategoxt/lang/compat/override/jsglr-parser-compat.str ../trans/strj
	$(STRJ) -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.jsglr_parser_compat -la stratego-lib -la stratego-sglr -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/jsglr_parser/Main.java : runtime/org/strategoxt/lang/compat/override/jsglr-parser.str ../trans/strj
	$(STRJ) -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.jsglr_parser -la stratego-lib -la stratego-sglr

runtime/org/strategoxt/lang/compat/override/performance_tweaks/Main.java : runtime/org/strategoxt/lang/compat/override/performance-tweaks.str ../trans/strj
	$(STRJ) -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.performance_tweaks -la stratego-lib

runtime/org/strategoxt/lang/compat/override/xtc_compat/Main.java : runtime/org/strategoxt/lang/compat/override/xtc-compat.str ../trans/strj
	$(STRJ) -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.xtc_compat -la stratego-lib -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/native_calls_compat/Main.java : runtime/org/strategoxt/lang/compat/override/native-calls-compat.str ../trans/strj
	$(STRJ) -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.native_calls_compat -la stratego-lib -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/java_integration/Main.java : runtime/org/strategoxt/lang/compat/override/java-integration.str ../trans/strj
	$(STRJ) -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.java_integration -la stratego-lib -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/strc_compat/Main.java : runtime/org/strategoxt/lang/compat/override/strc-compat.str ../trans/strj runtime/org/strategoxt/lang/parallel/stratego_parallel/libstratego-parallel.rtree ../trans/strj-version.str
	$(STRJ) -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -I $(STRATEGOXT)/share/xtc -I $(STRATEGOXT)/share/stratego-lib -I $(JAVA_FRONT)/share/java-front -I ../trans -i $< -o $@ $(STRJFLAGS) -p org.strategoxt.lang.compat.override.strc_compat -la stratego-lib -la stratego-xtc -la org.strategoxt.strc -I runtime/org/strategoxt/lang/parallel/stratego_parallel

###### TOOLS #######

tools/org/strategoxt/tools/Main.java : $(TOOLSTRS:.str=.rtree)
	$(STRJ) -i tools/org/strategoxt/tools/tools.rtree -o $@ $(STRJFLAGS) -p org.strategoxt.tools -la stratego-lib -la stratego-xtc -la stratego-gpp -la stratego-rtg -la stratego-sglr -la stratego-tool-doc -la stratego-sdf -la stratego-aterm -la strc -I $(STRATEGOXT)/share/sdf/xml-front -I tools/org/strategoxt/tools/lib -I $(STRATEGOXT)/share/sdf/gpp -I $(STRATEGOXT)/share/gpp -I $(STRATEGOXT)/share/sdf/stratego-regular -I $(STRATEGOXT)/share/stratego-regular -I $(STRATEGOXT)/share/sdf/sdf-front

###### COMPILER #######

compiler/org/strategoxt/strj/Main.java : ../trans/strj.ctree ../trans/strj
	[ -e compiler/org/strategoxt ] || mkdir -p compiler/org/strategoxt
	$(STRJ) -i $< -o $@ --clean -p org.strategoxt.strj --verbose 3 -la stratego-lib -la stratego-xtc -la stratego-gpp -la strc -la java-front -O 3 $(STRJ_CONSTANTS)

###### EXTERNAL #######

../trans/strj : .PURPLEPONY
	$(MAKE) -C ../trans strj

../trans/strj.ctree : .PURPLEPONY
	$(MAKE) -C ../trans strj.ctree

.PURPLEPONY:

