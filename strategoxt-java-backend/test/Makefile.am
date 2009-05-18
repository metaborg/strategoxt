include $(top_srcdir)/Makefile.xt

TESTFILES   = $(BASICTESTFILES) $(STRC1TESTFILES) $(STRC2TESTFILES)
JAVAFILES   = $(subst .str,.java,$(subst -,_,$(TESTFILES)))
CLASSFILES  = $(subst .str,.java,$(subst -,_,$(TESTFILES)))
CTREEFILES  = $(subst .java,.ctree,$(JAVAFILES))
RUNNERFILES = $(subst .java,.runner,$(JAVAFILES))
CLEANFILES  = $(JAVAFILES) $(CLASSFILES) $(CTREEFILES)

STRC1TESTS=test01 test02 test03 test04 test05				 \
		  test06 test07 test08 test09 test10 test11 test12		 \
		  test13 test14 test15 test16 test17 test18 test19		 \
		  test20 test21 test22 test23 test24 test25			 \
		  test27 test28a test28b test28 test29 test30 test31 test32	 \
		  test33 test34 test35 test36 test37 test38 test39		 \
		  test40 test41 test43 test45				 \
		  test46 test47 test49 test51 test53			 \
		  test54 test56 test57 test58 test59				 \
		  test60 test61 test62 test63 test64 test65			 \
                  test67 test68 test69 test70 test72 test73 test74		 \
		  test75 test76 test77 test78 test79 test80 test81 test82 \
		  test84 test85 test86 test87 test88 test89 test90		 \
		  test91 test92 test93 test94 test95 test96			 \
		  test97 test98	test99 test100 test101 test102 test103		 \
		  test104 test105 test106 test107 test108 test109 test110 test111		 \
		  io-test10 io-test11 io-test1 io-test2 io-test3	 \
                  qcons-test01 qcons-test02 qcons-test03 qcons-test04		 \
                  test-chain01 test-chain02 test-chain03			 \
		  let-test							 \
		  nested-defs01							 \
		  cs-test01 cs-test02 cs-test03 cs-test04

STRC1TESTFILES=$(addprefix strc1/,$(addsuffix .str,$(STRC1TESTS)))

STRC2TESTS=arity-test as-pattern assignment			    \
		  comment-test conditional-innermost congruence-arguments   \
		  congruence-thread dynamic-rules-test empty-sections	    \
		  flatten-test higher-order-arg				    \
		  implicit-var-decl improper-list-test innermost-pure	    \
		  match-arity match-automaton-test mkterm		    \
		  number-syntax-test number-test overlay-test		    \
		  overlay-test-b					    \
		  overloading-constructors-test overloading		    \
		  prop rename-test tail	    \
		  thread-test traversal-test twice unification-test occan

STRC2TESTFILES=$(addprefix strc2/,$(addsuffix .str,$(STRC2TESTS)))

BASICTESTS=build_0 build_1 match_1 match_2 lchoice_1 lchoice_2 gchoice_1 \
           internal_1 internal_2 override_1 extend_1 \
           shared_var_1 shared_var_2 shared_var_3 shared_var_4 shared_var_5 \
           dynrules_1 dynrules_2 dynrules_3 dynrules_4 dynrules_5 iset_1 fetch_1 \
           mapconcat_1 traversal_1 annos_1 annos_2

BASICTESTFILES=$(addprefix basic/,$(addsuffix .str,$(BASICTESTS)))

# disabled tests:
# io-test04                               # relies on parsing appl term with string constructor "pp-tables"("b")
# static-links test83                     # rely on C code
		  
	          
# STRC1TESTS_DISABLED=test50 test83 static-links

check-am : strc1/ExpStratego.tbl $(CTREEFILES) $(JAVAFILES) .ALLCLASSFILES $(CLASSFILES)

# nobase_pkgdata_DATA = $(CTREEFILES) $(JAVAFILES)

TESTS=$(RUNNERFILES)

# HACK: hardcoded, relative classpath

BASEPATH=../../../spoofax/trunk/spoofax
SPCLASSPATH=$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.interpreter.library.jsglr/bin:$(BASEPATH)/../../branches/spoofax-recovery/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar
CLASSPATH=$(SPCLASSPATH):../java/runtime:../java/lib:.
JAVACFLAGS=-J-Xmx256m -J-XX:+UseParallelGC -cp $(CLASSPATH) -source 5 -nowarn
JAVAC=`if which ecj >/dev/null; then echo ecj; else echo javac; fi`

../trans/strj : .PURPLEPONY
	$(MAKE) -C ../trans strj

%.ctree : %.str
	$(SCOMPILE) -O 0 --format-check 0 -F -I strc1 -i $< -o $@

%.java : %.ctree ../trans/strj
	../trans/strj -i $< -o $@ -la org.strategoxt.libstratego_lib

%.class : %.java
	$(JAVAC) $(JAVACFLAGS) $<

%.run : %.class
	cd `dirname $<`; java -client -Xss10m -cp `echo .:$(CLASSPATH) | sed 's!:../!:../../!g'` `basename $< .class`

%.runner : %.class
	@ echo "cd `dirname $<`; java -client -Xss10m -cp `echo .:$(CLASSPATH) | sed 's!:../!:../../!g'` `basename $< .class`" > $@
	@ chmod 755 $@

ExpStratego.def : Expressions.sdf ExpStratego.sdf
PGEN_FLAGS = -m `basename $*`
SDF2RTG_FLAGS = -m `basename $*`

.rtg.str :
	$(STRATEGO_REGULAR)/bin/rtg2sig --module `basename "$*"` -i $< -o $@

.sdf.def :
	$(SDF_FRONT)/bin/pack-sdf $(SDFINCLUDES) -i $< -o $@ --dep $*.dep

.def.tbl :
	$(PGEN)/bin/sdf2table $(PGEN_FLAGS) -i $< -o $@

%.crun : %.str
	strc -la strc -la stratego-lib -i $<
	`dirname $<`/`basename $< .str`

strc1/cs_test01.ctree : strc1/ExpStratego.tbl strc1/Expressions.def strc1/Expressions.str
strc1/cs_test02.ctree : strc1/ExpStratego.tbl
strc1/cs_test03.ctree : strc1/ExpStratego.tbl
strc1/cs_test04.ctree : strc1/ExpStratego.tbl strc1/Expressions.str

.ALLCLASSFILES: $(JAVAFILES)
	$(JAVAC) -J-server $(JAVACFLAGS) $(JAVAFILES) && touch $@

.PURPLEPONY:

