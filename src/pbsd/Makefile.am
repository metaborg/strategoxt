# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (M.de.Jonge@tue.nl)
#
# $Id: Makefile.am 4515 2003-11-25 15:38:49Z merijn $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS        = data

# Which Stratego programs to build
STRATEGO_PRG   = pkg-switch pkg-set

# What programs to build
bin_PROGRAMS   = $(STRATEGO_PRG) 

# These scripts are still under development and will not yet get installed
noinst_SCRIPTS    = pkg-edit.sh pkg-release.sh pkg-revert.sh

# Additional flags for the Stratego compiler
STRINCLUDES    = -I $(srcdir)/../shared -I $(top_builddir)/syntax
SCFLAGS        = --main $*

EXTRA_DIST     = $(wildcard *.str) pkg-edit.sh.src pkg-release.sh.src \
                 pkg-revert.sh.src pbsd-lib.sh

CLEANFILES     = $(wildcard *.dep)
CLEANFILES    += pkg_switch1_check \
                 pkg_switch2_check \
                 pkg_switch3_check \
                 pkg-edit.sh pkg-release.sh pkg-revert.sh

BOOTCLEANFILES = $(wildcard *.c)

TESTS          = pkg_switch1_check \
                 pkg_switch2_check \
                 pkg_switch3_check

# Test1: swap location fields of aterm-dev-1.4.4
pkg_switch1_check_prog     = pkg-switch
pkg_switch1_check_input    = $(top_srcdir)/syntax/data/aterm-dev-1.4.4.pkg.af
pkg_switch1_check_output   = ./data/pkg-switch1_check.out
pkg_switch1_check_correct  = $(srcdir)/data/aterm-dev-1.4.4.pkg.af

# Test2: swap location field of test1's output file and check whether it
# equals the origional file
pkg_switch2_check_prog     = pkg-switch
pkg_switch2_check_input    = $(srcdir)/data/aterm-dev-1.4.4.pkg.af
pkg_switch2_check_output   = ./data/pkg-switch2_check.out
pkg_switch2_check_correct  = $(top_srcdir)/syntax/data/aterm-dev-1.4.4.pkg.af

# Test3: swapping the location field of a normal package should not affect
# the package
# equals the origional file
pkg_switch3_check_prog     = pkg-switch
pkg_switch3_check_input    = $(top_srcdir)/syntax/data/aterm-1.4.4.pkg.af
pkg_switch3_check_output   = ./data/pkg-switch3_check.out
pkg_switch3_check_correct  = $(top_srcdir)/syntax/data/aterm-1.4.4.pkg.af

pkg-edit.sh : pkg-edit.sh.src
	sed '' < $<  > $@ \
	&& chmod +x $@

pkg-release.sh : pkg-release.sh.src
	sed 's@__AUTOBUNDLE__@$(prefix)@g;\
             s@__GPP__@$(GPP)@g'\
	< $<  > $@ \
	&& chmod +x $@

pkg-revert.sh : pkg-revert.sh.src
	sed '' < $<  > $@ \
	&& chmod +x $@

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
