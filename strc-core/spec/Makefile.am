include $(top_srcdir)/Makefile.xt 

SUBDIRS = sig pack c front lib match opt strc test1 test2 testneg test-strc log

DIST_SUBDIRS = testlib test3 testspec $(SUBDIRS)

BOOTCLEAN_SUBDIRS = sig c front lib match opt strc pack

bootstep :
	$(MAKE) bootclean
	$(MAKE) clean
	$(MAKE)
	$(MAKE) bootcheck
	$(MAKE) install

bootcheck :
	cd test1 	&& $(MAKE) clean && $(MAKE) check
	cd test2 	&& $(MAKE) clean && $(MAKE) check
	cd testneg 	&& $(MAKE) clean && $(MAKE) check

#	cd testlib 	&& $(MAKE) clean && $(MAKE) check
#	cd testspec 	&& $(MAKE) clean && $(MAKE) check

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