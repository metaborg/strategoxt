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

SCFLAGS = -I $(top_srcdir)/spec/sig \
	  -I $(top_srcdir)/spec/front \
	  -I $(top_srcdir)/spec/lib

SUBDIRS = data

bin_SCRIPTS = si

libexec_SCRIPTS = primitives stratego

CLEANFILES = si primitives eval-lib-primitives.tree

EXTRA_DIST = $(wildcard *.r)

si : stratego-eval.r si.r eval-lib-primitives.tree

primitives: primitives.r

TESTS = stratego-eval-test

eval-lib-primitives.tree: primitives
	$(top_builddir)/spec/syn/pack-stratego -I $(srcdir)/../slib/spec -i lib \
		-dep eval-lib-primitives \
	| ./primitives > $@

BOOTSOURCES = si.c primitives.c stratego.in stratego

include $(srcdir)/../make-rules
include $(wildcard *.dep)

