# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (M.de.Jonge@tue.nl)
#
# $Id$

# Always include general make rules
include $(top_srcdir)/Makefile.xt

TEMPLATES        = AUTHORS.templ Makefile.am.templ README.templ \
                   acinclude.m4 Makefile.am.pre-checks.templ \
                   NEWS.templ ChangeLog.templ

# What scipts to build
bin_SCRIPTS      = autobundle
pkgdata_DATA     = collect.sh $(TEMPLATES)

# Optional tests to run
#TESTS           =

# List all files that should be distributed here
EXTRA_DIST       = autobundle.sh.src collect.sh $(TEMPLATES)

# What should be cleaned
CLEANFILES       = autobundle

# Location of autobundle server
AUTOBUNDLE_URL   = http://fuye.sen.cwi.nl:8080/cgi-bin/package-base/autobundle-stub.cgi

% : %.sh.src Makefile
	sed 's@__PKGDATA__@$(pkgdatadir)@g;\
             s@__GNUAUTOMAKE__@$(GNUAUTOMAKE)@g;\
             s@__GNUAUTOCONF__@$(GNUAUTOCONF)@g;\
             s@__GNUMAKE__@$(GNUMAKE)@g;\
	     s@__BINDIR__@$(bindir)@g;\
	     s@__VERSION__@$(VERSION)@g;\
	     s@__AUTOBUNDLE_URL__@$(AUTOBUNDLE_URL)@g' < $< > $@ && \
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
