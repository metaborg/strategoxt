# Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.

include make_rules.in

includedir = $(prefix)/include/srts

############# CPL ##################################################

EXTRA_DIST = choice-simple.c choice-simple.h choice-cpl.h choice-cpl.c \
	test-choice.c

if USECPL

# Use the choice point library CPL to implement choice
CHOICEHEADERS = choice.h
CHOICESOURCES = choice.h choice-cpl.c
CHOICEINCLUDES = -DUSECPL
CHOICELIBADD = choice.o

CHOICELIBADDdbg = 
#$(CPL)/lib/libchoice-dbg.a
CHOICELIBADDgcc = $(CPL)/lib/libchoice-gcc.a
CHOICELIBADDprof = $(CPL)/lib/libchoice-prof.a
CHOICELDFLAGS = -L$(CPL)/lib -lchoice -DUSECPL

TESTS = test-choice

CLEANFILES += test-choice choice.o choice.h stratego-choice.h

cpl-used: 
	@echo yes

choice.h: $(CPL)/include/choice.h
	cp $< $@

choice.o: $(CPL)/lib/libchoice.a
	ar x $<
choice-%.o: $(CPL)/lib/libchoice-%.a
	ar x $<

stratego-choice.h: Makefile
	cp $(srcdir)/choice-cpl.h $@

else

# Use setjmp and longjmp to implement choice
CHOICEHEADERS = 
CHOICESOURCES = choice-simple.c
CHOICEINCLUDES = 
CHOICELIBADD = 

CLEANFILES += test-choice choice.o choice.h stratego-choice.h

stratego-choice.h: Makefile
	cp $(srcdir)/choice-simple.h $@

cpl-used: 
	@echo no

endif

##################################################################

OPTFLAGS	= -O2
INCLUDES 	= -I. -I$(ATERM)/include -I$(srcdir) $(CHOICEINCLUDES)
LDFLAGS		= $(INCLUDES) -L. -lstratego -L$(ATERM)/lib -lATerm $(CHOICELDFLAGS) 

lib_LIBRARIES 	= libstratego.a libstratego.dbg.a \
		  libstratego.opt.a libstratego.prof.a \
		  libatermextension.a libatermextension.dbg.a \
		  libatermextension.opt.a libatermextension.prof.a

include_HEADERS = \
	stratego.h aterm-extension.h debug.h stratego-choice.h $(CHOICEHEADERS)

libstratego_a_SOURCES = \
	stratego.c aterm-extension.c debug.c mprotect.c \
	stratego.h aterm-extension.h debug.h mprotect.h \
	stratego-choice.h $(CHOICESOURCES)

BUILT_SOURCES = stratego-choice.h

libatermextension_a_SOURCES = \
	aterm-extension.c debug.c mprotect.c\
	aterm-extension.h debug.h mprotect.h

libstratego_dbg_a_SOURCES = 
libstratego_opt_a_SOURCES = 
libstratego_prof_a_SOURCES = 

#libstratego_a_OBJECTS += $(CHOICELIBADD) $(libstratego_a_OBJECTS)

libstratego_a_LIBADD = $(CHOICELIBADD) 
#$(subst .o,.dbg.o,$(libstratego_a_OBJECTS)) 

libstratego_dbg_a_LIBADD = $(CHOICELIBADDdbg) $(subst .o,.dbg.o,$(libstratego_a_OBJECTS)) 
libstratego_opt_a_LIBADD = $(CHOICELIBADD) $(subst .o,.opt.o,$(libstratego_a_OBJECTS)) 
libstratego_prof_a_LIBADD = $(CHOICELIBADDprof) $(subst .o,.prof.o,$(libstratego_a_OBJECTS)) 

libatermextension_dbg_a_SOURCES = 
libatermextension_opt_a_SOURCES = 
libatermextension_prof_a_SOURCES = 

libatermextension_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libatermextension_a_OBJECTS))
libatermextension_opt_a_LIBADD = $(subst .o,.opt.o,$(libatermextension_a_OBJECTS))
libatermextension_prof_a_LIBADD = $(subst .o,.prof.o,$(libatermextension_a_OBJECTS))

