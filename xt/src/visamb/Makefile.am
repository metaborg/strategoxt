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

# $Id: Makefile.am,v 1.2 2001/06/11 12:29:59 mdejonge Exp $

include $(srcdir)/../templates/make_rules 
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

STRATEGO_PRG = visamb

bin_SCRIPTS  = $(STRATEGO_PRG)

pkgdata_DATA = visamb.pp visamb.pp.af

TESTS        = visamb1_check visamb2_check
CLEANFILES  += visamb1_check visamb2_check

EXTRA_DIST  += visamb.pp

SCFLAGS     += -I $(srcdir)/../lib \
               -I $(ASFIXTOOLS)/share/asfix-tools

visamb1_check_prog    = visamb
visamb1_check_input   = data/input.test.tree
visamb1_check_output  = data/input.test.tree.out
visamb1_check_correct = data/input.test.tree.out.correct

visamb2_check_prog    = visamb
visamb2_check_input   = data/input.exp.tree
visamb2_check_output  = data/input.exp.tree.out
visamb2_check_correct = data/input.exp.tree.out.correct

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	$(MAKE) -f $(GPP)/share/gpp/gpp.Makefile $@
