include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	= data

check_PROGRAMS 	= termid-check1 termid-check2 termid-check3
TESTS 		= termid1_check termid2_check termid3_check

pkgdata_DATA   	= termid.rtree

EXTRA_DIST = \
  termid.str \
  termid-check1.str \
  termid-check2.str \
  termid-check3.str \
  $(pkgdata_DATA)

CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= $(wildcard *.c) $(wildcard *.rtree)

termid1_check: termid-check1 
termid2_check: termid-check2
termid3_check: termid-check3

termid1_check_prog    = termid-check1
termid1_check_input   = data/termid1.in
termid1_check_output  = data/termid1.out
termid1_check_correct = data/termid1.correct

termid2_check_prog    = termid-check2
termid2_check_input   = data/termid2.in
termid2_check_output  = data/termid2.out
termid2_check_correct = data/termid2.correct

termid3_check_prog    = termid-check3
termid3_check_input   = data/termid3.in
termid3_check_output  = data/termid3.out
termid3_check_correct = data/termid3.correct

nodist_termid_check1_SOURCES=termid-check1.c
nodist_termid_check2_SOURCES=termid-check2.c
nodist_termid_check3_SOURCES=termid-check3.c
