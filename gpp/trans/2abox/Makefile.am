include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = Asfix-2-abox Ast-2-abox sdf-2-pp-table core-pp-table-diff
LDADD += $(SSL_LIBS)

SCFLAGS     = --main io-$* --verbose 1 
#--format-check 0
STRINCLUDES = -I $(top_srcdir)/trans \
              -I $(top_srcdir)/sig/pp-table \
              -I $(top_srcdir)/xtc-tools \
              -I $(SDF_FRONT)/share/sdf-front \
              -I $(XTC)/share/xtc \
              -I $(top_srcdir)/../sdf-tools/lib 

#              -I $(top_srcdir)/../asfix-tools/lib 

# todo: baseline issue. Remove this dirty import

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

