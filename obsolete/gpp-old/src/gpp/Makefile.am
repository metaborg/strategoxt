# GT -- Grammar Tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
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

# $Id: Makefile.am,v 1.6 2001/10/08 23:40:33 mdejonge Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego
include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS      = data

# Which Stratego programs to build
STRATEGO_PRG = Asfix2abox Ast2abox Ppgen Abox2html Abox2latex Abox2text 

# What scipts to build
libexec_SCRIPTS  = $(STRATEGO_PRG)
bin_SCRIPTS = ast2abox asfix2abox ppgen abox2html abox2latex abox2text abox-format

pkgdata_DATA = gpp.Makefile pp-tables.tbl boxstyle.css default.abbrevs \
               pp-tables.pp pp-tables.pp.af sdf.cons.tbl

# Optional tests to run
TESTS        = no_generation_for_bracket_function_check

# List all files that should be distributed here
EXTRA_DIST   = $(wildcard *.r) gpp.Makefile.src \
               ast2abox.sh.src asfix2abox.sh.src ppgen.sh.src \
               abox2html.sh.src abox2latex.sh.src abox2text.sh.src \
               pp-tables.def boxstyle.css default.abbrevs pp-tables.pp \
               sdf.cons.tbl

# What should be cleaned
CLEANFILES  += ast2abox asfix2abox ppgen abox2html abox2latex \
               abox2text gpp.Makefile pp-tables.pp.af \
               no_generation_for_bracket_function_check

# Additional flags for the Stratego compiler
SCFLAGS     += -I ${ASFIXTOOLS}/share/asfix-tools --main $@

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;' \
	        < $< > $@ && \
	     chmod +x $@

gpp.Makefile : gpp.Makefile.src Makefile
	sed 's@__ASFIX2ABOX__@$(prefix)@g;\
	     s@__ABOX2LATEX__@$(prefix)@g;\
	     s@__ABOX2HTML__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__ASFIXTOOLS__@$(ASFIXTOOLS)@g;\
	     s@__PREFIX__@$(prefix)@g'\
	       < $< > $@
%.tbl : %.def
	PATH=$(PGEN)/bin:$${PATH} sdf2table -m GB-Main $< -o $@

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	@PATH=$(bindir):$(SGLR)/bin:$${PATH}; export PATH ;\
	sglr -2 -p ./pp-tables.tbl -i $< \
	   | implode-asfix -S -o $@ 

no_generation_for_bracket_function_check_prog    = Ppgen
no_generation_for_bracket_function_check_input   = data/ppgencheck1.in
no_generation_for_bracket_function_check_output  = data/ppgencheck1.out
no_generation_for_bracket_function_check_correct = data/ppgencheck1.correct

