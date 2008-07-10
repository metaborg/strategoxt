ACLOCAL_AMFLAGS = -I config

SUBDIRS      = . news-archive manpages $(PKGS)
DIST_SUBDIRS =   news-archive manpages $(PKGS)
CLEANFILES   = \
	$(BUILD_REPOSITORY) \
	$(BUILD_REPOSITORY)-stage1 \
	$(BUILD_REPOSITORY)-stage2

EXTRA_DIST   = \
  README svn-revision bootstrap Makefile.xt \
  strategoxt.spec.in strategoxt.spec \
  strategoxt.pc.in \
  xtc-uninstalled.pc.in \
  stratego-runtime-uninstalled.pc.in \
  stratego-lib-native-uninstalled.pc.in \
  stratego-lib-uninstalled.pc.in \
  stratego-xtc-uninstalled.pc.in \
  stratego-sglr-uninstalled.pc.in \
  stratego-gpp-uninstalled.pc.in \
  stratego-sdf-uninstalled.pc.in \
  stratego-rtg-uninstalled.pc.in \
  stage1.pc.in \
  stage2.pc.in

pkgconfigdir=$(libdir)/pkgconfig
pkgconfig_DATA = strategoxt.pc

# Identify the generation of the Stratego compiler.
pkgdata_DATA = compiler_generation

relname:
	echo -n $(distdir) > relname

make-%:
	for subdir in $(PKGS) ; do \
           (cd $$subdir; $(MAKE) $*) ; \
	done

install-%: %
	for subdir in $(PKGS) ; do \
           cp -f $< $$subdir ; \
	done

bootclean :
	@for dir in $(PKGS); do \
	   (cd $$dir && $(MAKE) bootclean) ; \
	done

bootstep :
	$(MAKE) bootclean 
	$(MAKE) 
	$(MAKE) check 
	$(MAKE) install

svnignore :
	svn propset -R svn:ignore -F svn-ignore .

# Extra work because automake cannot generate those rules due to the loops of
# AC_CONFIG_FILES inside in the configure.ac
DISTCLEAN_FILES = $(UNINSTALLED_PKGCONFIG_FILES)
%-stage1-uninstalled.pc: stage1.pc %-uninstalled.pc
	cat > $@ -- $^
%-stage2-uninstalled.pc: stage2.pc %-uninstalled.pc
	cat > $@ -- $^
