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
OPTFLAGS 	= -O2
#PROFFLAGS	= -pg

CFLAGS		= -O2
#CFLAGS		= -pg

INCLUDES 	= -I$(STRATEGORTS)/include \
		  -I$(STRATEGOLIB)/include \
		  -I$(ATERM)/include

LDFLAGS		= -L$(STRATEGORTS)/lib \
	  	  -L$(STRATEGOLIB)/lib \
		  -L$(ATERM)/lib 

LDADD		= -lstratego-lib.opt \
		  -lstratego.opt \
		  -lATerm-gcc \
		  -lm

# use the following libraries when profiling
#LDADD		= -lstratego-lib.prof \
#		  -lstratego.prof \
#		  -lATerm-prof \
#		  -lm

libexec_PROGRAMS = Asfix-2-abox Ast-2-abox Pp-gen Abox-2-html Abox-2-latex \
                   Abox-2-text
bin_PROGRAMS = abox-format
bin_SCRIPTS = ast2abox asfix2abox ppgen abox2html abox2latex abox2text 

pkgdata_DATA = gpp.Makefile pp-tables.tbl boxstyle.css default.abbrevs \
               pp-tables.pp pp-tables.pp.af sdf.cons.tbl
               
CLEANFILES = $(libexec_PROGRAMS) $(bin_SCRIPTS)

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g; \
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

gpp.Makefile : gpp.Makefile.src Makefile
	sed 's@__PKGDATA__@$(pkgdatadir)@g;\
	     s@__SGLR__@$(SGLR)@g' < $< > $@

EXTRA_DIST = \
	abox2html.sh.src   abox2text.sh.src   ast2abox.sh.src \
	abox2latex.sh.src  asfix2abox.sh.src  ppgen.sh.src \
        gpp.Makefile gpp.Makefile.src \
	pp-tables.tbl boxstyle.css default.abbrevs \
        pp-tables.pp pp-tables.pp.af sdf.cons.tbl
                                        
