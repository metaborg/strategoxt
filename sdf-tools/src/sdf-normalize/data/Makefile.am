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

# $Id: Makefile.am,v 1.5 2001/09/03 06:41:17 mdejonge Exp $

EXTRA_DIST   = Test1.def Test1.def.af.out.correct Test1.def.af \
               Test2.def Test2-unfolded.def Test3.def Test3-unfolded.def \
               test1.pico.def.af.correct test1.pico.norm.af.correct \
               test2.pico.def.af.correct test2.pico.norm.af.out

regenerate-tests:
	parse -l sdf -v 2.1 -i ./Test1.def -I -o ./Test1.def.af




