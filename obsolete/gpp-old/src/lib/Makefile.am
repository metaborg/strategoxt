# GPP -- Grammar Tools
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

# $Id: Makefile.am,v 1.1 2001/12/18 11:25:30 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego
include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG =

# What scipts to build
libexec_SCRIPTS  =
bin_SCRIPTS = 

pkgdata_DATA = gpp.Makefile pp-tables.tbl pp-tables.pp pp-tables.pp.af

# List all files that should be distributed here
EXTRA_DIST   = $(wildcard *.r) gpp.Makefile.src \
               pp-tables.def pp-tables.pp

BOOTSOURCES  = $(EXTRA_DIST)

# What should be cleaned
CLEANFILES  += gpp.Makefile pp-tables.pp.af pp-tables.tbl

gpp.Makefile : gpp.Makefile.src Makefile
	sed 's@__ASFIX2ABOX__@$(prefix)@g;\
	     s@__ABOX2LATEX__@$(prefix)@g;\
	     s@__ABOX2HTML__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__ASFIXTOOLS__@$(ASFIX_TOOLS)@g;\
	     s@__PKGDATA__@$(pkgdatadir)@g'\
	       < $< > $@
%.tbl : %.def
	PATH=$(PGEN)/bin:$${PATH} sdf2table -m GB-Main $< -o $@

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	PATH=$(bindir):$(SGLR)/bin:$${PATH}; export PATH ;\
	sglr -2 -p ./pp-tables.tbl -i $< \
	   | implode-asfix -S -o $@ 
