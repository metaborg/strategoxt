# Sdf-Tools
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

# $Id: Makefile.am,v 1.1 2001/06/07 14:04:02 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.r.dep)

# define any subdir here
SUBDIRS      = data

STRATEGO_PRG = sdf2sdf

bin_SCRIPTS  = $(STRATEGO_PRG)

TESTS        = sdf2sdf_check

CLEANFILES  += sdf2sdf_check

SCFLAGS     += -I $(srcdir)/../lib \
               -I $(ASFIXTOOLS)/share/asfix-tools \
               --main sdf2sdf

sdf2sdf_check_prog     = sdf2sdf
sdf2sdf_check_switches = --sdfcons --sdf2asdf --sdf-bracket
sdf2sdf_check_input    = data/Identifiers.sdf
sdf2sdf_check_output   = data/Identifiers.sdf.out
sdf2sdf_check_correct  = data/Identifiers.sdf.out.correct
