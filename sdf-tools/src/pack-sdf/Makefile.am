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

# $Id: Makefile.am,v 1.2 2001/06/01 14:12:33 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

STRATEGO_PRG = pack-sdf

bin_SCRIPTS  = $(STRATEGO_PRG)

TESTS        = pack_sdf_check

EXTRA_DIST  += syntax-test.sdf syntax-test2.sdf syntax-test3.sdf \
	       syntax-test.def.dep.correct

CLEAN_FILES += pack_sdf_check
SCFLAGS      = -I $(srcdir)/../lib -I $(ASFIXTOOLS)/share/asfix-tools

pack_sdf_check_prog     = pack-sdf
pack_sdf_check_switches = -I ../slib/spec -dep syntax-test.def -o /dev/null
pack_sdf_check_input    = syntax-test.sdf
pack_sdf_check_output   = syntax-test.def.dep
pack_sdf_check_correct  = syntax-test.def.dep.correct


