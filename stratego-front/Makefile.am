include $(top_srcdir)/Makefile.xt

BUILDDIRS = . syn pp sig
TESTSDIRS = test

SUBDIRS = $(BUILDDIRS)
if XT_STAGE_CHECK
SUBDIRS 	  += $(TESTSDIRS)
endif

BOOTCLEAN_SUBDIRS = $(BUILDDIRS) $(TESTSDIRS)
EXTRA_DIST 	  = Makefile.xt svn-revision

ACLOCAL_AMFLAGS = -I ../config

all-local::
	mkdir -p `dirname $(BUILD_REPOSITORY)`
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t flattenPT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t ambtracker -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t libATerm.la -l $(ATERM)/lib -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t cc -p $(CC) -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t strategoxt-datadir -l `pwd` -V $(VERSION)
	if test -n "${LIB_STAGE}"; then \
	  lib_srcdir=$$(cd $(top_srcdir)/../stratego-libraries; pwd); \
	  lib_builddir=$$(cd ../stratego-libraries${LIB_STAGE}; pwd); \
	  $(XTC_PROG) register -r $(BUILD_REPOSITORY) -t SRTS-include -l $$lib_srcdir/runtime/lib/ -V X; \
	  $(XTC_PROG) register -r $(BUILD_REPOSITORY) -t stratego-lib-include -l $$lib_srcdir/lib/native/ -V X; \
	  $(XTC_PROG) register -r $(BUILD_REPOSITORY) -t lib.rtree -l $$lib_builddir/lib/ssl-compat/ -V $(VERSION); \
	fi
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import $(STRATEGOXT)/share/strategoxt/XTC
	cp $(BUILD_REPOSITORY) "$(BUILD_REPOSITORY)$(CURRENT_STAGE)"

install-data-local::
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t parsetablegen -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t flattenPT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t ambtracker -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libATerm.la -l $(ATERM)/lib -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t SRTS-include -l $(prefix)/include -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t stratego-lib-include -l $(prefix)/include -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t strategoxt-datadir -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t lib.rtree -l $(prefix)/share/stratego-lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstrategolib.rtree -l $(prefix)/share/stratego-lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libxtclib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-runtime.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib-native.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-sglr.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-sglr.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-gpp.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-gpp.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-rtg.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-rtg.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-aterm.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-aterm.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-tool-doc.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-tool-doc.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-xtc.rtree -l $(prefix)/share -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-xtc.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t cc -p $(CC) -V X
