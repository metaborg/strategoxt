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

# $Id: Makefile.am,v 1.5 2001/11/22 08:33:10 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

# define any subdir here
SUBDIRS      = data

# What scipts to build
# bin_SCRIPTS  = 

# Tests to run
# TESTS        = program-check

# List all extra files that should be distributed here
EXTRA_DIST   = xt-paths.r.src ppp-wrap.r

# What extra files should be cleaned
CLEANFILES   = xt-paths.r

pkgdata_DATA = xt-paths.r

%.r : %.r.src Makefile
	sed 's@__ATERMTOOLS__@$(ATERM_TOOLS)@g;\
	     s@__ASFIXTOOLS__@$(ASFIX_TOOLS)@g;\
	     s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
	     s@__SDFTOOLS__@$(SDF_TOOLS)@g;\
	     s@__STRATEGOTOOLS__@$(STRATEGO_TOOLS)@g;\
	     s@__GRAMMARRECOVERY__@$(GRAMMAR_RECOVERY)@g;\
	     s@__GB__@$(GB)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__PGEN__@$(PGEN)@g;\
	     s@__STRATEGO__@$(STRATEGO)@g;\
	     s@__XT__@$(prefix)@g'\
	< $< > ${srcdir}/$@


