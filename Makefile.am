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

#DIST_SUBDIRS = pre-checks emacs $(PKGS)

DIST_SUBDIRS = emacs $(PKGS)

EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README README.in bootstrap acinclude.m4

# We need at least one subdir to be defined such that automake will generate
# the code for traversing subdirectories
SUBDIRS      = emacs
#pre-checks

all: install

check clean install uninstall:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

package-dist :
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(PKGS); do \
	   ( cd $$subdir && $(MAKE) dist ) || exit 1 ;\
	done

package-dist-old:
	$(MAKE) dist
	cd srts; ./reconf; $(MAKE) dist
	cd ssl; ./reconf; $(MAKE) dist
	cd cgen; ./reconf; $(MAKE) dist
	cd gpp-boot; ./reconf; $(MAKE) dist
	cd sc-boot; ./reconf; $(MAKE) dist
	cd sc; ./reconf; $(MAKE) dist
	cd stratego-front; ./reconf; $(MAKE) dist
	cd stratego-connect; ./reconf; $(MAKE) dist

make-%:
	cd srts; $(MAKE) $*
	cd ssl; $(MAKE) $*
	cd cgen; $(MAKE) $*
	cd gpp-boot; $(MAKE) $*
	cd sc-boot; $(MAKE) $*
	cd sc; $(MAKE) $*
	cd stratego-front; $(MAKE) $*

#	cd stratego-connect; $(MAKE) $*

config:
	cd srts; stdconfig
	cd ssl; stdconfig
	cd cgen; stdconfig
	cd gpp-boot; stdconfig
	cd sc-boot; stdconfig
	cd sc; stdconfig
	cd stratego-front; stdconfig

#	cd stratego-connect; stdconfig

install-%: %
	cp -f $< srts/$<.StrategoXT
	cp -f $< ssl/$<.StrategoXT
	cp -f $< cgen/$<.StrategoXT
	cp -f $< gpp-boot/$<.StrategoXT
	cp -f $< sc-boot/$<.StrategoXT
	cp -f $< sc/$<.StrategoXT
	cp -f $< stratego-front/$<.StrategoXT
	cp -f $< stratego-connect/$<.StrategoXT

WWWSTRATEGO=sunshine.cs.uu.nl:/users/www/research/projects/stratego/ftp

upload:
	scp *.tar.gz */*.tar.gz $(WWWSTRATEGO)

upload-stratego:
	scp StrategoXT-$(VERSION).tar.gz $(WWWSTRATEGO)

upload-srts:
	scp srts/srts-*.tar.gz $(WWWSTRATEGO)

upload-sc-boot:
	scp sc-boot/sc-boot-*.tar.gz $(WWWSTRATEGO)

upload-gpp-boot:
	scp gpp-boot/gpp-boot-*.tar.gz $(WWWSTRATEGO)

upload-sc:
	scp sc/sc-*.tar.gz $(WWWSTRATEGO)

upload-ssl:
	scp ssl/ssl-*.tar.gz $(WWWSTRATEGO)

upload-stratego-front:
	scp stratego-front/stratego-front-*.tar.gz $(WWWSTRATEGO)

bootclean :
	@for dir in $(PKGS); do \
	   (cd $$dir && $(MAKE) bootclean) ; \
	done

RPMRELEASE = 1

CONFIGURE = ./configure \
		--prefix=/usr \
		--with-sc=$(SC) \
		--with-sglr=$(SGLR) \
		--with-pgen=$(PGEN) \
		--with-asfix-tools=$(ASFIX_TOOLS) \
		--with-stratego-tools=$(STRATEGO_TOOLS) \
		--with-sdf-tools=$(SDF_TOOLS)  \
		--with-gpp=$(GPP) \
		--with-cgen=$(CGEN) \
		--with-rpmdir=$(RPMDIR)

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__GPP_VERSION__+2.3+g;\
        s+__SGLR_VERSION__+3.7+g;\
        s+__PGEN_VERSION__+1.4+g;\
        s+__ASFIX_TOOLS_VERSION__+0.4+g;\
        s+__SDF_TOOLS_VERSION__+0.4+g;\
        s+__STRATEGO_TOOLS_VERSION__+0.4+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
        s+__ATERM__+$(ATERM)+g;

CLEANFILES = 

source-tree.txt : 
	tree -d | grep -v CVS \
		| grep -v autom4te-2.53.cache \
		| grep -v data \
		| grep -v config \
		> $@

#include Makefile.rpm

