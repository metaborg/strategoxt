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

# $Id: Makefile.am,v 1.7 2002/05/08 08:38:05 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG = asfix-yield

# What scipts to build
bin_SCRIPTS	= $(STRATEGO_PRG)
libexec_SCRIPTS	= $(STRATEGO_PRG)

# Optional tests to run
TESTS        = asfix_yield1_check \
               asfix_yield2_check

# What should be cleaned
CLEANFILES   += asfix_yield1_check asfix_yield2_check

# Additional flags for the Stratego compiler
SCFLAGS      += -I $(srcdir)/../asfix

install-exec-local:
	$(RM) ${bindir}/asource ${libexecdir}/asource
	ln -sf asfix-yield ${bindir}/asource
	ln -sf asfix-yield ${libexecdir}/asource

asfix_yield1_check_prog    = asfix-yield
asfix_yield1_check_input   = data/tiny.tree
asfix_yield1_check_output  = data/tiny.txt
asfix_yield1_check_correct = data/tiny.sil

asfix_yield2_check_prog    = asfix-yield
asfix_yield2_check_input   = data/aterms.tree
asfix_yield2_check_output  = data/aterms.txt
asfix_yield2_check_correct = data/aterms.sdf
