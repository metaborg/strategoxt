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

.PRECIOUS: %.ac %.c

SCFLAGS = --main $@ --C-include "\"../conf.h\""

SINCLUDES = \
	-I $(STRATEGOLIB)/share/ssl \
	-I $(srcdir)/../sig \
	-I $(srcdir)/../match \
	-I $(srcdir)/../opt \
	-I $(srcdir)/../lib \
	-I $(srcdir)/../front \
	-I $(srcdir)/../syn \
	-I $(srcdir)/../sc \
	-I $(srcdir)/../c \
	-I $(CGEN)/share/cgen 

CLEANFILES = $(TESTS) *.o *.c *.ac *.s? *.tree *.c.abox

EXTRA_DIST = $(wildcard *.r) $(wildcard *.res)

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)

check: $(subst .r,.bin,$(wildcard *-main.r))

bootinstall:
