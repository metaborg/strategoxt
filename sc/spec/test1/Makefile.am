# Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.

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

SINCLUDES = -I $(STRATEGOLIB)/share/ssl

TESTFILES = $(wildcard test*.r)
TESTBINS = $(subst .r,.bin,$(TESTFILES))
TESTSRCS = $(subst .r,.c,$(TESTFILES))
TESTRUNS = $(subst .r,.run,$(TESTFILES))

IOTESTFILES = $(wildcard io-test*.r)
IOTESTSRCS = $(subst .r,.c,$(IOTESTFILES))
IOTESTBINS = $(subst .r,.bin,$(IOTESTFILES))
IOTESTRUNS = $(subst .r,.io-run,$(IOTESTFILES))

TESTIBINS = $(subst .r,.ibin,$(TESTFILES))
TESTIRUNS = $(subst .r,.irun,$(TESTFILES))

check: $(TESTRUNS) $(IOTESTRUNS) 

check-sc: $(TESTIRUNS)

CLEANFILES = \
	$(TESTBINS) $(IOTESTBINS) \
	$(TESTRUNS) $(IOTESTRUNS) \
	$(TESTSRCS) $(IOTESTSRCS) \
	$(TESTIBINS) $(TESTIRUNS) \
	*.o *.ac *.s? *.ac *.c.abox *.tree

EXTRA_DIST = $(wildcard *.r) make-rules io-test*.in

#include $(top_srcdir)/share/Stratego.Make

include make-rules

include $(wildcard *.dep)

bootinstall:
