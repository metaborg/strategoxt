# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
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

# $Id: Makefile.am,v 1.1 2001/06/11 12:09:24 mdejonge Exp $

EXTRA_DIST = test.sdf input.test input.test.tree input.test.out.correct \
             Exp.sdf input.exp input.exp.tree input.exp.out.correct

# Rules to generate testset (requires sdf2table and sglr)
test.tbl : test.sdf
	sdf2table -i $< -o $@

input.test.tree tree : input.test test.tbl
	sglr -t -p test.tbl -i input.test -o input.test.tree

Exp.tbl : Exp.sdf
	sdf2table -i Exp.sdf -o Exp.tbl

input.exp.tree : input.exp Exp.tbl
	sglr -t -p Exp.tbl -i input.exp -o input.exp.tree

