# Sdf-Tools
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

# $Id: Makefile.am,v 1.3 2001/06/07 12:32:35 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG = sdf-doc sdf2sg

# What scipts to build
bin_SCRIPTS  = $(STRATEGO_PRG)

# Optional tests to run
#TESTS        = sdf-doc-check sdf2gxml2dot-check

# List all files that should be distributed here
EXTRA_DIST  += sdf-doc-check get-sort-graph.sh.src sdf-doc.make.src \
               sdf2gxml2dot-check

# Additional flags for the Stratego compiler
SCFLAGS      += -I $(ASFIXTOOLS)/share/asfix-tools \
                -I $(srcdir)/../lib -I $(srcdir)/../sdf-wf \
                -I $(GRAPHTOOLS)/share/graph-tools

#% : %.sh.src Makefile
#	@sed 's@__BINDIR__@$(bindir)@g;\
#             s@__DATADIR__@$(pkgdatadir)@g;\
#             s@__GB__@$(GB)@g;\
#             s@__GPP__@$(GPP)@g;\
#             s@__GRAPHVIZ__@$(GRAPHVIZ)@g;\
#             s@__LIBEXEC__@$(libexecdir)@g;\
#             s@__MAKE__@$(MAKE)@g;\
#             s@__VERSION__@$(VERSION)@g;' \
#           < $< > $@
#	chmod 755 $@
#
#%.make : %.make.src Makefile
#	@sed 's@__BINDIR__@$(bindir)@g;\
#             s@__DATADIR__@$(pkgdatadir)@g;\
#             s@__GB__@$(GB)@g;\
#             s@__GPP__@$(GPP)@g;\
#             s@__GRAPHVIZ__@$(GRAPHVIZ)@g;\
#             s@__LIBEXEC__@$(libexecdir)@g;\
#             s@__MAKE__@$(MAKE)@g;\
#             s@__VERSION__@$(VERSION)@g;' \
#           < $< > $@
#	chmod 755 $@
