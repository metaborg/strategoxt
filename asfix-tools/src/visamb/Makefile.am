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

# $Id: Makefile.am,v 1.5 2002/05/08 08:44:45 mdejonge Exp $

include $(srcdir)/../templates/make_rules 
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS         = data

STRATEGO_PRG    = Vis-amb

libexec_SCRIPTS = $(STRATEGO_PRG)
pkgdata_DATA    = Vis-amb.r

TESTS           = visamb1_check visamb2_check

SCFLAGS        += -I $(srcdir)/../asfix --main $*

CLEANFILES     += visamb1_check visamb2_check

visamb1_check_prog    = Vis-amb
visamb1_check_input   = data/input.test.tree
visamb1_check_output  = data/input.test.tree.out
visamb1_check_correct = data/input.test.tree.out.correct

visamb2_check_prog    = Vis-amb
visamb2_check_input   = data/input.exp.tree
visamb2_check_output  = data/input.exp.tree.out
visamb2_check_correct = data/input.exp.tree.out.correct
