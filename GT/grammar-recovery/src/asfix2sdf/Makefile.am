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

# $Id: Makefile.am,v 1.1.1.1 2001/06/06 09:48:34 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data

STRATEGO_PRG = asfix2sdf

bin_SCRIPTS  = $(STRATEGO_PRG)

TESTS        = asfix2sdf_check


CLEAN_FILES += asfix2sdf_check

SCFLAGS     += -I $(ASFIXTOOLS)/share/asfix-tools \
	       --main $@

asfix2sdf_check_prog       = asfix2sdf
asfix2sdf_check_input      = data/test1.pico.asfix
asfix2sdf_check_output     = data/test1.pico.norm.af.out
asfix2sdf_check_correct    = data/test1.pico.norm.af.correct

