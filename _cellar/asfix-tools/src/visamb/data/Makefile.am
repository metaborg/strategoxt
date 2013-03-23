# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
# $Id: Makefile.am,v 1.4 2001/09/18 12:46:25 mdejonge Exp $

EXTRA_DIST = test.sdf input.test input.test.tree input.test.tree.out.correct \
             Exp.sdf input.exp input.exp.tree input.exp.tree.out.correct

# Rules to generate testset (requires sdf2table and sglr)
test.tbl : test.sdf
	sdf2table -i $< -o $@

input.test.tree tree : input.test
	$(MAKE) test.tbl
	sglr -2 -t -p test.tbl -i input.test -o input.test.tree

Exp.tbl : Exp.sdf
	sdf2table -i Exp.sdf -o Exp.tbl

input.exp.tree : input.exp 
	$(MAKE) Exp.tbl
	sglr -2 -t -p Exp.tbl -i input.exp -o input.exp.tree

