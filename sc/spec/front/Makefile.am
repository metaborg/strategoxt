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

SCFLAGS = -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../opt \
	  --main $@

bin_SCRIPTS = frontend extract extract-all rename-defs inline 

CLEANFILES = *.dep \
	frontend frontend.c \
	extract extract.c \
	extract-all extract-all.c \
	inline inline.c \
	needed-defs-test needed-defs-test.c \
	frontend-test \
	rename-defs rename-defs.c

TESTS = needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST = $(wildcard *.r)

BOOTSOURCES = frontend.c extract.c extract-all.c inline.c rename-defs.c

include $(srcdir)/../make-rules

include $(wildcard *.dep)


