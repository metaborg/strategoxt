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

include ../make_rules.in

OPTFLAGS = -O4

SCFLAGS = -I $(srcdir)/../sig \
	  --C-include "\"conf.h\"" -CI "-I.."

libexec_PROGRAMS = parse-stratego parse-mod

libexec_SCRIPTS = pack-stratego

#pkgdatadir = $(prefix)/pack-stratego-plugin
pkgdata_DATA = pack-stratego.config

CLEANFILES = pack-stratego pack-stratego.c pack-stratego.dep

BUILT_SOURCES = stratego.grm.tab.c stratego.grm.tab.h stratego.yy.c

parse_stratego_SOURCES 	= \
  parse-stratego.c stratego.grm stratego.lx options.h options.c util.h $(BUILT_SOURCES)

parse_mod_SOURCES = \
   parse-mod.c stratego.grm stratego.lx options.h options.c util.h $(BUILT_SOURCES)

EXTRA_DIST = $(wildcard *.r) $(wildcard *.config.src)

%.grm.tab.c: %.grm
	bison -d -t -v $<

%.yy.c: %.lx
	flex $<
	mv lex.yy.c $@

BOOTSOURCES = $(SOURCES) pack-stratego.c stratego.grm stratego.lx pack-stratego.config.src

check: check1 check2

check1: parse-mod
	./parse-mod -i syntax-test.r -o /dev/null

check2: pack-stratego 
	./pack-stratego -I $(STRATEGOLIB)/share/ssl -I $(srcdir)/../sig -i syntax-test -o syntax-test.trm

%: %.src
	sed 's#__prefix__#$(prefix)#g;\
             s#__libexec__#$(libexecdir)#g' < $< > $@

include $(srcdir)/../make-rules
include $(wildcard *.dep)
