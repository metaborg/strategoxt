# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (M.de.Jonge@tue.nl)
#
# $Id$

# Always include general make rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

# Which Stratego programs to build
STRATEGO_PRG     = bundle2pkglist

# What scipts to build
bin_PROGRAMS     = $(STRATEGO_PRG)

# Additional flags for the Stratego compiler
STRINCLUDES    = -I $(top_builddir)/syntax -I $(srcdir)/../shared
SCFLAGS        = --main $*

EXTRA_DIST     = $(wildcard *.str)

CLEANFILES     = $(wildcard *.dep)

BOOTCLEANFILES = $(wildcard *.c)

# Copyright (C) 2002-2003 Merijn de Jonge <M.de.Jonge@tue.nl>
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
