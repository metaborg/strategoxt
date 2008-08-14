ACLOCAL_AMFLAGS = -I config

SUBDIRS      = . news-archive manpages $(PKGS)
DIST_SUBDIRS =   news-archive manpages $(PKGS)
CLEANFILES   = \
	$(BUILD_REPOSITORY) \
	$(BUILD_REPOSITORY)-stage1

EXTRA_DIST   = \
  README svn-revision compiler_generation \
  bootstrap Makefile.xt Internal.mk \
  strategoxt.spec.in strategoxt.spec \
  strategoxt.pc.in \
  xtc-template.pc.in \
  stratego-runtime-template.pc.in \
  stratego-lib-native-template.pc.in \
  stratego-lib-template.pc.in \
  stratego-xtc-template.pc.in \
  stratego-sglr-template.pc.in \
  stratego-gpp-template.pc.in \
  stratego-sdf-template.pc.in \
  stratego-rtg-template.pc.in \
  stage1.pc.in \
  stage2.pc.in \
	config/libtool_execute \
  fake-baseline/bin/xtc.in

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
%-stage1-uninstalled.pc: stage1.pc %-template.pc
	cat > $@ -- $^
%-stage2-uninstalled.pc: stage2.pc %-template.pc
	cat > $@ -- $^
