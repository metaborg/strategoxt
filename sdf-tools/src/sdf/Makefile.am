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

# $Id: Makefile.am,v 1.1 2001/05/31 14:20:51 mdejonge Exp $

# define any subdir here
SUBDIRS      = data

EXTRA_DIST = $(wildcard *.r) sdf.def sdf.pp sdf.cons.pp sdf.cons.def README

pkgdata_DATA = $(wildcard *.r) \
               sdf.tbl sdf.pp sdf.cons.pp sdf.cons.tbl #sdf.cons.pp.af

#CLEANFILES += sdf.pp.cons.pp.af 

%.tbl : %.def
	PATH=$(PGEN)/bin:$${PATH} sdf2table $< -o $@

#%.pp.af : %.pp
#	( cd ../gpp; $(MAKE) pp-tables.tbl)
#	( cd ../implode; $(MAKE) implode-asfix )
#	PATH=$(SGLR)/bin:$${PATH} sglr -p ../gpp/pp-tables.tbl -i $< \
#	   | ../implode/implode-asfix -o $@

