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

# $Id: Makefile.am,v 1.5 2002/12/08 11:24:17 stratego Exp $

include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

SUBDIRS = data

STRATEGO_MODULES = Stratego-Layout.r     Stratego-Specifications.r \
                   Stratego-Lexicals.r   Stratego-Strategies.r \
                   Stratego-Modules.r    Stratego-Sugar.r \
                   Stratego-Overlays.r   Stratego-Syntax.r \
                   Stratego-Rules.r      Stratego-Terms.r \
                   Stratego-Signatures.r

EXTRA_DIST       = $(STRATEGO_MODULES) \
                   README stratego.pp stratego.def

pkgdata_DATA     = $(STRATEGO_MODULES) stratego.pp stratego.pp.af stratego.tbl 

CLEANFILES       = stratego.pp.af stratego.tbl

%.pp.af : %.pp
	$(MAKE) -f $(GPP)/share/gpp/gpp.Makefile $@

#%.tbl : %.def
#	PATH=$(PGEN)/bin/sdf2table -m GB-Main $< -o $@
