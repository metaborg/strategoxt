# GT -- Grammar Tools
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

# $Id: Makefile.am,v 1.3 2001/11/22 08:27:47 mdejonge Exp $

EXTRA_DIST = yacc2sdf-check.input yacc2sdf-check.reference

# Generate a new input term for yacc2sdf and a new reference output term.
# These terms are use to check the operation of yacc2sdf during "make check"
#
# issue the command 
#    make check-data YACC_LOCATION=<location where yacc source>
#
# for example
#    make check-data YACC_LOCATION=/opt/projects/gb/spec/yacc
#
check-data: yacc2sdf-check.input yacc2sdf-check.reference

yacc2sdf-check.input: 
	sglr -2 -p $(YACC_LOCATION)/yacc.tbl -i $(YACC_LOCATION)/data/c5.1.y \
	   | $(ASFIX_TOOLS)/bin/implode-asfix > $@

yacc2sdf-check.reference: 
	../yacc2sdf -i $< -o $@
