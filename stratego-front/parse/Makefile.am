# Copyright (C) 2002 Eelco Visser <visser@acm.org>
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

SCFLAGS = -I ../sig --main $@ --C-include "\"conf.h\"" -CI "-I.."


bin_SCRIPTS = meta-explode parse-cmod stratego-desugar

pkgdata_DATA = parse-cmod.config

plugindir = $(SC)/share/pack-stratego-plugins
plugin_DATA = parse-cmod.plugin

CLEANFILES = meta-explode parse-cmod stratego-desugar parse-cmod.config $(wildcard *.dep)

EXTRA_DIST = $(wildcard *.r) $(wildcard *.cr) $(wildcard *.syn) \
	$(wildcard *.rtree) $(wildcard *.src) $(wildcard *.c)  $(wildcard *.h.in)

%: %.src Makefile
	sed 's#__prefix__#$(prefix)#g; \
	     s#__datadir__#$(datadir)#g;\
	     s#__pkgdatadir__#$(pkgdatadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
	     s#__PACKAGE__#$(PACKAGE)#g;\
	     s#__SC__#$(SC)#g; \
	     s#__SGLR__#$(SGLR)#g; \
	     s#__ASFIX_TOOLS__#$(ASFIX_TOOLS)#g; \
	     s#__STRATEGO_TOOLS__#$(STRATEGO_TOOLS)#g; \
	     s#__SDF_TOOLS__#$(SDF_TOOLS)#g; \
	     s#__GPP__#$(GPP)#g; \
	     s#__PGEN__#$(PGEN)#g;' \
	  < $< > $@

SCcomp = $(SC)/bin/sc

% : %.r
	$(SCcomp) $(SCFLAGS) -i $*

% : %.cr
	$(SCcomp) $(SCFLAGS) -i $*

%.dep:
	touch $@

include $(wildcard *.dep)
