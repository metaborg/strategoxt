include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = unpack-sdf
bin_SCRIPTS    = unpack

SCFLAGS        = --main io-$*
STRINCLUDES    = -I $(XTC)/share/xtc

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rtree) unpack.src
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree) 

% : %.src
	sed 's@__PERL__@$(PERL)@g' < $< > $@ && \
	chmod +x $@
