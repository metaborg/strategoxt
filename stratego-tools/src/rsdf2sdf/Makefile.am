
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

# $Id: Makefile.am,v 1.3 2001/09/01 20:42:29 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS		= data

# Which Stratego programs to build
STRATEGO_PRG = rsdf2sdf

# What scipts to build
bin_SCRIPTS  = $(STRATEGO_PRG)

# Additional flags for the Stratego compiler
SCFLAGS     += -I $(srcdir)/../stratego \
               -I $(ASFIXTOOLS)/share/asfix-tools \
               --main $@
