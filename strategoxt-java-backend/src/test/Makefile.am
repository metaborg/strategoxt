include $(top_srcdir)/Makefile.xt

TESTFILES   = $(STRC1TESTFILES) # $(wildcard strc1/*.str)
JAVAFILES   = $(subst .str,.java,$(subst -,_,$(TESTFILES)))
CLASSFILES  = $(subst .str,.java,$(subst -,_,$(TESTFILES)))
CTREEFILES  = $(subst .java,.ctree,$(JAVAFILES))
SCTREEFILES = $(subst .java,.sctree,$(JAVAFILES))
RUNNERFILES = $(subst .java,.runner,$(JAVAFILES))
CLEANFILES  = $(SCTREEFILES) $(JAVAFILES)

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
		  test104 test105 test106 test107 test108 test109		 \
		  io-test10 io-test11 io-test1 io-test2 io-test3 io-test4	 \
                  qcons-test01 qcons-test02 qcons-test03 qcons-test04		 \
                  test-chain01 test-chain02 test-chain03			 \
		  let-test							 \
		  nested-defs01							 \
		  # cs-test01 cs-test02 cs-test03 cs-test04
	          
STRC1TESTS_DISABLED=test50 test83 static-links

check :  $(CTREEFILES) $(SCTREEFILES) $(JAVAFILES) $(CLASSFILES)

STRC1TESTFILES=$(addprefix strc1/,$(addsuffix .str,$(STRC1TESTS)))

# nobase_pkgdata_DATA = $(CTREEFILES) $(SCTREEFILES) $(JAVAFILES)

TESTS=$(RUNNERFILES)

# HACK: hardcoded, relative classpath

BASEPATH=../../../../spoofax/trunk/spoofax
CLASSPATH=.:$(BASEPATH)/org.spoofax.interpreter.core/bin:$(BASEPATH)/org.spoofax.interpreter.adapter.aterm/bin:$(BASEPATH)/org.spoofax.aterm/bin/:$(BASEPATH)/org.spoofax.aterm/lib/jjtraveler-0.4.3.jar:$(BASEPATH)/org.spoofax.aterm/lib/shared-objects-1.4.jar:../java:strc1:.
JAVACFLAGS=-J-Xmx256m -cp $(CLASSPATH)

../str/s2j : .PURPLEPONY
	$(MAKE) -C ../str s2j

../str/backend-simplify : .PURPLEPONY
	$(MAKE) -b -C ../str backend-simplify

%.ctree : %.str
	$(SCOMPILE) -O 0 -F -i $< -o $@

%.sctree : %.ctree ../str/backend-simplify
	../str/backend-simplify -i $< -o $@

%.ajava : %.sctree ../str/s2j
	../str/s2j -i $< -o $@ -la org.strategoxt.libstratego_lib

%.java : %.ajava
	pp-java -i $< -o $@ || \
	    (format-check -i $< --rtg ~/.nix-profile/share/java-front/Java-15.rtg --vis; rm -f $@; exit 1)

%.class : $(JAVAFILES)
	$(MAKE) -C ../str
	javac $(JAVACFLAGS) strc1/*.java

# %.class : %.java
#	javac $(JAVACFLAGS) $<

%.run : %.class
	java -client -cp $(CLASSPATH) `basename $< .class`

%.runner : %.class
	@ echo "cd strc1; java -client -cp `echo $(CLASSPATH) | sed 's!:../!:../../!g'` `basename $< .class`" > $@
	@ chmod 755 $@

.ALLJAVAFILES:
	javac $(JAVACFLAGS) strc1/*.java

.PURPLEPONY:

