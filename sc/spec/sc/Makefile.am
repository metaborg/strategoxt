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
	  --main $* \
	  --C-include "\"conf.h\"" -CI "-I.."

bin_PROGRAMS = sc

pkgdata_DATA = sc.config sc-manual.txt

CLEANFILES = sc sc.c *.dep sc.config

EXTRA_DIST = $(wildcard *.r) $(wildcard *.c) sc.config.src sc-manual.txt

BOOTSOURCES = sc.c sc.config.src

include $(srcdir)/../Makefile.stratego
include $(wildcard *.dep)

# Generate srcipts
%: %.src Makefile
	sed 's#__prefix__#$(prefix)#g;\
             s#__libexec__#$(libexecdir)#g;\
             s#__ATERM__#$(ATERM)#g;\
             s#__CGEN__#$(CGEN)#g;\
             s#__GPP__#$(GPP)#g;\
             s#__VERSION__#$(VERSION)#g;\
             s#__STRATEGORTS__#$(STRATEGORTS)#g;\
             s#__STRATEGOLIB__#$(STRATEGOLIB)#g;\
             s#__STRATEGOFRONT__#$(STRATEGOFRONT)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@
