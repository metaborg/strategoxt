############# CPL ##################################################

#if USECPL
# Use the choice point library CPL to implement choice
#CHOICEINCLUDES = -I$(CPL)/include -DUSECPL
#CHOICELDFLAGS = -L$(CPL)/lib -lchoice -DUSECPL
#cpl-used: 
#	@echo yes
#else
# Use setjmp and longjmp to implement choice
#CHOICELDFLAGS = 
#CHOICEINCLUDES = 
#cpl-used: 
#	@echo no
#endif

##################################################################

SINCLUDES = -I $(SSL)/share/ssl

TESTFILES = $(wildcard test*.r)
TESTBINS = $(subst .r,.bin,$(TESTFILES))
TESTSRCS = $(subst .r,.c,$(TESTFILES))
TESTRUNS = $(subst .r,.run,$(TESTFILES))

IOTESTFILES = $(wildcard io-test*.r)
IOTESTSRCS = $(subst .r,.c,$(IOTESTFILES))
IOTESTBINS = $(subst .r,.bin,$(IOTESTFILES))
IOTESTRUNS = $(subst .r,.io-run,$(IOTESTFILES))

ERRORTESTFILES = $(wildcard error-test*.r)
ERRORTESTSRCS = $(subst .r,.c,$(ERRORTESTFILES))
ERRORTESTBINS = $(subst .r,.bin,$(ERRORTESTFILES))
ERRORTESTRUNS = $(subst .r,.error-run,$(ERRORTESTFILES))

TESTIBINS = $(subst .r,.ibin,$(TESTFILES))
TESTIRUNS = $(subst .r,.irun,$(TESTFILES))

check: $(TESTRUNS) $(IOTESTRUNS) 

#TESTS = $(TESTBINS)

check-strc: $(TESTIRUNS)

CLEANFILES = \
	$(TESTBINS) $(IOTESTBINS) \
	$(TESTRUNS) $(IOTESTRUNS) \
	$(TESTSRCS) $(IOTESTSRCS) \
	$(TESTIBINS) $(TESTIRUNS) \
	*.o *.ac *.s* *.ac *.c.abox *.tree *.mtree *.rtree *.txt *.s5fused \
	libtest*.c 

EXTRA_DIST = $(wildcard *.r) make-rules io-test*.in bar.c

test50OBJECTS = bar.o

test51LDADD = -L$(SSL)/lib/ssl -l liblib

bar.o: bar.c

include $(top_srcdir)/Makefile.xt

include make-rules

include $(wildcard *.dep)

bootinstall:

