# autobundle -- Make distributions by bundling separate software packages.
#
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
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

# $Id: Makefile.am,v 1.1 2001/09/22 09:32:44 visser Exp $

DIST_SUBDIRS = pre-checks \
               $(PKGS)

EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README README.in reconf acinclude.m4

# We need at least one subdir to be defined such that automake will generate
# the code for traversing subdirectories
SUBDIRS      = pre-checks

all: install

check clean install uninstall:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

package-dist:
	cd srts; $(MAKE) dist
	cd ssl; $(MAKE) dist
	cd cgen; $(MAKE) dist
	cd gpp-boot; $(MAKE) dist
	cd sc-boot; $(MAKE) dist
	cd sc; $(MAKE) dist
	cd gpp; $(MAKE) dist

config:
	cd srts; stdconfig
	cd ssl; stdconfig
	cd cgen; stdconfig
	cd gpp-boot; stdconfig
	cd sc-boot; stdconfig
	cd sc; stdconfig

upload:
	scp *.tar.gz */*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp

upload-stratego:
	scp stratego-*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp

upload-srts:
	scp srts/srts-*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp

upload-sc-boot:
	scp sc-boot/sc-boot-*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp

upload-gpp-boot:
	scp gpp-boot/gpp-boot-*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp

upload-sc:
	scp sc/sc-*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp

upload-ssl:
	scp ssl/ssl-*.tar.gz sunshine.cs.uu.nl:/users/visser/www/stratego/ftp
