# GT -- Grammar Tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
# $Id: Makefile.am,v 1.9 2002/12/30 15:27:00 stratego Exp $

TEST_SET = Iter Iter-sep Iter-star Iter-star-sep Nesting-iter-sep1 \
           Nesting-iter-sep2 Nesting-iter-star-sep Empty-iter-star-sep \
	   Alt1a Alt1b Alt2a Alt2b Alt3a Alt3b Alt4a SeqOpt1 SeqOpt2 SeqOpt3 \
	   Seq Var1 Var2 Or Concrete Anno

Iter_flags= --lex --layout --pt --list --appl --inj
Iter_sep_flags= --lex --layout --pt --list --appl --inj
Iter_star_flags= --lex --layout --pt --list --appl --inj
Iter_star_sep_flags= --lex --layout --pt --list --appl --inj
Nesting_iter_sep1_flags= --lex --layout --pt --list --appl --inj
Nesting_iter_sep2_flags= --lex --layout --pt --list --appl --inj
Nesting_iter_star_sep_flags= --lex --layout --pt --list --appl --inj
Empty_iter_star_sep_flags= --lex --layout --pt --list --appl --inj
Alt1a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Alt2a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Alt3a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Alt4a_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt

Var1_flags= --lex --layout --lit --alt --appl --inj --list --seq --pt
Var2_flags=

Concrete_flags= --concrete
Anno_flags= --concrete

EXTRA_DIST = \
  $(TEST_SET:%=%.trm) \
  $(TEST_SET:%=%.out) \
  tiny.tree tiny.trm tests.def

TESTS = $(TEST_SET:%=%.sh)

CLEANFILES = \
  $(TEST_SET:%=%.tested) \
  $(TEST_SET:%=%.in) \
  $(TEST_SET:%=%.sh) \
  tests.tbl

.PRECIOUS: tests.tbl

testset: tests.tbl $(TEST_SET:%=%.sh) $(TEST_SET:%=%.in) $(TEST_SET:%=%.out)

testsetclean:
	$(RM) tests.tbl testset \
	      $(TEST_SET:%=%.in) $(TEST_SET:%=%.out) $(TEST_SET:%=%.tested) \
	      $(TEST_SET:%=%.sh)
%.sh :
	(\
	   echo 'set -e' ;\
	   echo '${MAKE} tests.tbl $*.in' ;\
	   echo '../implode-asfix $($(subst -,_,$*)_flags) -i $(srcdir)/$*.in -o $*.tested' ;\
	   echo 'diff $*.tested $(srcdir)/$*.out' ;\
	) > $@ && chmod +x $@

%.in :
	PATH=$(SGLR)/bin:$${PATH} sglr -t -2 -s $* -p tests.tbl -i $*.trm -o $@

%.tbl : %.def
	PATH=$(PGEN)/bin:$${PATH} sdf2table -i $< -o $@

%.out :
	../implode-asfix $($(subst -,_,$*)_flags) -i $*.in -o $@
