# GT -- Grammar Tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
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

# $Id: Makefile.am,v 1.2 2001/08/28 15:16:51 mdejonge Exp $

TEST_SET = Opt-seq Opt-seq2 Opt-iter Opt-iter1 Iter-sep Iter-sep1 Iter-sep2 Iter-sep3 \
	   Iter-sep-seq Iter-sep-seq2 Alt Alt2 Alt3 Seq Iter-seq Seq2 Seq3

EXTRA_DIST = tests.def tests.pp  \
	     $(TEST_SET:%=%.trm) $(TEST_SET:%=%-asfix.in) $(TEST_SET:%=%-af.in)\
             $(TEST_SET:%=%.out) \
	     ppgen1.def ppgen1.correct ppgen1.in

TESTS = $(TEST_SET:%=%-asfix.sh) $(TEST_SET:%=%-af.sh)

CLEANFILES += $(TEST_SET:%=%.tested)

.PRECIOUS: tests.tbl

testset: tests.tbl $(TEST_SET:%=%-asfix.sh) $(TEST_SET:%=%-af.sh)  $(TEST_SET:%=%-asfix.in) $(TEST_SET:%=%-af.in) $(TEST_SET:%=%.out)

testsetclean:
	$(RM) tests.pp.af tests.tbl tests.pp.af \
	      $(TEST_SET:%=%-asfix.in) $(TEST_SET:%=%-af.in) $(TEST_SET:%=%.out) $(TEST_SET:%=%.tested) \
	      $(TEST_SET:%=%-asfix.sh) $(TEST_SET:%=%-af.sh)
%-asfix.sh :
	(\
	   echo 'set -e' ;\
	   echo '$(MAKE) tests.tbl tests.pp.af $*-asfix.in' ;\
	   echo '../Asfix2abox -p tests.pp.af -i ${srcdir}/$*-asfix.in -o $*.tested' ;\
	   echo 'diff $*.tested ${srcdir}/$*.out' ;\
	) > $@ && chmod +x $@

%-af.sh :
	(\
	   echo 'set -e' ;\
	   echo '$(MAKE) tests.tbl tests.pp.af $*-af.in' ;\
	   echo '../Ast2abox -p tests.pp.af -i ${srcdir}/$*-af.in -o $*.tested' ;\
	   echo 'diff $*.tested ${srcdir}/$*.out' ;\
	) > $@ && chmod +x $@
	   
%-asfix.in : 
	PATH=$(SGLR)/bin:$(PATH) sglr -s $* -p tests.tbl -i ${srcdir}/$*.trm \
	| $(ASFIXTOOLS)/bin/implode-asfix --lex --pt --list -o $@

%-af.in : 
	PATH=$(SGLR)/bin:$(PATH) sglr -s $* -p tests.tbl -i $[srcdir}/$*.trm \
	| $(ASFIXTOOLS)/bin/implode-asfix -o $@

%.tbl : %.def
	PATH=$(PGEN)/bin:$(PATH) sdf2table -i $< -o $@

%.out :
	$(MAKE) tests.pp.af
	../Asfix2abox -p tests.pp.af -i ${srcdir}/$*-asfix.in -o $@

%.pp.af : %.pp ../pp-tables.tbl
	PATH=$(SGLR)/bin:$(PATH) sglr -p ../pp-tables.tbl -i $< \
	   | $(ASFIXTOOLS)/bin/implode-asfix -o $@

ppgen1.in:
	parse -l sdf -v 2.1 -i ppgen1.def -I | sdf-bracket > $@
