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

include ../make_rules.in

OPTFLAGS 	= -O4
SCFLAGS		= -I $(srcdir)/../sig

bin_PROGRAMS = parse-stratego parse-mod 

bin_SCRIPTS = pack-stratego

CLEANFILES = pack-stratego pack-stratego.c pack-stratego.dep

BUILT_SOURCES = stratego.grm.tab.c stratego.grm.tab.h stratego.yy.c

parse_stratego_SOURCES 	= \
  parse-stratego.c stratego.grm stratego.lx options.h options.c util.h $(BUILT_SOURCES)

parse_mod_SOURCES = \
   parse-mod.c stratego.grm stratego.lx options.h options.c util.h $(BUILT_SOURCES)

EXTRADIST = $(wildcard *.r)

%.grm.tab.c: %.grm
	bison -d -t -v $<

%.yy.c: %.lx
	flex $<
	mv lex.yy.c $@

BOOTSOURCES = $(SOURCES) pack-stratego.c

check: check1 check2

check1: parse-mod
	./parse-mod -i syntax-test.r -o /dev/null

check2: pack-stratego 
	./pack-stratego -I $(STRATEGOLIB)/share/stratego-lib -i syntax-test -o syntax-test.trm

include $(srcdir)/../make-rules
include pack-stratego.dep
