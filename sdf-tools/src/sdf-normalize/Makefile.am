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

# $Id: Makefile.am,v 1.2 2001/06/01 14:12:48 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data

STRATEGO_PRG = norm-lit de-norm-lit \
               sdf-normalize sdf-de-normalize \
               asfix2sdf unfold-literal

bin_SCRIPTS  = $(STRATEGO_PRG)

TESTS        = sdf_normalize_check \
	       sdf_denormalize_check \
               asfix2sdf_check


CLEAN_FILES += sdf_normalize_check sdf_denormalize_check asfix2sdf_check

SCFLAGS     += -I $(srcdir)/../lib \
	       -I $(srcdir)/../sdf-bracket \
               -I $(ASFIXTOOLS)/share/asfix-tools \
	       --main $@

sdf_normalize_check_prog    = sdf-normalize
sdf_normalize_check_input   = data/Test1.def.af
sdf_normalize_check_output  = data/Test1.def.af.out
sdf_normalize_check_correct = data/Test1.def.af.out.correct

sdf_denormalize_check_prog    = sdf-de-normalize
sdf_denormalize_check_input   = data/test1.pico.norm.af.correct
sdf_denormalize_check_output  = data/test1.pico.def.af
sdf_denormalize_check_correct = data/test1.pico.def.af.correct

asfix2sdf_check_prog       = asfix2sdf
asfix2sdf_check_input      = data/test1.pico.asfix
asfix2sdf_check_output     = data/test1.pico.norm.af.out
asfix2sdf_check_correct    = data/test1.pico.norm.af.correct

