SINCLUDES	 = -I $(STRATEGO_FRONT)/share/stratego-front \
	  	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
	  	   -I $(srcdir)/../front		     \
	  	   -I $(srcdir)/../match		     \
	  	   -I $(srcdir)/../opt			     \
	  	   -I $(srcdir)/../lib			     \
		   -I $(SSL)/share/ssl

AM_LDFLAGS	= -L$(SRTS)/lib/srts -L$(ATERM)/lib 

export LD_LIBRARY_PATH := $(SRTS)/lib/srts:${LD_LIBRARY_PATH}

check_PROGRAMS 	= arity-test as-pattern assignment backtrack-test2    \
		  backtrack-test3 backtrack-test comment-test	      \
		  conditional-innermost congruence-arguments	      \
		  congruence-thread dynamic-rules-test empty-sections \
		  explode-test flatten-test higher-order-arg	      \
		  implicit-var-decl improper-list-test innermost-pure \
		  match-arity match-automaton-test mkterm	      \
		  number-syntax-test number-test overlay-test	      \
		  overloading-constructors-test overloading    \
		  prop quoted-keywords rename-test stratlib-test tail \
		  thread-test traversal-test twice unification-test 

TESTS 		= $(check_PROGRAMS)

STRATEGORUNLIBS = -lstratego.opt -lstratego-lib.opt -lATerm-gcc -lm
LDADD 		= $(STRATEGORUNLIBS)

CLEANFILES 	= *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
		  *.tree *.mtree *.rtree *.txt *.s5fused libtest*.c \
		  *.dep *.c *.out

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) 

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)

bootinstall:



