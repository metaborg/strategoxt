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

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
	  --main $@

bin_SCRIPTS = fusion

TESTS = build-match-laws-test

CLEANFILES = optimizer optimizer.c *.dep

optimizer_sources = $(wildcard *.r)

EXTRA_DIST = $(optimizer_sources)

bootdir	= $(top_srcdir)/src/opt

BOOTSOURCES = fusion.c

dummy:
	touch $@

bootinstall:

include $(srcdir)/../make-rules
#include optimizer.dep
#include fusion.dep
include build-match-laws-test.dep

