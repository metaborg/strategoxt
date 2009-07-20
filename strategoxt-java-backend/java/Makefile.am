include $(top_srcdir)/Makefile.xt

RUNTIMEJAVAS = \
  $(wildcard runtime/org/strategoxt/lang/*.java) \
  $(wildcard runtime/org/strategoxt/lang/compat/*.java) \
  $(wildcard runtime/org/strategoxt/lang/compat/sglr/*.java) \
  runtime/org/strategoxt/lang/compat/override/jsglr_parser.java \
  runtime/org/strategoxt/lang/compat/override/jsglr_parser_compat.java \
  runtime/org/strategoxt/lang/compat/override/libstratego_aterm_compat.java \
  runtime/org/strategoxt/lang/compat/override/performance_tweaks.java \
  runtime/org/strategoxt/lang/compat/override/xtc_compat.java \
  runtime/org/strategoxt/lang/compat/override/strc_compat.java

RUNTIMECLASSES = \
  $(RUNTIMEJAVAS:.java=.class)

COMPILERJAVAS = \
  compiler/org/strategoxt/strj.java

COMPILERCLASSES = \
  $(COMPILERJAVAS:.java=.class)

LIBRARYJAVAS = \
  lib/org/strategoxt/libstratego_lib.java \
  lib/org/strategoxt/libstratego_xtc.java \
  lib/org/strategoxt/libstratego_sglr.java \
  lib/org/strategoxt/libstratego_gpp.java \
  lib/org/strategoxt/libstratego_rtg.java \
  lib/org/strategoxt/libstratego_aterm.java \
  lib/org/strategoxt/libstratego_sdf.java \
  lib/org/strategoxt/libstratego_tool_doc.java \
  lib/org/strategoxt/libstrc.java \
  lib/org/strategoxt/libjava_front.java

LIBRARYCLASSES=$(LIBRARYJAVAS:.java=.class)

nobase_pkgdata_DATA = $(LIBRARYJAVAS) $(COMPILERJAVAS) .ALLCLASSES $(RUNTIMECLASSES) $(LIBRARYCLASSES) $(COMPILERCLASSES)

CLEANFILES = \
  $(RUNTIMECLASSES) $(LIBRARYCLASSES) $(COMPILERCLASSES) \
  $(subst runtime/org/strategoxt/lang/compat/libstrc_compat.java,, \
  $(subst runtime/org/strategoxt/lang/compat/libstratego_rtg_compat.java,,$(LIBRARYJAVAS))) \
  $(COMPILERJAVAS) \
  runtime/org/strategoxt/lang/compat/override/libstratego_aterm_compat.rtree \
  lib/org/strategoxt/libstratego-xtc.rtree \
  .ALLCLASSES

# HACK: hardcoded, relative classpath

BASEPATH=../../../spoofax/trunk/spoofax
SPCLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin:$(BASEPATH)/../../branches/spoofax-recovery/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar
CLASSPATH=$(SPCLASSPATH):runtime:lib:.
JAVACFLAGS=-J-Xmx256m -J-Xms100m -J-server -J-XX:+UseParallelGC -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

STRJOPTIONS=--library -p org.strategoxt --verbose 3 -O 3

JAR=`if which fastjar >/dev/null; then echo fastjar; else echo jar; fi`
JARIN1=`find runtime  | grep -E '\.class|\.rtree|\.af|\.tbl' | sed 's!runtime/!-C runtime/ !'`
JARIN2=`find lib      | grep -E '\.class|\.rtree|\.af|\.tbl' | sed 's!lib/!-C lib/ !'`
JARIN3=`find compiler | grep -E '\.class|\.rtree|\.af|\.tbl' | sed 's!compiler/!-C compiler/ !'`

jar strategoxt.jar : ext-lib # .ALLCLASSES $(RUNTIMEJAVAS) $(LIBARYJAVAS) $(COMPILERJAVAS)
	$(JAR) cfm strategoxt.jar.tmp META-INF/MANIFEST.MF $(JARIN1)
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF $(JARIN2)
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF $(JARIN3)
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C ext-lib/ .
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.interpreter.core/bin/ .
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C $(BASEPATH)/../../branches/spoofax-recovery/bin/ .
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.aterm/bin/ .
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin/ .
	$(JAR) ufm strategoxt.jar.tmp META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin/ .
	jar i strategoxt.jar.tmp
	mv strategoxt.jar.tmp strategoxt.jar

smalljar :
	$(JAR) cfm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN1)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN2)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF $(JARIN3)
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C ext-lib/ .
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.interpreter.core/bin/ .
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C $(BASEPATH)/../../branches/spoofax-recovery/bin/ .
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.aterm/bin/ .
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin/ .
	$(JAR) ufm0 strategoxt.jar META-INF/MANIFEST.MF -C $(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin/ .
	mv strategoxt.jar strategoxt-no-compression.jar
	jar cfm strategoxt.jar META-INF/MANIFEST-repacked.MF strategoxt-no-compression.jar
	jar i strategoxt.jar

ext-lib : $(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar $(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar $(BASEPATH)/share/java/junit-3.8.1.jar $(BASEPATH)/share/java/jjtraveler-0.4.3.jar
	([ -d ext-lib ] || mkdir ext-lib); \
	cat $(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar | (cd ext-lib; $(JAR) x); \
	cat $(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar | (cd ext-lib; $(JAR) x); \
	cat $(BASEPATH)/share/java/junit-3.8.1.jar | (cd ext-lib; $(JAR) x); \
	rm -rf ext-lib/META-INF

###### LIBRARIES #######

lib/org/strategoxt/libstratego_lib.java : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share/stratego-lib -i $< -o $@ $(STRJOPTIONS)

lib/org/strategoxt/libstratego-xtc.rtree : $(STRATEGOXT)/share/xtc/stratego-xtc-posix-xsi.rtree
	cp $< $@

lib/org/strategoxt/libstratego_xtc.java : lib/org/strategoxt/libstratego-xtc.rtree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/xtc -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -D GetInternalDefaultXtcRepository=None

lib/org/strategoxt/libstratego_sglr.java : $(STRATEGOXT)/share/libstratego-sglr.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-xtc

lib/org/strategoxt/libstratego_rtg.java : $(STRATEGOXT)/share/libstratego-rtg.ctree ../trans/strj runtime/org/strategoxt/lang/compat/libstratego_rtg_compat.java
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-sglr -la org.strategoxt.lang.compat.libstratego_rtg_compat

lib/org/strategoxt/libstratego_gpp.java : $(STRATEGOXT)/share/libstratego-gpp.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-lib -la stratego-sglr

lib/org/strategoxt/libstratego_aterm.java : $(STRATEGOXT)/share/libstratego-aterm.ctree runtime/org/strategoxt/lang/compat/override/libstratego_aterm_compat.java ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-gpp -la org.strategoxt.lang.compat.override.libstratego_aterm_compat

lib/org/strategoxt/libstratego_sdf.java : $(STRATEGOXT)/share/libstratego-sdf.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-aterm 

lib/org/strategoxt/libstratego_tool_doc.java : $(STRATEGOXT)/share/libstratego-tool-doc.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-xtc -la stratego-aterm -D SRTS-package-bugreport='"bugs@strategoxt.org"' -D SRTS-package-name='"<SRTS-package-name>"' -D SRTS-package-revision='"<SRTS-package-revision>"' -D SRTS-package-version='"<SRTS-package-version>"'

lib/org/strategoxt/libstrc.java : $(STRATEGOXT)/share/libstrc.ctree ../trans/strj runtime/org/strategoxt/lang/compat/libstrc_compat.java
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-sglr -la stratego-gpp -la stratego-rtg -la stratego-xtc -la org.strategoxt.lang.compat.libstrc_compat

lib/org/strategoxt/libjava_front.java : $(JAVA_FRONT)/share/java-front/libjava-front.ctree ../trans/strj
	../trans/strj -I $(JAVA_FRONT)/share/java-front-syntax -i $< -o $@ $(STRJOPTIONS) -la stratego-lib -la stratego-sglr -la stratego-gpp

###### RUNTIME #######

runtime/org/strategoxt/lang/compat/override/libstratego_aterm_compat.rtree : $(STRATEGOXT)/share/aterm-front/ATerms.str
	parse-stratego -i $< -o $@

runtime/org/strategoxt/lang/compat/override/libstratego_aterm_compat.java : runtime/org/strategoxt/lang/compat/override/libstratego_aterm_compat.rtree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat.override -la stratego-lib -la stratego-gpp

runtime/org/strategoxt/lang/compat/override/jsglr_parser_compat.java : runtime/org/strategoxt/lang/compat/override/jsglr-parser-compat.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat.override -la stratego-lib -la stratego-sglr -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/jsglr_parser.java : runtime/org/strategoxt/lang/compat/override/jsglr-parser.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat.override -la stratego-lib

runtime/org/strategoxt/lang/compat/override/performance_tweaks.java : runtime/org/strategoxt/lang/compat/override/performance-tweaks.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat.override -la stratego-lib

runtime/org/strategoxt/lang/compat/override/xtc_compat.java : runtime/org/strategoxt/lang/compat/override/xtc-compat.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat.override -la stratego-lib -la stratego-xtc

runtime/org/strategoxt/lang/compat/override/strc_compat.java : runtime/org/strategoxt/lang/compat/override/strc-compat.str ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -I $(STRATEGOXT)/share/xtc -I $(STRATEGOXT)/share/stratego-lib -I $(JAVA_FRONT)/share/java-front -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat.override -la stratego-lib -la stratego-xtc -la org.strategoxt.libstrc

###### COMPILER #######

compiler/org/strategoxt/strj.java : ../trans/strj.ctree ../trans/strj
	../trans/strj -i $< -o $@ -p org.strategoxt --verbose 3 -la stratego-lib -la stratego-xtc -la stratego-gpp -la org.strategoxt.libstrc -la org.strategoxt.libjava_front # -D DEFAULT_XTC_REPOSITORY="\"$(REPOSITORY)\""

###### GENERAL #######

%.class : %.java
	$(JAVAC) $(JAVACFLAGS) $<

../trans/strj : .PURPLEPONY
	$(MAKE) -C ../trans strj

../trans/strj.ctree : .PURPLEPONY
	$(MAKE) -C ../trans strj.ctree

.ALLCLASSES : $(RUNTIMEJAVAS) $(LIBARYJAVAS) $(COMPILERJAVAS)
	$(JAVAC) $(JAVACFLAGS) $(RUNTIMEJAVAS) $(LIBRARYJAVAS) $(COMPILERJAVAS) && touch $@

.PURPLEPONY:

