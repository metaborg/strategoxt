include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS          = data
bin_PROGRAMS 	 = runbm
libexec_PROGRAMS = runbm
bin_SCRIPTS      = sdf-bench 
BOOTCLEANFILES 	 = rubm.c
EXTRA_DIST     	 = sglr-stats.sdf benchmark.sdf sdf-bench.src \
		   $(wildcard *.str) $(wildcard *.meta) 
CLEANFILES       = sglr-stats.tbl sdf-bench benchmark.tbl $(wildcard *.dep)
pkgdata_DATA     = sglr-stats.tbl benchmark.tbl

sdf-bench: sdf-bench.src Makefile
	sed 's#__PREFIX__#$(prefix)#g' < ${srcdir}/sdf-bench.src > sdf-bench

%.tbl: %.sdf
	PATH=$(PGEN)/bin:$${PATH} sdf2table -i $< -o $@
