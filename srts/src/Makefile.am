SUBDIRS = srts

includedir = $(prefix)/include/srts

############################################################

if USECPL

# Derive implementation of choice in CPL from libchoice and
# add it to libstratego. This way the rest of the Stratego
# compiler does not need to be aware of the need for the CPL
# library

CHOICELIBADD = choice.o 
CHOICELIBADDgcc = choice-gcc.o
CHOICELIBADDprof = choice-prof.o
CHOICELIBADDdbg = choice-dbg.o
#CHOICELDFLAGS = -L$(CPL)/lib -lchoice -DUSECPL

choice-cpl.h: $(CPL)/include/choice.h
	cp $< $@

choice.o: $(CPL)/lib/libchoice.a
	ar x $<

choice-%.o: $(CPL)/lib/libchoice-%.a
	ar x $<

else

CHOICELIBADD =

endif

############################################################


stratego.o: srts/stratego-choice.h srts/stratego-config.h

OPTFLAGS	= -O2
INCLUDES 	= -I. -I$(ATERM)/include -I$(srcdir) 
AM_LDFLAGS	= $(INCLUDES) -L. -lstratego -L$(ATERM)/lib -lATerm 
#$(CHOICELDFLAGS) 

#lib_LIBRARIES 	= libstratego.a libstratego.dbg.a \
#		  libstratego.opt.a libstratego.prof.a 
#		  libatermextension.a libatermextension.dbg.a \
#		  libatermextension.opt.a libatermextension.prof.a

pkglib_LIBRARIES = libstratego.a libstratego.dbg.a \
		  libstratego.opt.a libstratego.prof.a 

#		  libatermextension.a libatermextension.dbg.a \
#		  libatermextension.opt.a libatermextension.prof.a

#pkglib_LTLIBRARIES = libstratego.la libstratego.dbg.la \
#		  libstratego.opt.la libstratego.prof.la 

#include_HEADERS = \
#	srts/stratego.h srts/aterm-extension.h srts/debug.h srts/stratego-choice.h srts/config.h

libstratego_a_SOURCES = \
	stratego.c aterm-extension.c debug.c mprotect.c \
	srts/stratego.h srts/aterm-extension.h srts/debug.h srts/mprotect.h \
	srts/stratego-choice.h stratego-choice.c 

#libstratego_la_SOURCES = \
#	stratego.c aterm-extension.c debug.c mprotect.c \
#	srts/stratego.h srts/aterm-extension.h srts/debug.h srts/mprotect.h \
#	srts/stratego-choice.h stratego-choice.c 

libstratego_dbg_a_SOURCES = 
libstratego_opt_a_SOURCES = 
libstratego_prof_a_SOURCES = 

#libstratego_dbg_la_SOURCES = 
#libstratego_opt_la_SOURCES = 
#libstratego_prof_la_SOURCES = 

libstratego_a_LIBADD = $(CHOICELIBADD)
#libstratego_la_LIBADD = $(CHOICELIBADD)

libstratego_dbg_a_LIBADD = $(CHOICELIBADDdbg) $(subst .o,.dbg.o,$(libstratego_a_OBJECTS))
libstratego_opt_a_LIBADD = $(CHOICELIBADD) $(subst .o,.opt.o,$(libstratego_a_OBJECTS))
libstratego_prof_a_LIBADD = $(CHOICELIBADDprof) $(subst .o,.prof.o,$(libstratego_a_OBJECTS))

#libstratego_dbg_la_LIBADD = $(CHOICELIBADDdbg) $(subst .o,.dbg.o,$(libstratego_a_OBJECTS))
#libstratego_opt_la_LIBADD = $(CHOICELIBADD) $(subst .o,.opt.o,$(libstratego_a_OBJECTS))
#libstratego_prof_la_LIBADD = $(CHOICELIBADDprof) $(subst .o,.prof.o,$(libstratego_a_OBJECTS))

CC       	= gcc
AM_CFLAGS	= -Wall
DEBUGFLAGS	= -g
PROFFLAGS	= -pg

%.dbg.o: %.c
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.opt.o: %.c
	$(CC) $(OPTFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.prof.o: %.c
	$(CC) $(PROFFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@


###########

#libatermextension_a_SOURCES = \
#	aterm-extension.c debug.c mprotect.c \
#	srts/aterm-extension.h srts/debug.h srts/mprotect.h
#
#libatermextension_dbg_a_SOURCES = 
#libatermextension_opt_a_SOURCES = 
#libatermextension_prof_a_SOURCES = 
#
#libatermextension_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libatermextension_a_OBJECTS))
#libatermextension_opt_a_LIBADD = $(subst .o,.opt.o,$(libatermextension_a_OBJECTS))
#libatermextension_prof_a_LIBADD = $(subst .o,.prof.o,$(libatermextension_a_OBJECTS))
