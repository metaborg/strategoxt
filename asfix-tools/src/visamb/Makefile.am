# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
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

# $Id: Makefile.am,v 1.1 2001/05/30 15:19:01 mdejonge Exp $

include $(srcdir)/../templates/make_rules 
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

STRATEGO_PRG = visamb

bin_SCRIPTS  = $(STRATEGO_PRG)
pkgdata_DATA = visamb.pp #visamb.pp.af

TESTS        = visamb-check

EXTRA_DIST  += asfix.r sdf-pp.r sdf.r visamb-check \
               input.exp input.test test.sdf Exp.sdf visamb.pp

SCFLAGS     += -I $(srcdir)/../lib -I $(srcdir)/../sdf-pp

# rule to generate imploded pretty-print tables
#%.pp.af : %.pp
#	( cd ../gpp; $(MAKE) pp-tables.tbl)
#	( cd ../implode; $(MAKE) implode-asfix )
#	PATH=$(SGLR)/bin:$${PATH} sglr -p ../gpp/pp-tables.tbl -i $< \
#	   | ../implode/implode-asfix -o $@
