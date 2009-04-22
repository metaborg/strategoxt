include $(top_srcdir)/Makefile.xt

LANGJAVAS = \
  $(wildcard org/strategoxt/lang/*.java) \
  org/strategoxt/lang/compat/CompatManager.java \
  org/strategoxt/lang/compat/CompatLibrary.java \
  org/strategoxt/lang/compat/JSGLRWrapper.java \
  org/strategoxt/lang/compat/NativeCallHelper.java \
  org/strategoxt/lang/compat/SSL_EXT_call.java \
  org/strategoxt/lang/compat/SSL_EXT_read_text_from_stream.java

LANGCLASSES = \
  $(LANGJAVAS:.java=.class)

LIBRARYCLASSES = \
  org/strategoxt/libstratego_lib.class \
  org/strategoxt/libstratego_xtc.class \
  org/strategoxt/libstratego_sglr.class \
  org/strategoxt/libstratego_gpp.class \
  org/strategoxt/lang/compat/libstratego_aterm_compat.class \
  org/strategoxt/lang/compat/libstratego_rtg_compat.class \
  org/strategoxt/lang/compat/libstratego_libstrc_compat.class \
  org/strategoxt/lang/compat/jsglr_parser_compat.class \
  org/strategoxt/lang/compat/jsglr_parser.class \
  org/strategoxt/lang/compat/performance_tweaks.class \
  org/strategoxt/lang/compat/xtc_compat.class \
  org/strategoxt/libstratego_rtg.class \
  org/strategoxt/libstratego_aterm.class \
  org/strategoxt/libstratego_sdf.class

# TODO:
# org/strategoxt/libstrc.class
# org/strategoxt/libjava_front.class

nobase_pkgdata_DATA = $(LANGCLASSES) $(LIBRARYCLASSES)

CLEANFILES = \
  $(LANGCLASSES) $(LIBRARYCLASSES) \
  $(subst org/strategoxt/lang/compat/libstrc_compat.java,, \
  $(subst org/strategoxt/lang/compat/libstratego_rtg_compat.java,,$(LIBRARYCLASSES:.class=.java)))

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:.
JAVACFLAGS=-J-Xmx256m -J-Xms100m -J-server -J-XX:+UseParallelGC -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

STRJOPTIONS=--library -p org.strategoxt --verbose 3

org/strategoxt/libstratego_lib.java : $(STRATEGOXT)/share/stratego-lib/libstratego-lib.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share/stratego-lib -i $< -o $@ $(STRJOPTIONS)

org/strategoxt/libstratego-xtc.rtree : $(STRATEGOXT)/share/xtc/stratego-xtc-posix-xsi.rtree
	cp $< $@

org/strategoxt/libstratego_xtc.java : org/strategoxt/libstratego-xtc.rtree ../str/strj
	../str/strj -I $(STRATEGOXT)/share/xtc -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -D GetInternalDefaultXtcRepository=None

org/strategoxt/libstratego_sglr.java : $(STRATEGOXT)/share/libstratego-sglr.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc

org/strategoxt/libstratego_rtg.java : $(STRATEGOXT)/share/libstratego-rtg.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.lang.compat.libstratego_rtg_compat

org/strategoxt/libstratego_gpp.java : $(STRATEGOXT)/share/libstratego-gpp.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr

org/strategoxt/lang/compat/libstratego_aterm_compat.rtree : $(STRATEGOXT)/share/aterm-front/ATerms.str
	parse-stratego -i $< -o $@

org/strategoxt/lang/compat/libstratego_aterm_compat.java : org/strategoxt/lang/compat/libstratego_aterm_compat.rtree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_gpp

org/strategoxt/libstratego_aterm.java : $(STRATEGOXT)/share/libstratego-aterm.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_gpp -la org.strategoxt.lang.compat.libstratego_aterm_compat

org/strategoxt/libstratego_sdf.java : $(STRATEGOXT)/share/libstratego-sdf.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_gpp -la org.strategoxt.libstratego_aterm 

org/strategoxt/libstrc.java : $(STRATEGOXT)/share/libstrc.ctree ../str/strj
	../str/strj -I $(STRATEGOXT)/share -I $(STRATEGOXT)/share/sdf/stratego-front -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_gpp -la org.strategoxt.libstratego_rtgfg
	 -la org.strategoxt.libstratego_xtc -la org.strategoxt.lang.compat.libstrc_compat

org/strategoxt/libjava_front.java : $(JAVA_FRONT)/share/java-front/libjava-front.ctree ../str/strj
	../str/strj -I $(JAVA_FRONT)/share/java-front-syntax -i $< -o $@ $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_gpp

org/strategoxt/lang/compat/jsglr_parser_compat.java : org/strategoxt/lang/compat/jsglr-parser-compat.str ../str/strj
	../str/strj -i $< -o $@ -p org.strategoxt.lang.compat $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_sglr -la org.strategoxt.libstratego_xtc

org/strategoxt/lang/compat/jsglr_parser.java : org/strategoxt/lang/compat/jsglr-parser.str ../str/strj
	../str/strj -i $< -o $@ -p org.strategoxt.lang.compat $(STRJOPTIONS) -la org.strategoxt.libstratego_lib

org/strategoxt/lang/compat/performance_tweaks.java : org/strategoxt/lang/compat/performance-tweaks.str ../str/strj
	../str/strj -i $< -o $@ -p org.strategoxt.lang.compat $(STRJOPTIONS) -la org.strategoxt.libstratego_lib

org/strategoxt/lang/compat/xtc_compat.java : org/strategoxt/lang/compat/xtc-compat.str ../str/strj
	../str/strj -i $< -o $@ -p org.strategoxt.lang.compat $(STRJOPTIONS) -la org.strategoxt.libstratego_lib -la org.strategoxt.libstratego_xtc

%.class : %.java
	$(JAVAC) $(JAVACFLAGS) $<

../str/strj : .PURPLEPONY
	$(MAKE) -C ../str strj

.PURPLEPONY:

