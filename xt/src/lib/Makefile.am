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

# $Id: Makefile.am,v 1.8 2002/12/11 10:45:38 stratego Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

SUBDIRS		= data

EXTRA_DIST    	= 

CLEANFILES    	=

pkgdata_DATA 	= 

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
	     s@__STRATEGO__@$(SC_BOOT)@g;\
	     s@__XT__@$(prefix)@g'\
	< $< > ${srcdir}/$@


