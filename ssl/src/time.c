/*

Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/
#include <aterm1.h>
#include <srts/stratego.h>
#include <stdlib.h>

/* Time */

#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <time.h>
#include <sys/times.h>

struct rusage rusage;

double dtime(void)
{
 static double p[3];
 double q;

 q = p[2];

 getrusage(RUSAGE_SELF,&rusage);

 p[2] = (double)(rusage.ru_utime.tv_sec);
 p[2] = p[2] + (double)(rusage.ru_utime.tv_usec) * 1.0e-06;
 p[1] = p[2] - q;
        
 return p[1];
}

ATerm SSL_dtime(void)
{
  double dt;
  dt = dtime();
  return((ATerm)ATmakeReal(dt));
}

ATerm SSL_ClockToSeconds(ATerm t)
{
  return (ATerm) ATmakeReal((double) ATgetInt((ATermInt)t) / CLOCKS_PER_SEC); 
}

ATerm SSL_clock(void)
{
  return (ATerm) ATmakeInt(clock());
}

ATerm SSL_times(void)
{
  struct tms ts;

  times(&ts);

  return (ATerm) ATmakeAppl(ATmakeSymbol("", 4, ATfalse), 
			    (ATerm)ATmakeInt(ts.tms_utime), 
			    (ATerm)ATmakeInt(ts.tms_stime), 
			    (ATerm)ATmakeInt(ts.tms_cutime), 
			    (ATerm)ATmakeInt(ts.tms_cstime));
}

ATerm SSL_TicksToSeconds(ATerm t)
{
  long tps = sysconf(_SC_CLK_TCK);
  long ticks;

  if(!ATisInt(t))
      _fail(t);

  ticks = ATgetInt((ATermInt) t);

  //ATfprintf(stderr, "tps = %d, ticks = %d, secs = %f\n", tps, ticks, (double)ticks / (double)tps);

  return (ATerm) ATmakeReal((double)ticks / (double)tps);
}
