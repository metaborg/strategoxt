#
#    boxenv -- A LaTeX Style File For Formatting Box Expressions
#    Copyright (C) 1998-2000  Merijn de Jonge (Merijn.de.Jonge@cwi.nl). 
#
#    This program is free software; you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation; either version 2 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program; if not, write to the Free Software
#    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
#
#
# $Id: Makefile.am,v 1.5 2003/03/21 16:41:03 stratego Exp $

include ../templates/make_rules

SUBDIRS    = data

# TODO: make boxenv.sty part of a distribution

SRCS       = boxenv.ins boxenv.doc
EXTRA_DIST = $(SRCS) boxenv.ins boxenv.doc
CLEANFILES = $(pkgdata_DATA) *.log  *~

pkgdata_DATA=boxenv.sty

boxenv.sty: $(SRCS)
	TEXINPUTS=$$TEXINPUTS:$(srcdir) $(LATEX)/bin/latex boxenv.ins > /dev/null