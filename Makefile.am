SUBDIRS    = . $(PKGS) .
EXTRA_DIST = sdf2-bundle.spec.in sdf2-bundle.spec svn-revision

BOOTSTRAP_PKGS= \
  $(BUILD_TB_LIB) \
  $(BUILD_ERR_SUPPORT) \
  $(BUILD_PT_SUPPORT) \
  $(BUILD_ASF_SUPPORT) \
  $(BUILD_SGLR) \
  $(BUILD_ASC_SUPPORT) \
  $(BUILD_SDF_SUPPORT)

install-exec-local: ${BOOTSTRAP_PKGS}
all-local: ${BOOTSTRAP_PKGS}

$(LOCAL_INSTALL)/%$(prefix) : %
	cd $* && \
	$(MAKE) $(AM_MAKEFLAGS) && \
	$(MAKE) $(AM_MAKEFLAGS) DESTDIR=$(LOCAL_INSTALL)/$* install && \
	touch $@

fixeddist : dist
	mv $(PACKAGE_TARNAME)-$(VERSION).tar.gz $(PACKAGE).tar.gz

install-exec-hook: \
  $(prefix)/bin/sdf2table.sglrpatch \
  $(prefix)/bin/parse-sdf2.sglrpatch 

%.sglrpatch :
	if test -f $*; then \
	  sed 's^$(BUILD_SGLR)^$(prefix)^' $* > $*.tmp1 && \
	  sed 's^$(BUILD_PT_SUPPORT)^$(prefix)^' $*.tmp1 > $*.tmp2 && \
	  rm $*.tmp1 && \
	  mv $*.tmp2 $* && \
	  chmod a+x $* ; \
	fi
