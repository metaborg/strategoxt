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

SCFLAGS		 = -I $(top_srcdir)/spec/sig \
	  	   -I $(top_srcdir)/spec/front \
	  	   -I $(top_srcdir)/spec/lib

SUBDIRS 	 = data

bin_PROGRAMS 	 = si 
bin_SCRIPTS	 = stratego
libexec_PROGRAMS = primitives 
check_PROGRAMS   = stratego-eval-test
pkgdata_DATA	 = eval-lib-primitives.rtree

#stratego_SOURCES = si.str

CLEANFILES 	 = $(wildcard *.dep)
EXTRA_DIST 	 = $(wildcard *.str) eval-lib-primitives.rtree
TESTS 		 = stratego-eval-test

#$(top_builddir)/spec/si/primitives
eval-lib-primitives.rtree: 
	$(top_builddir)/spec/syn/pack-stratego -I $(STRATEGOLIB)/share/ssl -i lib \
		-dep eval-lib-primitives.rtree \
	| ./primitives > $@

BOOTSOURCES = si.c primitives.c stratego.in stratego

BOOTCLEANFILES = eval-lib-primitives.rtree si.c primitives.c stratego

include $(srcdir)/../Makefile.common
include $(wildcard *.dep)

