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

libexec_PROGRAMS = optimize1 optimize2 compile-match 
check_PROGRAMS 	 = matrix-test

CLEANFILES 	 = *.dep $(TESTS) 

TESTS = matrix-test 
# match-to-matrix-test

EXTRA_DIST = $(wildcard *.str)

BOOTSOURCES = compile-match.c optimize1.c optimize2.c
BOOTCLEANFILES = compile-match.c optimize1.c optimize2.c

compile-match.c: compile-match.str
	$(SC) $(SCFLAGS) -i $< --main compile-match-comp -o $@ -c

optimize1.c: compile-match.str
	$(SC) $(SCFLAGS) -i $< --main optimize1-comp -o optimize1.c -c

optimize2.c: compile-match.str
	$(SC) $(SCFLAGS) -i $< --main optimize2-comp -o optimize2.c -c

include $(srcdir)/../Makefile.common
include $(wildcard *.dep)

