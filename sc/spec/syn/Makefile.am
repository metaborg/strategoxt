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

bin_SCRIPTS 		= parse-mod
libexec_PROGRAMS 	= parse-stratego pack-stratego parse-mod  
pack_stratego_SOURCES 	= pack-stratego.c

parse_mod_LDADD		= @LEXLIB@ -latermextension $(STRATEGOLIBS)
parse_stratego_LDADD 	= @LEXLIB@ -latermextension $(STRATEGOLIBS)
pack_stratego_LDADD 	= -lstratego.opt $(STRATEGOLIBS)

parse_stratego_SOURCES 	= parse-stratego.c stratego-grm.y \
			  stratego-lex.l options.h options.c util.h 

parse_mod_SOURCES 	= parse-mod.c stratego-grm.y \
			  stratego-lex.l options.h options.c util.h 

#pkgdatadir 	= $(prefix)/pack-stratego-plugin
pkgdata_DATA 	= pack-stratego.config

CLEANFILES 	= pack-stratego pack-stratego.c pack-stratego.dep \
		  stratego-grm.c stratego-grm.h stratego-lex.c

EXTRA_DIST 	= pack-stratego.str syntax-test.r pack-stratego.config.src stratego-grm.h

BOOTSOURCES 	= $(SOURCES) pack-stratego.c stratego-grm.y stratego-grm.h \
		  stratego-lex.l pack-stratego.config.src

CFLAGS	 	= 
DEBUGFLAGS	= -g
PROFFLAGS	= -pg
OPTFLAGS 	= -O4

YFLAGS 		= -d -t -v

STRINCLUDES 	= -I $(srcdir)/../sig -CI "-I.."
SCFLAGS 	= --C-include "\"conf.h\""  

# BOOTINSTALL

bootinstall: $(BOOTSOURCES)
	$(mkinstalldirs) $(SCBOOT)/src
	cp -f $(BOOTSOURCES) $(SCBOOT)/src

## CHECK

check: check1 check2

check1: parse-mod
	./parse-mod -i syntax-test.r -o /dev/null

check2: pack-stratego 
	./pack-stratego -I $(STRATEGOLIB)/share/ssl -I $(srcdir)/../sig -i syntax-test -o syntax-test.trm

%: %.src
	sed 's#__prefix__#$(prefix)#g;\
             s#__libexec__#$(libexecdir)#g' < $< > $@


include $(srcdir)/../Makefile.stratego
