# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (M.de.Jonge@tue.nl)
#
# $Id$

# Always include general make rules
include $(top_srcdir)/Makefile.xt

CGISCRIPTS       = opb-stub.cgi autobundle-stub.cgi pkgs-search-stub.cgi \
                   pkgs-select.cgi depgraph-stub.cgi

# What scipts to build
bin_SCRIPTS      = mkopb.sh
libexec_SCRIPTS  = $(CGISCRIPTS) cgi-lib.sh

pkgdata_DATA     = opb.conf.sample Makefile.opb  \
                   header.html pkgdep.gif pkgdef.gif opb-logo.png

# Optional tests to run
#TESTS           =

# List all files that should be distributed here
EXTRA_DIST       = $(CGISCRIPTS:%=%.src) opb.conf.sample.src \
                   Makefile.opb.src pkgdep.gif pkgdef.gif mkopb.sh.src \
                   cgi-lib.sh.src header.html opb-logo.png

# What should be cleaned
CLEANFILES       = $(CGISCRIPTS) Makefile.opb mkopb.sh opb.conf.sample \
                   cgi-lib.sh

%.sh : %.sh.src Makefile
	sed 's@__AUTOBUNDLE__@$(prefix)@g;\
	     s@__pkgdata__@$(pkgdatadir)@g' < $< > $@ && \
	chmod +x $@

%.cgi : %.cgi.src Makefile
	sed 's@__AUTOBUNDLE__@$(prefix)@g;\
             s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
             s@__DOTTOOLS__@$(DOT_TOOLS)@g;\
             s@__GPP__@$(GPP)@g;\
	     s@__DOTNEATO__@$(DOTNEATO)@g' < $< > $@ && \
	chmod +x $@


%.sample : %.sample.src Makefile
	sed 's@__pkgdata__@$(pkgdatadir)@g' < $< > $@ && \
	chmod +x $@

%.opb : %.opb.src Makefile
	sed 's@__AUTOBUNDLE__@$(prefix)@g;\
             s@__ASFIXTOOLS__@$(ASFIX_TOOLS)@g;\
             s@__SGLR__@$(SGLR)@g;\
	     s@__pkgdata__@$(pkgdatadir)@g' < $< > $@ && \
	chmod +x $@

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
