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

# $Id: Makefile.am,v 1.1.1.1 2001/05/30 15:19:04 mdejonge Exp $

TEST_SET = Iter Iter-sep Iter-star Iter-star-sep Nesting-iter-sep1 \
           Nesting-iter-sep2 Nesting-iter-star-sep Empty-iter-star-sep \
	   Alt1a Alt1b Alt2a Alt2b Alt3a Alt3b Alt4a SeqOpt1 SeqOpt2 SeqOpt3 \
	   Seq 

Iter_flags= --lex --layout --pt --list
Iter_sep_flags= --lex --layout --pt --list
Iter_star_flags= --lex --layout --pt --list
Iter_star_sep_flags= --lex --layout --pt --list
Nesting_iter_sep1_flags= --lex --layout --pt --list
Nesting_iter_sep2_flags= --lex --layout --pt --list
Nesting_iter_star_sep_flags= --lex --layout --pt --list
Empty_iter_star_sep_flags= --lex --layout --pt --list
Alt1a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Alt2a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Alt3a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Alt4a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt

EXTRA_DIST = tests.def \
	     $(TEST_SET:%=%.trm) $(TEST_SET:%=%.in) \
             $(TEST_SET:%=%.out) \
             tiny.tree tiny.trm 

TESTS = $(TEST_SET:%=%.sh)


CLEANFILES += $(TEST_SET:%=%.tested) $(TEST_SET:%=%.in)

.PRECIOUS: tests.tbl

testset: tests.tbl $(TEST_SET:%=%.sh) $(TEST_SET:%=%.in) $(TEST_SET:%=%.out)

testsetclean:
	$(RM) tests.tbl testset \
	      $(TEST_SET:%=%.in) $(TEST_SET:%=%.out) $(TEST_SET:%=%.tested) \
	      $(TEST_SET:%=%.sh)
%.sh :
	(\
	   echo 'set -e' ;\
	   echo 'gmake tests.tbl $*.in' ;\
	   echo '../implode-asfix $($(subst -,_,$*)_flags) -i $*.in -o $*.tested' ;\
	   echo 'diff $*.tested $*.out' ;\
	) > $@ && chmod +x $@

%.in :
	PATH=$(SGLR)/bin:$(PATH) sglr -s $* -p tests.tbl -i $*.trm -o $@

%.tbl : %.def
	PATH=$(PGEN)/bin:$(PATH) sdf2table -i $< -o $@

%.out :
	../implode-asfix $($(subst -,_,$*)_flags) -i $*.in -o $@
