# Autobundle -- Tool suite for automated source tree composition
#
# Author: Merijn de Jonge (mdejonge@cs.uu.nl)
#
# $Id$

include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS        = data

TBLS_DEFS      = Autobundle.def Autobundle.tbl
PP_TBLS        = Autobundle.pp Autobundle.pp.af
SIGS           = Autobundle.str Package.str Bundle.str

pkgdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) $(PP_TBLS)
noinst_DATA    = $(SIGS)

EXTRA_DIST     = $(pkgdata_DATA) $(SIGS)

BOOTCLEANFILES = $(TBLS_DEFS) Autobundle.pp.af $(SIGS)
SDFINCLUDES    = -I $(srcdir)
PGEN_FLAGS     = -m $*

## List of test input files
TESTSET        = asc-support-0.4.pkg asfix-0.2.2.pkg aterm-1.4.4.pkg \
                 aterm-1.4.5.pkg aterm-1.4.6.pkg aterm-1.4.7.pkg \
                 evaluator-0.1.pkg gb-0.6.pkg gpp-1.33.pkg gt-0.6.pkg \
                 pgen-0.6.pkg sglr-3.0.pkg sglr.pkg stratego-0.4.20.pkg \
                 stratego-0.4.21.pkg stratego-0.4.22.pkg xt-0.6.pkg \
                 JJForester-0.6.pkg xt.bundle \
                 configuration-interface-0.1.pkg \
                 aterm-dev-1.4.4.pkg

Autobundle.def : Autobundle.sdf Package.sdf Bundle.sdf

## Rules for running sglr on all test input files
# Default tests
TESTS = Autobundle.tbl

# This command is executed for each grammar during "make check"
# it runs sglr for $(grammar) and parses each file in $(testset)
TESTS_ENVIRONMENT = $(SHELL) -c \
	'tests="$(TESTSET:%=$(srcdir)/data/%)"; \
	 set -e ;\
	 for grammar in $${tests} ;\
	 do \
	    echo "Parsing $${grammar}" ;\
            PATH=$(SGLR)/bin:$${PATH} sglr -2 -p $(srcdir)/Autobundle.tbl -o /dev/null -i $${grammar} $(SGLR_FLAGS);\
         done'

# Copyright (C) 2002-2004 Merijn de Jonge <mdejonge@cs.uu.nl>
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
