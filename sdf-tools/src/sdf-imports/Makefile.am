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

# $Id: Makefile.am,v 1.4 2001/11/22 08:16:00 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG = sdf-imports

# What scipts to build
bin_SCRIPTS	= $(STRATEGO_PRG)
libexec_SCRIPTS	= $(STRATEGO_PRG)

# List all files that should be distributed here
EXTRA_DIST   +=  get-modules.r

# Additional flags for the Stratego compiler
SCFLAGS     += -I $(srcdir)/../lib \
               -I $(ASFIX_TOOLS)/share/asfix-tools \
               -I $(GRAPH_TOOLS)/share/graph-tools

