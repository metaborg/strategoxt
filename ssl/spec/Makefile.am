# Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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

SUBDIRS = data

SCFLAGS = -I $(srcdir)

parsed = $(subst .r,.rtree,$(wildcard *.r))

pkgdata_DATA = $(parsed)

# install .r files in $(prefix)/share/ssl/spec/

TESTS = $(subst .r,,$(wildcard *-test.r))

EXTRA_DIST = $(wildcard *.r) $(pkgdata_DATA)

CLEANFILES = $(TESTS) $(bin_SCRIPTS) $(parsed)

SC = $(STRATEGO)/bin/sc

%.rtree: %.r $(STRATEGO)/bin/parse-mod
	$(STRATEGO)/bin/parse-mod -i $< -o $@

% : %.r
	$(SC) $(SCFLAGS) -i $*

%.dep:
	touch $@

include $(wildcard *.dep)
