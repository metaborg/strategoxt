/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU General Public License
along with this library; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

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

/* struct_tm conversion */
ATerm struct_tm2ATerm(const struct tm *tp) {
  return (ATerm) ATmakeAppl(
    ATmakeSymbol("", 8, ATfalse)
  , (ATerm) ATmakeInt(tp -> tm_sec)
  , (ATerm) ATmakeInt(tp -> tm_min)
  , (ATerm) ATmakeInt(tp -> tm_hour)
  , (ATerm) ATmakeInt(tp -> tm_mday)
  , (ATerm) ATmakeInt(tp -> tm_mon)
  , (ATerm) ATmakeInt(tp -> tm_year + 1900)
  , (ATerm) ATmakeInt(tp -> tm_wday)
  , (ATerm) ATmakeInt(tp -> tm_yday)
  );
}

/* time_t conversion */
ATerm time_t2ATerm(time_t time) {
  return (ATerm) ATmakeInt(time);
}

time_t ATerm2time_t(ATerm term) {
  if(!ATisInt(term)) {
     _fail(term);
  }

  return ATgetInt((ATermInt) term);
}

/* SSL functions */

ATerm SSL_now_epoch_time(void) {
  return time_t2ATerm(time(NULL));
}

ATerm SSL_time(void) {
  return SSL_now_epoch_time();
}

ATerm SSL_epoch2localtime(ATerm term) {
  struct tm *tp;
  time_t t;

  if(!ATisInt(term)) {
     _fail(term);
  }

  t  = ATerm2time_t(term);
  tp = localtime(&t);
  return (ATerm) struct_tm2ATerm(tp);
}

ATerm SSL_epoch2UTC(ATerm term) {
  struct tm *tp;
  time_t t;

  t  = ATerm2time_t(term);
  tp = gmtime(&t);
  return (ATerm) struct_tm2ATerm(tp);
}

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

  return (ATerm) ATmakeReal((double)ticks / (double)tps);
}
