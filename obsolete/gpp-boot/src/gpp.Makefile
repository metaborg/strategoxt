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

# $Id: gpp.Makefile,v 1.4 2001/08/29 08:40:39 visser Exp $

PREFIX=/home/visser/res/Stratego/gpp-boot
SGLR=

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	@echo "Building $@"
	@PATH=$(PREFIX)/bin:$(SGLR)/bin:$(ASFIXTOOLS)/bin:$(PATH); export PATH ;\
	 sglr -p $(PREFIX)/share/gpp/pp-tables.tbl -i $< \
	   | implode-asfix -S -o $@ 
