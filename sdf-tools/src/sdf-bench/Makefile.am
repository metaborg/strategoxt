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

# $Id: Makefile.am,v 1.2 2001/06/01 14:12:36 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS         = data

STRATEGO_PRG    = runbm

bin_SCRIPTS     = sdf-bench 

libexec_SCRIPTS = $(STRATEGO_PRG)

EXTRA_DIST     += sglr-stats.sdf benchmark.sdf sdf-bench.src

CLEANFILES     += sglr-stats.tbl sdf-bench benchmark.tbl

pkgdata_DATA    = sglr-stats.tbl benchmark.tbl

sdf-bench: sdf-bench.src Makefile
	sed 's#__PREFIX__#$(prefix)#g' < ${srcdir}/sdf-bench.src > sdf-bench

%.tbl: %.sdf
	PATH=$(PGEN)/bin:$(PATH) sdf2table -i $< -o $@
