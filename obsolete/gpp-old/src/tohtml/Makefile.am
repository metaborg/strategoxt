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

# $Id: Makefile.am,v 1.6 2002/05/14 15:14:55 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

# define any subdir here
SUBDIRS       = data

libexec_SCRIPTS = tohtml ismap2usemap
pkgdata_DATA    = tohtml.css

# Optional tests to run
# TESTS         = program-check

# List all files that should be distributed here
EXTRA_DIST      = tohtml.sh.src ismap2usemap.perl.src \
                  tohtml.css

# What should be cleaned
CLEANFILES      = tohtml ismap2usemap

% : %.sh.src Makefile
	sed 's@__BINDIR__@$(bindir)@g;\
	      s@__DATADIR__@$(pkgdatadir)@g;\
	      s@__GRAPHVIZ__@$(GRAPHVIZ)@g;\
              s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
              s@__SGLR__@$(SGLR)@g;\
	      s@__LIBEXEC__@$(libexecdir)@g;\
	      s@__MAKE__@$(MAKE)@g;\
	      s@__VERSION__@$(VERSION)@g;' \
	   < $< > $@
	chmod 755 $@

% : %.perl.src Makefile
	@sed 's@__PERL__@$(PERL)@g;' < $< > $@
	chmod 755 $@
