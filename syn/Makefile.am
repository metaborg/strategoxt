# KoalaTools -- Tool suite for Koala component model
#
# Author: Merijn de Jonge (mdejonge@cs.uu.nl)
#
# $Id: bundlegen.str 5017 2004-01-27 11:53:48Z merijn $

include $(top_srcdir)/Makefile.xt

koaladeps = KoalaComponentGrammar.sdf KoalaDataGrammar.sdf \
            KoalaLexicalElements.sdf KoalaInterfaceGrammar.sdf  koala.sdf

compositedeps = CompositeSystem.sdf

koala_transformation_deps = $(koaladeps) koala-transformation.sdf

pkgdata_DATA 	= $(wildcard *.sdf) \
                  koala.def koala.tbl koala.rtree koala.pp koala.pp.af \
		  CompositeSystem.def CompositeSystem.tbl \
		  CompositeSystem.rtree CompositeSystem.pp CompositeSystem.pp.af \
                  koala-transformation.def koala-transformation.tbl koala-transformation.rtree \
                  koala-transformation.pp koala-transformation.pp.af

EXTRA_DIST 	= koala.str  \
		  $(pkgdata_DATA)

BOOTCLEANFILES 	= koala.str \
		  $(wildcard *.rtree) $(wildcard *.tbl) $(wildcard *.def) \
		  $(wildcard *.pp.af)

koala.def	: $(koaladeps)
CompositeSystem.def : $(compositedeps)
koala-transformation.def : $(koala_transformation_deps)

PGEN_FLAGS	= -m $*
SDF2RTG_FLAGS   = -m $*

# Copyright (C) 2002-2004 Merijn de Jonge <mdejonge@cs.uu.nl>
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
