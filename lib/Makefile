BASE = ..
include $(BASE)/Makefile.incl

MANIFEST := Makefile \
 rho.c rho.h aterm.c memory.c \
 stdlib.rh stdlib.rho

all: librho.a stdlib.ltx

librho.a: rho.o memory.o aterm.o stdlib.o
	$(AR) crs $@ $^

rho.o memory.o aterm.o: rho.h

stdlib.o: stdlib.c rho.h

stdlib.c: stdlib.rho stdlib.rh

%.c: %.rho
	../utrecht/rho-compile $<

%.o: %.c
	$(CC) -Wall -Wno-parentheses -O -c $< -o $@

clean:
	$(RM) stdlib.c