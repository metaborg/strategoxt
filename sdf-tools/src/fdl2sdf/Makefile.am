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

# $Id: Makefile.am,v 1.1 2002/01/17 17:12:54 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.r.dep)

# define any subdir here
SUBDIRS      = data

STRATEGO_PRG = fdl2sdf

bin_SCRIPTS  = $(STRATEGO_PRG)

#TESTS        = sdf2sdf_check

#CLEANFILES  += sdf2sdf_check

EXTRA_DIST   += fdl.r

SCFLAGS     += -I $(srcdir) \
               -I $(srcdir)/../lib \
               -I $(ASFIX_TOOLS)/share/asfix-tools \
               --main $@ 

