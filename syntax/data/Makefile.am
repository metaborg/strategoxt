# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (M.de.Jonge@tue.nl)
#
# $Id: Makefile.am,v 1.8 2002/06/04 07:56:05 mdejonge Exp $

include $(top_srcdir)/Makefile.xt

PKG_FILES = $(wildcard *.pkg) $(wildcard *.bundle) 

EXTRA_DIST     = $(PKG_FILES) $(PKG_FILES:%=%.af)

BOOTCLEANFILES = $(wildcard *.af)

pkgs: $(PKG_FILES:%=%.af)

%.pkg.af :
	$(SGLR)/bin/sglr -p $(top_builddir)/syntax/Autobundle.tbl -2 -i $*.pkg \
	| $(ASFIX_TOOLS)/bin/implode-asfix  -o $@

%.bundle.af :
	$(SGLR)/bin/sglr -p $(top_builddir)/syntax/Autobundle.tbl -2 -i $*.bundle \
	| $(ASFIX_TOOLS)/bin/implode-asfix  -o $@


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
