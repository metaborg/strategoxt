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

# $Id: Makefile.am,v 1.2 2001/09/18 15:38:15 jvisser Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

STRATEGO_PRG = yacc2sdf

bin_SCRIPTS	= $(STRATEGO_PRG)
libexec_SCRIPTS	= $(STRATEGO_PRG)

TESTS        = yacc2sdf_check

EXTRA_DIST  += yacc.r

CLEANFILES  += yacc2sdf_check

SCFLAGS     += -I $(ASFIXTOOLS)/share/asfix-tools


yacc2sdf_check_prog    = yacc2sdf
yacc2sdf_check_input   = data/yacc2sdf-check.input
yacc2sdf_check_output  = data/yacc2sdf-check.output
yacc2sdf_check_correct = data/yacc2sdf-check.reference
