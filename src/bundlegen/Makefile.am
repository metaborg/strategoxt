# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (M.de.Jonge@tue.nl)
#
# $Id$

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

# define any subdir here
SUBDIRS           = data
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS      = bundlegen

# Additional flags for the Stratego compiler
STRINCLUDES       = -I $(srcdir) -I $(srcdir)/../shared -I $(top_builddir)/syntax
SCFLAGS           = --main $*

EXTRA_DIST        = $(wildcard *.str)

CLEANFILES        = $(wildcard *.dep)
CLEANFILES       += bundlegen1_check \
                    bundlegen2_check \
                    bundlegen3_check \
                    bundlegen4_check \
                    bundlegen5_check \
                    bundlegen6_check

BOOTCLEANFILES    = $(wildcard *.c)

check_PROGRAMS    = version-resolver-test graph-linearize-test \
                    cycle-check-test version-expressions-test

TESTS             = $(check_PROGRAMS) \
                    bundlegen1_check bundlegen2_check bundlegen3_check \
                    bundlegen4_check bundlegen5_check bundlegen6_check

# Additional flags for the Stratego compiler
#STRCFLAGS       += -I $(srcdir)/../shared -I $(ASFIX_TOOLS)/share/asfix-tools -I $(GRAPH_TOOLS)/share/graph-tools

bundlegen1_check_prog     = bundlegen
bundlegen1_check_switches = -I $(srcdir)/data -p pkgb-0.1 -p pkgc-0.1
bundlegen1_check_output   = ./data/bundlegen1_check.out
bundlegen1_check_correct  = $(srcdir)/data/bundlegen1_check.correct

bundlegen2_check_prog     = bundlegen
bundlegen2_check_switches = -I $(srcdir)/data -p pkgb-0.2beta -p pkgc-0.1
bundlegen2_check_output   = ./data/bundlegen2_check.out
bundlegen2_check_correct  = $(srcdir)/data/bundlegen2_check.correct

bundlegen3_check_prog     = bundlegen
bundlegen3_check_switches = -I $(srcdir)/data -p c-0.1 -db b
bundlegen3_check_output   = ./data/bundlegen3_check.out
bundlegen3_check_correct  = $(srcdir)/data/bundlegen3_check.correct


# Check whether replacement of packages with higher version number works
# correctly.
bundlegen4_check_prog     = bundlegen
bundlegen4_check_switches = -I $(srcdir)/data -p test4-q-1 -p test4-a-2 -g
bundlegen4_check_output   = ./data/bundlegen4_check.out
bundlegen4_check_correct  = $(srcdir)/data/bundlegen4_check.correct

# Different versions of a package non of which can be resolved should yield 
# one and only one unresolved package in the package dependency graph.
bundlegen5_check_prog     = bundlegen
bundlegen5_check_switches = -I $(srcdir)/data -p test5-a-1 -g
bundlegen5_check_output   = ./data/bundlegen5_check.out
bundlegen5_check_correct  = $(srcdir)/data/bundlegen5_check.correct

# A non-existent package with higher version number should replace an
# existent package with lower version number.
bundlegen6_check_prog     = bundlegen
bundlegen6_check_switches = -I $(srcdir)/data -p test6-a-1 -g
bundlegen6_check_output   = ./data/bundlegen6_check.out
bundlegen6_check_correct  = $(srcdir)/data/bundlegen6_check.correct

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
