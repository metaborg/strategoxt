# Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
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

SUBDIRS = data

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../opt \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front

bin_SCRIPTS = compile-match optimize1 optimize2

CLEANFILES = compile-match compile-match.c *.dep \
	optimize1 optimize1.c optimize2 optimize2.c \
	$(TESTS) matrix-test.c match-to-matrix-test.c

TESTS = matrix-test 
# match-to-matrix-test

EXTRA_DIST = \
	automaton.r \
	linearize.r \
	match-to-matrix.r \
	matrix-to-dfa.r \
	compile-match.r \
	match-to-matrix-test.r \
	matrix-test.r \
	matrix.r

bootdir	= $(top_srcdir)/src/match

BOOTSOURCES = compile-match.c optimize1.c optimize2.c

compile-match: compile-match.r
	$(SC) $(SCFLAGS) -i $< --main compile-match-comp

optimize1: compile-match.r
	$(SC) $(SCFLAGS) -i $< --main optimize1-comp -o optimize1

optimize2: compile-match.r
	$(SC) $(SCFLAGS) -i $< --main optimize2-comp -o optimize2

include $(srcdir)/../make-rules
include optimize1.dep
include optimize2.dep
include compile-match.dep
include matrix-test.dep
#include match-to-matrix-test.dep

