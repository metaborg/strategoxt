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

# $Id: Makefile.am,v 1.3 2001/10/10 16:59:14 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data
STRATEGO_PRG = termid-check1 termid-check2 termid-check3

pkgdata_DATA   = termid.r

EXTRA_DIST  += termid.r termid-check1.r termid-check2.r termid-check3.r

TESTS = termid1_check termid2_check termid3_check

termid1_check: termid-check1 
termid2_check: termid-check2
termid3_check: termid-check3


termid1_check_prog    = termid-check1
termid1_check_input   = data/termid1.in
termid1_check_output  = data/termid1.out
termid1_check_correct = data/termid1.correct


termid2_check_prog    = termid-check2
termid2_check_input   = data/termid2.in
termid2_check_output  = data/termid2.out
termid2_check_correct = data/termid2.correct

termid3_check_prog    = termid-check3
termid3_check_input   = data/termid3.in
termid3_check_output  = data/termid3.out
termid3_check_correct = data/termid3.correct

