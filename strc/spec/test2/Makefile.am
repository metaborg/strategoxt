.PRECIOUS: %.ac %.c

SINCLUDES	 = -I $(STRATEGO_FRONT)/share/stratego-front \
	  	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
	  	   -I $(srcdir)/../front		     \
	  	   -I $(srcdir)/../match		     \
	  	   -I $(srcdir)/../opt			     \
	  	   -I $(srcdir)/../lib			     \
		   -I $(SSL)/share/ssl

TESTFILES = $(wildcard *.r)
TESTBINS = $(subst .r,.bin,$(TESTFILES))
TESTSRCS = $(subst .r,.c,$(TESTFILES))
TESTRUNS = $(subst .r,.run,$(TESTFILES))

IOTESTFILES = $(wildcard io-test*.r)
IOTESTSRCS = $(subst .r,.c,$(IOTESTFILES))
IOTESTBINS = $(subst .r,.bin,$(IOTESTFILES))
IOTESTRUNS = $(subst .r,.io-run,$(IOTESTFILES))

TESTS = $(TESTBINS) $(IOTESTBINS)

TESTIBINS = $(subst .r,.ibin,$(TESTFILES))
TESTIRUNS = $(subst .r,.irun,$(TESTFILES))

check-strc: $(TESTIRUNS)

CLEANFILES = $(TESTBINS) $(IOTESTBINS) $(TESTRUNS) $(IOTESTRUNS)  $(TESTSRCS) $(IOTESTSRCS) *.o *.c *.ac *.s? *.tree *.c.abox

EXTRA_DIST = $(wildcard *.r) $(wildcard *.res) $(wildcard *.meta)

#include $(top_srcdir)/share/Stratego.Make

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)

bootinstall: