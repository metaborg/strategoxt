# GT -- Grammar Tools
# Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>
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

# $Id: Makefile.am,v 1.1.1.1 2001/05/31 14:20:52 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data

STRATEGO_PRG = norm-lit de-norm-lit \
               sdf-normalize sdf-de-normalize \
               asfix2sdf unfold-literal

bin_SCRIPTS  = $(STRATEGO_PRG)

TESTS        = sdf-normalize-check \
               asfix2sdf-de-normalize-check

EXTRA_DIST  += sdf-normalize-check \
               asfix2sdf-de-normalize-check

SCFLAGS     += -I $(srcdir)/../lib \
	       -I $(srcdir)/../sdf-bracket \
               -I $(ASFIXTOOLS)/share/asfix-tools \
	       --main $@
