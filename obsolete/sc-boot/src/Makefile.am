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

#CFLAGS	 	= -Wall
#DEBUGFLAGS	= -g
OPTFLAGS 	= -O4
#PROFFLAGS	= -pg

INCLUDES 	= -I$(STRATEGORTS)/include \
		  -I$(STRATEGOLIB)/include \
		  -I$(ATERM)/include \
		  -I$(CPL)/include

LDFLAGS		= -L$(ATERM)/lib \
		  -L$(STRATEGORTS)/lib \
	  	  -L$(STRATEGOLIB)/lib

LDADD		= -lstratego-lib.opt \
		  -lstratego.opt \
		  -lATerm-gcc \
		  -lm

bin_PROGRAMS = \
	canonicalize \
	compile-match \
	extract \
	extract-all \
	frontend \
	inline \
	optimize1 \
	optimize2 \
	pack-stratego \
	parse-mod \
	parse-stratego \
	proto-sc \
	rename-defs \
	rename-vars \
	s2c \
	Stratego-Canonical-Format \
	Stratego-Normal-Format \
	Stratego-Optimized-Format

#	fusion \

bin_SCRIPTS = sc ac2c

CLEANFILES = $(bin_PROGRAMS)

BUILT_SOURCES = stratego.grm.tab.c stratego.grm.tab.h stratego.yy.c

parse_stratego_SOURCES 	= \
  parse-stratego.c stratego.grm stratego.lx options.h options.c $(BUILT_SOURCES)

parse_mod_SOURCES = \
  parse-mod.c stratego.grm stratego.lx options.h options.c $(BUILT_SOURCES)

%.grm.tab.c: %.grm
	bison -d -t -v $<

%.yy.c: %.lx
	flex $<
	mv lex.yy.c $@

