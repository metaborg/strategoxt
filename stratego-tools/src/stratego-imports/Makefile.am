
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

# $Id: Makefile.am,v 1.7 2002/10/02 09:26:15 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS		= data

# Which Stratego programs to build
STRATEGO_PRG = stratego-imports

# What scipts to build
bin_SCRIPTS	= $(STRATEGO_PRG)
libexec_SCRIPTS	= $(STRATEGO_PRG)

# Optional tests to run
TESTS        = stratego_imports1_check \
               stratego_imports2_check \
               stratego_imports3_check

EXTRA_DIST  += get-modules.r

CLEANFILES  += stratego_imports1_check \
               stratego_imports2_check \
               stratego_imports3_check

# Additional flags for the Stratego compiler
SCFLAGS     += -I $(srcdir)/../stratego \
               -I $(ASFIX_TOOLS)/share/asfix-tools \
               -I $(GRAPH_TOOLS)/share/graph-tools

stratego_imports1_check_prog     = stratego-imports
stratego_imports1_check_switches = -S -I data
stratego_imports1_check_input    = test1.r
stratego_imports1_check_output   = data/test.out
stratego_imports1_check_correct  = data/test.out.correct

stratego_imports2_check_prog     = stratego-imports
stratego_imports2_check_switches = -S -l -I data
stratego_imports2_check_input    = test1.r
stratego_imports2_check_output   = data/test-l.out
stratego_imports2_check_correct  = data/test-l.out.correct

stratego_imports3_check_prog     = stratego-imports
stratego_imports3_check_switches = -S --graphxml -I data
stratego_imports3_check_input    = test1.r
stratego_imports3_check_output   = data/test.xml
stratego_imports3_check_correct  = data/test.xml.correct
