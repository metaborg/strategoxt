include $(top_srcdir)/src/templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data
bin_PROGRAMS 	 = sdf-wf
libexec_PROGRAMS = sdf-wf

BOOTCLEANFILES 	 = sdf-wf.c
EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 
CLEANFILES  	 = sdf_wf_check $(wildcard *.dep)

SCFLAGS     	 = -I $(ASFIX_TOOLS)/share/asfix-tools --main $*


TESTS = \
  sdf_wf_errcheck \
  sdf_wf_short_errcheck \
  sdf_wf_se_errcheck

sdf_wf_check_prog     = sdf-wf
sdf_wf_check_switches = -S
sdf_wf_check_input    = data/test1.sdf.af
sdf_wf_check_output   = data/test1.sdf.wf.out
sdf_wf_check_correct  = data/test1.sdf.wf.ok

sdf_wf_short_check_prog     = sdf-wf
sdf_wf_short_check_switches = -S --short
sdf_wf_short_check_input    = data/test1.sdf.af
sdf_wf_short_check_output   = data/test1.sdf.wf.short.out
sdf_wf_short_check_correct  = data/test1.sdf.wf.short.ok

sdf_wf_se_check_prog     = sdf-wf
sdf_wf_se_check_switches = -S -e
sdf_wf_se_check_input    = data/test2.sdf.af
sdf_wf_se_check_output   = data/test2.sdf.wf.out
sdf_wf_se_check_correct  = data/test2.sdf.wf.ok

