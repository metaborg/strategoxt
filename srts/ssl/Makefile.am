includedir = $(prefix)/include/srts

AM_CFLAGS	= 
DEBUGFLAGS	= -g
OPTFLAGS	= -O2
PROFFLAGS	= -pg
INCLUDES 	= -I$(srcdir)/../src -I$(ATERM)/include

AM_LDFLAGS	= -L$(top_builddir)/ssl \
		  -L$(top_builddir)/src \
		  -L$(ATERM)/lib 

LDADD		= -lstratego-lib.opt \
		  -lstratego.opt \
		  -lATerm-gcc \
		  -lm

# TARGETS

check_PROGRAMS 	= extract

pkglib_LIBRARIES = \
	libstratego-lib.a libstratego-lib.dbg.a \
	libstratego-lib.opt.a libstratego-lib.prof.a

include_HEADERS = \
	io.h stratego-lib.h tables.h ssl-time.h exec.h number.h \
	ssl-string.h term.h annotations.h dir.h

libstratego_lib_a_SOURCES = \
	io.h stratego-lib.h tables.h ssl-time.h exec.h number.h \
	ssl-string.h term.h dir.h \
	io.c tables.c time.c exec.c number.c string.c term.c \
	annotations.c dir.c 

libstratego_lib_dbg_a_SOURCES = 
libstratego_lib_opt_a_SOURCES = 
libstratego_lib_prof_a_SOURCES = 

libstratego_lib_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_lib_a_OBJECTS))
libstratego_lib_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_lib_a_OBJECTS))
libstratego_lib_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_lib_a_OBJECTS))

%.dbg.o: %.c
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(AM_CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.opt.o: %.c
	$(CC) $(OPTFLAGS) $(CFLAGS) $(AM_CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.prof.o: %.c
	$(CC) $(PROFFLAGS) $(CFLAGS) $(AM_CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@