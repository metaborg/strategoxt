/*

Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
USA


*/

#ifdef NEEDS_MPROTECT
 #include <sys/resource.h>
 #include <errno.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <sys/mman.h>
 #include <unistd.h>
 #include <signal.h>
#endif

#include "srts/mprotect.h"

/*
 * This function calculates the number of pages of available stack space, and
 * calls mprotect to make these pages readable, writeable, and executable.
 * This is needed on sparc/solaris to enable execution of dynamic functions.
 *
 * When NEEDS_MPROTECT is _not_ defined, this function reduces to an empty
 * function body after the preprocessing phase.
 */
 
void do_mprotect()
{
#ifdef NEEDS_MPROTECT
   char dummy;
   long stack_size;
   long page_size;
   long mask;
   struct rlimit rlimits;
   char* page;


   if( getrlimit(RLIMIT_STACK, &rlimits) != 0 ){
      perror("getrlimit");
      exit(1);
   }
   stack_size = rlimits.rlim_cur;
   page_size  = getpagesize ();
   mask = ~(page_size-1);
   page = (void *) (((unsigned int) &dummy) & mask);  
   
   if (mprotect (page, (size_t)(stack_size/page_size), PROT_READ | PROT_WRITE | PROT_EXEC) < 0)
   {
      perror ("mprotect of trampoline code"); 
      exit(1);
   }
#endif
}

#ifdef NEEDS_MPROTECT
static struct sigaction act, oact; /* new, old handler */
static unsigned int page_size;

static void segv_handler(int sig, siginfo_t * info, void * ctx)
{
    unsigned int mask;
    void * page;
    
    if (info && info->si_code == SEGV_ACCERR) {
    
        /* si_addr points to the trampoline.  Make it executable.
           TODO: check that si_addr is on the stack. */
/*        printf("segv @ %p, making executable\n", info->si_addr); */

        mask = ~ (page_size - 1);
        page = (void *) (((unsigned int) info->si_addr) & mask);

        if (mprotect(page, page_size, PROT_READ | PROT_WRITE | PROT_EXEC) < 0) {
            perror("mprotect() failed");
            goto barf;
        }
        
        return;
    }
    
barf:
    /* Otherwise, reset the old handler (=> core dump). */

    printf("segv @ %p, ouch!\n", info->si_addr);
    
    if (sigaction(SIGSEGV, &oact, 0) < 0) {
        perror("sigaction");
        exit(1);
    }
}
#endif

void set_segv_handler(void)
{
#ifdef NEEDS_MPROTECT
    page_size = getpagesize();
    
    /* Set a handler for SIGSEGV. */
    act.sa_flags = SA_SIGINFO;
    sigemptyset(&act.sa_mask);
    act.sa_sigaction = segv_handler;
    if (sigaction(SIGSEGV, &act, &oact) < 0) {
        perror("sigaction");
        exit(1);
    }
#endif
}
