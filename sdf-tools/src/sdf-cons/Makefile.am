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

# $Id: Makefile.am,v 1.2 2001/06/01 14:12:40 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data

STRATEGO_PRG = sdf-cons rm-cons

bin_SCRIPTS  = $(STRATEGO_PRG)

EXTRA_DIST  += KNOWN-BUGS 

TESTS        = sdf_cons_check sdf_cons_injections_check 

SCFLAGS     += -I $(srcdir)/../lib \
               -I $(ASFIXTOOLS)/share/asfix-tools --main $@

CLEANFILES  += sdf_cons_check sdf_cons_injections_check

sdf_cons_check_prog    = sdf-cons
sdf_cons_check_input   = data/test1.sdf.af
sdf_cons_check_output  = data/test1.cons.sdf.af
sdf_cons_check_correct = data/test1.cons.sdf.af.correct

sdf_cons_injections_check_prog     = sdf-cons
sdf_cons_injections_check_switches = --injections
sdf_cons_injections_check_input    = data/sdf-cons-injections.sdf.af
sdf_cons_injections_check_output   = data/sdf-cons-injections.cons.sdf.af
sdf_cons_injections_check_correct  = data/sdf-cons-injections.cons.sdf.af.correct

