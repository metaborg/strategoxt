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

EXTRA_DIST = make_rules.in make-rules conf.h.src Makefile.stratego.in Makefile.common

pkgdata_DATA = Makefile.stratego conf.h

CLEANFILES = conf.h

conf.h: Makefile

SUBDIRS = \
  . syn sig c front lib match opt sc si test1 test2 testlib testspec log

BOOTSUBDIRS = \
    syn c front lib match opt sc sig

DIST_SUBDIRS = si sdf test3 $(SUBDIRS)

BOOTSOURCES = conf.h.src

bootstep :
	$(MAKE) bootclean
	$(MAKE) clean
	$(MAKE)
	$(MAKE) bootcheck
	$(MAKE) install

bootcheck :
	cd test1 	&& $(MAKE) clean && $(MAKE) check
	cd test2 	&& $(MAKE) clean && $(MAKE) check
	cd testlib 	&& $(MAKE) clean && $(MAKE) check
	cd testspec 	&& $(MAKE) clean && $(MAKE) check

boot0 :
	$(MAKE) bootstep
	cd ..; ./stdconfig
	$(MAKE) bootclean
	$(MAKE) clean
	$(MAKE)
	$(MAKE) bootcheck

bootstrap : 
	@echo
	@echo "BOOTSTRAPPING PHASE 1"
	@echo
	@echo "" >> log/bootlog
	@echo "Bootstrapping version $(VERSION) [`date` - `uname -nsm`]" \
							>> log/bootlog
	@echo "Bootstrapping: phase 1 started [`date`]" >> log/bootlog
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING PHASE 2"
	@echo
	@echo "Bootstrapping: phase 2 started [`date`]" >> log/bootlog
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING PHASE 3"
	@echo
	@echo "Bootstrapping: phase 3 started [`date`]" >> log/bootlog
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING SUCCEEDED"
	@echo
	@echo "Bootstrapping: finished [`date`]" >> log/bootlog

bootinstall :
	@echo "" >> log/bootlog
	@echo "Bootinstall [`date`]" >> log/bootlog
	cp -f $(BOOTSOURCES) $(SCBOOT)/src
	list='$(BOOTSUBDIRS)'; for subdir in $$list; do \
	   (cd $$subdir ; $(MAKE) $@ ;) \
	done
	@echo "Bootinstall finished [`date`]" >> log/bootlog

bootclean :
	@echo "Bootclean [`date`]" >> log/bootlog
	list='$(BOOTSUBDIRS)'; for subdir in $$list; do \
	   (cd $$subdir ; $(MAKE) $@ ;) \
	done
	@echo "Bootclean finished [`date`]" >> log/bootlog


include Makefile.stratego
