# GT -- Grammar Tools
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

# $Id: Makefile.am,v 1.2 2001/06/01 14:12:54 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG = sdf-wf

# What scipts to build
bin_SCRIPTS  = $(STRATEGO_PRG)

# Optional tests to run
TESTS        = sdf_wf_check

# List all files that should be distributed here
EXTRA_DIST  += sdf-analysis.r

CLEANFILES  += sdf_wf_check

# Additional flags for the Stratego compiler
SCFLAGS     += -I $(ASFIXTOOLS)/share/asfix-tools --main sdf-wf

sdf_wf_check_prog     = sdf-wf
sdf_wf_check_switches = -o /dev/null -S 2>$${output}
sdf_wf_check_input    = data/test1.sdf.af
sdf_wf_check_output   = data/test1.sdf.wf.out
sdf_wf_check_correct  = data/test1.sdf.wf.ok
