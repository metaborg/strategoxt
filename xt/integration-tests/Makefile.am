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

# $Id: Makefile.am,v 1.7 2001/11/23 08:12:21 mdejonge Exp $

SUBDIRS      = data 

# Optional tests to run
TESTS        = parsesdf-yield-check \
 	       parsesdf-implode-sdf2text-check \
               parseyacc-yacc2sdf-sdf2text-check


# List all files that should be distributed here
EXTRA_DIST   = parsesdf-yield-check.src \
	       parsesdf-implode-sdf2text-check.src \
               parseyacc-yacc2sdf-sdf2text-check.src

# What should be cleaned
CLEANFILES   = parsesdf-yield-check \
	       parsesdf-implode-sdf2text-check \
               parseyacc-yacc2sdf-sdf2text-check

# Generate test-tools
%-check: %-check.src Makefile.am
	sed 's#__XT__#$(prefix)#g;\
             s#__GRAMMARRECOVERY__#$(GRAMMAR_RECOVERY)#g;\
             s#__GPP__#$(GPP)#g;\
             s#__ASFIXTOOLS__#$(ASFIX_TOOLS)#g;\
	     s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@
