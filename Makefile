#
# Author: Merijn de Jonge (mdejonge@cwi.nl)
#
# Makefile for building distributions of XT components and for building
# an XT distribution using the Online Package Base

SUBDIRS = asfix-tools aterm-tools boxenv gb gpp grammar-recovery graph-tools \
          sdf-tools stratego-tools xt

dist:
	dirs="$(SUBDIRS)" ;\
	for d in $${dirs} ;\
	do \
	( \
	   echo "Building in $$d" ;\
	   cd $$d ;\
	   unset MAKEFLAGS ;\
	   unset MAKELEVEL ;\
	   ./reconf ;\
	   ./configure ;\
	   $(MAKE) ;\
	   $(MAKE) dist ;\
	   echo "Building in $dd done." ;\
	) \
	done

xtdist:
	xt_version=$(XT_VERSION) ;\
	if [ "a$${xt_version}" = "a" ] ; then \
	   printf "XT version=" ;\
	   read xt_version ;\
	fi ;\
	autobundle -s -n XT -v $${xt_version} -p xt-$${xt_version} -db graphviz \
	   | gunzip -c \
	   | tar xvf - ;\
	cd XT-$${xt_version} ;\
	./configure ;\
	$(MAKE) bundle
