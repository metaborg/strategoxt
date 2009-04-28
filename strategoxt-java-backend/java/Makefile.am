include $(top_srcdir)/Makefile.xt

RUNTIMEJAVAS = \
  $(wildcard runtime/org/strategoxt/lang/*.java) \
  runtime/org/strategoxt/lang/compat/CompatManager.java \
  runtime/org/strategoxt/lang/compat/CompatLibrary.java \
  runtime/org/strategoxt/lang/compat/JSGLRWrapper.java \
  runtime/org/strategoxt/lang/compat/NativeCallHelper.java \
  runtime/org/strategoxt/lang/compat/SSL_EXT_call.java \
  runtime/org/strategoxt/lang/compat/SSL_EXT_read_text_from_stream.java

RUNTIMECLASSES = \
  $(RUNTIMEJAVAS:.java=.class)

COMPILERJAVAS = \
  compiler/org/strategoxt/strj.java

COMPILERCLASSES = \
  $(COMPILERJAVAS:.java=.class)

LIBRARYJAVAS = \
  lib/org/strategoxt/libstratego_lib.java \
  lib/org/strategoxt/libstratego_xtc.java \
  runtime/org/strategoxt/lang/compat/jsglr_parser.java \
  runtime/org/strategoxt/lang/compat/jsglr_parser_compat.java \
  lib/org/strategoxt/libstratego_sglr.java \
  lib/org/strategoxt/libstratego_gpp.java \
  runtime/org/strategoxt/lang/compat/libstratego_aterm_compat.java \
  runtime/org/strategoxt/lang/compat/libstratego_rtg_compat.java \
  runtime/org/strategoxt/lang/compat/libstrc_compat.java \
  runtime/org/strategoxt/lang/compat/performance_tweaks.java \
  runtime/org/strategoxt/lang/compat/xtc_compat.java \
  lib/org/strategoxt/libstratego_rtg.java \
  lib/org/strategoxt/libstratego_aterm.java \
  lib/org/strategoxt/libstratego_sdf.java \
  lib/org/strategoxt/libstrc.java

# lib/org/strategoxt/libjava_front.java

LIBRARYCLASSES=$(LIBRARYJAVAS:.java=.class)

nobase_pkgdata_DATA = .ALLCLASSES $(LIBRARYJAVAS) $(RUNTIMECLASSES) $(LIBRARYCLASSES) $(COMPILERJAVAS)

CLEANFILES = \
  $(RUNTIMECLASSES) $(LIBRARYCLASSES) \
  $(subst runtime/org/strategoxt/lang/compat/libstrc_compat.java,, \
  $(subst runtime/org/strategoxt/lang/compat/libstratego_rtg_compat.java,,$(LIBRARYJAVAS)))

# HACK: hardcoded, relative classpath

BASEPATH=../../../spoofax/trunk/spoofax
SPCLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar
CLASSPATH=$(SPCLASSPATH):runtime:lib:.
JAVACFLAGS=-J-Xmx256m -J-Xms100m -J-server -J-XX:+UseParallelGC -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

STRJOPTIONS=--library -p org.strategoxt --verbose 3

###### LIBRARIES #######

lib/org/strategoxt/libstratego_lib.java : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share/stratego-lib -i $< -o $@ $(STRJOPTIONS)

lib/org/strategoxt/libstratego-xtc.rtree : $(STRATEGOXT)/share/xtc/stratego-xtc-posix-xsi.rtree
	cp $< $@

lib/org/strategoxt/libstratego_xtc.java : lib/org/strategoxt/libstratego-xtc.rtree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share/xtc -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -D GetInternalDefaultXtcRepository=None

lib/org/strategoxt/libstratego_sglr.java : $(STRATEGOXT)/share/libstratego-sglr.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc

lib/org/strategoxt/libstratego_rtg.java : $(STRATEGOXT)/share/libstratego-rtg.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.lang.compat.libstratego_rtg_compat

lib/org/strategoxt/libstratego_gpp.java : $(STRATEGOXT)/share/libstratego-gpp.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr

lib/org/strategoxt/lang/compat/libstratego_aterm_compat.rtree : $(STRATEGOXT)/share/aterm-front/ATerms.str
	parse-stratego -i $< -o $@

lib/org/strategoxt/lang/compat/libstratego_aterm_compat.java : runtime/org/strategoxt/lang/compat/libstratego_aterm_compat.rtree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_gpp

lib/org/strategoxt/libstratego_aterm.java : $(STRATEGOXT)/share/libstratego-aterm.ctree runtime/org/strategoxt/lang/compat/libstratego_aterm_compat.class ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_gpp -la org.strategoxt.lang.compat.libstratego_aterm_compat

lib/org/strategoxt/libstratego_sdf.java : $(STRATEGOXT)/share/libstratego-sdf.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_gpp -la org.strategoxt.libstratego_aterm 

lib/org/strategoxt/libstrc.java : $(STRATEGOXT)/share/libstrc.ctree ../trans/strj
	../trans/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_gpp -la org.strategoxt.libstratego_rtg -la org.strategoxt.libstratego_xtc -la org.strategoxt.lang.compat.libstrc_compat

lib/org/strategoxt/libjava_front.java : $(JAVA_FRONT)/share/java-front/libjava-front.ctree ../trans/strj
	../trans/strj -I $(JAVA_FRONT)/share/java-front-syntax -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_gpp

###### RUNTIME #######

runtime/org/strategoxt/lang/compat/jsglr_parser_compat.java : runtime/org/strategoxt/lang/compat/jsglr-parser-compat.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_xtc

runtime/org/strategoxt/lang/compat/jsglr_parser.java : runtime/org/strategoxt/lang/compat/jsglr-parser.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat -la org.strategoxt.libstratego_lib

runtime/org/strategoxt/lang/compat/performance_tweaks.java : runtime/org/strategoxt/lang/compat/performance-tweaks.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat -la org.strategoxt.libstratego_lib

runtime/org/strategoxt/lang/compat/xtc_compat.java : runtime/org/strategoxt/lang/compat/xtc-compat.str ../trans/strj
	../trans/strj -i $< -o $@ $(STRJOPTIONS) -p org.strategoxt.lang.compat -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc

###### COMPILER #######

compiler/org/strategoxt/strj.java : ../trans/strj.ctree ../trans/strj
	../trans/strj -i $< -o $@ -p org.strategoxt --verbose 3 -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc -la org.strategoxt.libstratego_gpp -la org.strategoxt.libstrc -la org.strategoxt.libjava_front -DDEFAULT_XTC_REPOSITORY="\"$(REPOSITORY)\""

###### GENERAL #######

%.class : %.java
	$(JAVAC) $(JAVACFLAGS) $<

../trans/strj : .PURPLEPONY
	$(MAKE) -C ../trans strj

../trans/strj.ctree : .PURPLEPONY
	$(MAKE) -C ../trans strj

.ALLCLASSES : $(LANGJAVAS) $(LIBARYJAVAS)
	$(JAVAC) $(JAVACFLAGS) $(LANGJAVAS) $(LIBRARYJAVAS) && touch $@

.PURPLEPONY:

