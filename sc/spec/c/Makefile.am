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

EXTRA_DIST = $(wildcard *.r) ac2c.src

bin_SCRIPTS = s2c canonicalize ac2c

CLEANFILES = $(bin_SCRIPTS) *.dep

SCFLAGS = --main $@ -I ../sig \
	  -I $(CGEN)/share/cgen \
	  -I ../match

TESTS = C-simplify-test canonicalize-test

BOOTSOURCES = canonicalize.c s2c.c ac2c.src

# Generate srcipts
%: %.src Makefile.am
	sed 's#__GPP__#$(GPP)#g;\
             s#__CGEN__#$(CGEN)#g;' < $< > $@
	chmod +x $@                 

include $(srcdir)/../make-rules

include $(wildcard *.dep)
