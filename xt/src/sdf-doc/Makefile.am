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

# $Id: Makefile.am,v 1.3 2001/06/11 12:17:52 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules

# define any subdir here
SUBDIRS      = data


# What scipts to build
bin_SCRIPTS  = get-sort-graph

pkgdata_DATA = sdf-doc.make

# Optional tests to run
TESTS        = sdf2gxml2dot-check

# List all files that should be distributed here
EXTRA_DIST  += get-sort-graph.sh.src sdf-doc.make.src \
               sdf2gxml2dot-check.sh.src

CLEANFILES  += sdf2gxml2dot-check get-sort-graph sdf-doc.make

% : %.sh.src Makefile
	@sed 's@__DATADIR__@$(pkgdatadir)@g;\
              s@__GRAPHTOOLS__@$(GRAPHTOOLS)@g;\
              s@__SDFTOOLS__@$(SDFTOOLS)@g'\
           < $< > $@ && \
	chmod 755 $@

%.make : %.make.src Makefile
	@sed 's@__BINDIR__@$(bindir)@g;\
              s@__DATADIR__@$(pkgdatadir)@g;\
              s@__GB__@$(GB)@g;\
              s@__GRAPHVIZ__@$(GRAPHVIZ)@g;\
              s@__GRAPHTOOLS__@$(GRAPHTOOLS)@g;\
              s@__SDFTOOLS__@$(SDFTOOLS)@g;\
              s@__ASFIXTOOLS__@$(ASFIXTOOLS)@g;\
              s@__LIBEXEC__@$(libexecdir)@g;\
              s@__MAKE__@$(MAKE)@g;\
              s@__VERSION__@$(VERSION)@g;' \
           < $< > $@
	chmod 755 $@
