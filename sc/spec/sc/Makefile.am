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
	  -I $(srcdir)/../lib

bin_SCRIPTS = proto-sc sc

CLEANFILES = proto-sc proto-sc.c *.dep

EXTRA_DIST = $(wildcard *.r) sc.src

BOOTSOURCES = proto-sc.c sc.src

include $(srcdir)/../make-rules
include proto-sc.dep

# Generate srcipts
%: %.src Makefile
	sed 's#__prefix__#$(prefix)#g;\
             s#__ATERM__#$(ATERM)#g;\
             s#__VERSION__#$(VERSION)#g;\
             s#__STRATEGORTS__#$(STRATEGORTS)#g;\
             s#__STRATEGOLIB__#$(STRATEGOLIB)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@                 
