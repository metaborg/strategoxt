SUBDIRS = srts

includedir = $(prefix)/include/srts

INCLUDES 	= -I. -I$(ATERM)/include -I$(srcdir) 
AM_CFLAGS       = -Wall
AM_LDFLAGS	= $(INCLUDES) -L. -lstratego -L$(ATERM)/lib -lATerm

pkglib_LTLIBRARIES = \
  libstratego.la \
  libstratego.dbg.la \
  libstratego.opt.la \
  libstratego.prof.la

LIB_SOURCES = \
  stratego.c aterm-extension.c debug.c mprotect.c \
  srts/stratego.h srts/aterm-extension.h srts/debug.h srts/mprotect.h \
  srts/stratego-choice.h stratego-choice.c 

libstratego_la_SOURCES      = $(LIB_SOURCES)
libstratego_dbg_la_SOURCES  = $(LIB_SOURCES)
libstratego_prof_la_SOURCES = $(LIB_SOURCES)
libstratego_opt_la_SOURCES  = $(LIB_SOURCES)

libstratego_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_prof_la_CFLAGS = -pg $(AM_CFLAGS)
libstratego_opt_la_CFLAGS  = -O2 $(AM_CFLAGS)

stratego.lo: srts/stratego-choice.h srts/stratego-config.h

############################################################

# if USECPL

# Libtoool requires .lo files, not .o. This is a problem.
# Solution: add libchoice.a as a dep to the libtool library?

# Derive implementation of choice in CPL from libchoice and
# add it to libstratego. This way the rest of the Stratego
# compiler does not need to be aware of the need for the CPL
# library

# CHOICELIBADD = choice.o 
# CHOICELIBADDgcc = choice-gcc.o
# CHOICELIBADDprof = choice-prof.o
# CHOICELIBADDdbg = choice-dbg.o

# choice-cpl.h: $(CPL)/include/choice.h
# 	cp $< $@

# choice.o: $(CPL)/lib/libchoice.a
# 	ar x $<

# choice-%.o: $(CPL)/lib/libchoice-%.a
# 	ar x $<

# else

# CHOICELIBADD =

# endif

############################################################
