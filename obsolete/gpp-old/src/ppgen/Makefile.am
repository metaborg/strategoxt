# GPP -- Grammar Tools
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

# $Id: Makefile.am,v 1.4 2002/05/14 15:24:37 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego
include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG = Pp-gen

# What scipts to build
libexec_SCRIPTS  = $(STRATEGO_PRG)
bin_SCRIPTS = ppgen

pkgdata_DATA = sdf.cons.tbl

# Optional tests to run
TESTS        = no_generation_for_bracket_function_check

# List all files that should be distributed here
EXTRA_DIST   = $(wildcard *.r) \
               ppgen.sh.src sdf.cons.def

BOOTSOURCES  = $(STRATEGO_PRG:%=%.c) $(wildcard *.src) sdf.cons.tbl

# What should be cleaned
CLEANFILES  += ppgen no_generation_for_bracket_function_check sdf.cons.tbl

# Additional flags for the Stratego compiler
SCFLAGS     += -I $(srcdir)/../lib -I $(ASFIX_TOOLS)/share/asfix-tools --main $@

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

%.tbl : %.def
	PATH=$(PGEN)/bin:$${PATH} sdf2table -m GB-Main $< -o $@

no_generation_for_bracket_function_check_prog    = Pp-gen
no_generation_for_bracket_function_check_input   = data/ppgencheck1.in
no_generation_for_bracket_function_check_output  = data/ppgencheck1.out
no_generation_for_bracket_function_check_correct = data/ppgencheck1.correct

