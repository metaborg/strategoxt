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

SUBDIRS = data

SCFLAGS = -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../opt \
	  --main $*

libexec_PROGRAMS = frontend extract extract-all rename-defs inline 

CLEANFILES = *.dep 

#MOSTLYCLEANFILES = extract-all.c  extract.c  frontend.c  inline.c  rename-defs.c

BOOTCLEANFILES = extract-all.c extract.c frontend.c inline.c rename-defs.c

#TESTS = 
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST = \
check-constructors.str       frontend.str       needed-defs-test.str \
check-constructors-test.str  frontend-test.str  normalize-spec.str \
desugar.str                  inline.str         rename-defs.str \
extract-all.str              inlining.str       spec-to-sdefs.str \
extract.str                  mul-contexts.str   use-def.str \
extract-test.str             needed-defs.str

BOOTSOURCES = frontend.c extract.c extract-all.c inline.c rename-defs.c

#include $(srcdir)/../make-rules
include $(wildcard *.dep)

include $(srcdir)/../Makefile.stratego


