# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (mdejonge@cs.uu.nl)
#
# $Id$

# Always include general make rules
include $(top_srcdir)/Makefile.xt

# Optional tests to run
check_PROGRAMS = version-comparison-test

TESTS          = version-comparison-test

noinst_HEADERS = autobundle-version.c

# Additional flags for the Stratego compiler
SCFLAGS        = --main $*

# List all files that should be distributed here
EXTRA_DIST     = autobundle-version.str.src \
                 $(wildcard *.str)

# What should be cleaned
CLEANFILES     = $(wildcard *.dep)

BOOTCLEANFILES = autobundle-version.str

autobundle-version.str : autobundle-version.str.src Makefile.am
	sed 's/\@VERSION\@/$(VERSION)/' < $< > $@


# Copyright (C) 2002-2004 Merijn de Jonge <mdejonge@cs.uu.nl>
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
