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

# $Id: Makefile.am,v 1.4 2001/11/22 08:16:02 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.r.dep)

# define any subdir here
SUBDIRS      = data

STRATEGO_PRG = sdf2asdf

bin_SCRIPTS	= $(STRATEGO_PRG)
libexec_SCRIPTS	= $(STRATEGO_PRG)

TESTS        = sdf2asdf_check

EXTRA_DIST  += Sdf2ASdf.r

CLEANFILES  += sdf2asdf_check

SCFLAGS     += -I $(srcdir)/../lib -I $(ASFIX_TOOLS)/share/asfix-tools

sdf2asdf_check_prog    = sdf2asdf
sdf2asdf_check_input   = data/test.def.af
sdf2asdf_check_output  = data/test.def.af.out
sdf2asdf_check_correct = data/test.def.af.out.correct

