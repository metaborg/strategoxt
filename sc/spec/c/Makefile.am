# Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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

EXTRA_DIST = $(wildcard *.str) 

#ac2c.src

libexec_PROGRAMS = s2c canonicalize 
check_PROGRAMS = C-simplify-test 

#bin_SCRIPTS = ac2c

BOOTCLEANFILES = s2c.c canonicalize.c 

CLEANFILES = *.dep $(TESTS)

SCFLAGS = --main $* -I ../sig \
	  -I $(CGEN)/share/cgen \
	  -I $(STRATEGOFRONT)/share/stratego-front \
	  -I ../match \
	  -CI -g \
	  -CL -g \
	  --norm

TESTS = C-simplify-test 
#canonicalize-test

BOOTSOURCES = canonicalize.c s2c.c ac2c.src

include $(srcdir)/../Makefile.stratego
include $(wildcard *.dep)
