# XT -- Program Transformation Tools
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

# $Id: Makefile.am,v 1.25 2000/10/16 20:56:09 mdejonge Exp $

DIST_SUBDIRS = pre-checks aterm asfix asc-support sglr pgen graph-tools \
               stratego gpp gt gb integration-tests www
EXTRA_DIST   = SOFTWARE README

# We need at least one subdir to be defined such that automake will generate
# the code for traversing subdirectories
SUBDIRS=pre-checks www

all: install

check clean install install-strip uninstall:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

# Build a package installation:
#   -first build the completa package (software uses ${prefix} to refer to
#    other files/programs in the distribution
#   -then install in the directory as specified with the
#    --with-pkginstalldir option (which may differ from ${prefix}).
#
# This way we can configure and build the software for installion in a
# directory we don't have write access to (/opt for instance), install these
# files in a separate directory (as specified with --with-pkginstalldir) and
# make a binary distribution from it.
#
# This procedure requires an already installed XT distribution during
# compilation. You can specify the location of this installation using the
# --with-xt switch during configure.

pkg :
	PATH=$(PKG_XT)/bin:$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE)  ) || exit 1 ;\
	done ;\
	$(MAKE) install prefix=$(PKG_INSTALL_DIR)
	$(INSTALL_DATA) ${srcdir}/README   ${PKG_INSTALL_DIR}
	$(INSTALL_DATA) ${srcdir}/SOFTWARE ${PKG_INSTALL_DIR}
	$(INSTALL_DATA) ${srcdir}/COPYING  ${PKG_INSTALL_DIR}
	$(INSTALL_DATA) ${srcdir}/AUTHORS  ${PKG_INSTALL_DIR}
	$(INSTALL_DATA) ${srcdir}/NEWS     ${PKG_INSTALL_DIR}



diff :
	@echo "Updating sources" >&2
	cvs -Q upd -d 
	@echo "Determine differences" >&2
	cvs -Q diff  > $(PACKAGE)-$(VERSION)`date +'_%m_%d_%Y'`.patch || true
	@echo "Patch is saved in \"$(PACKAGE)-$(VERSION)`date +'_%m_%d_%Y'`.patch\".\
	 Please send this patchfile to the maintainers of $(PACKAGE)." | fmt >&2
