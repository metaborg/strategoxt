#include <srts/stratego.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "stratego-lib-common.h"

/* Time */

#ifndef XT_STD_DISABLE_POSIX
#include <unistd.h>
#include <sys/time.h>
#include <sys/times.h>
#endif

#ifndef XT_STD_DISABLE_POSIX_XSI
#include <sys/resource.h>
#endif

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
  
  assert_is_int(term);
  t  = ATerm2time_t(term);
  tp = localtime(&t);
  return (ATerm) struct_tm2ATerm(tp);
}

ATerm SSL_epoch2UTC(ATerm term) {
  struct tm *tp;
  time_t t;

  assert_is_int(term);
  t  = ATerm2time_t(term);
  tp = gmtime(&t);
  return (ATerm) struct_tm2ATerm(tp);
}

#ifndef XT_STD_DISABLE_POSIX_XSI
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
#endif

ATerm SSL_ClockToSeconds(ATerm t)
{
  return (ATerm) ATmakeReal((double) ATgetInt((ATermInt)t) / CLOCKS_PER_SEC); 
}

ATerm SSL_clock(void)
{
  return (ATerm) ATmakeInt(clock());
}

#ifndef XT_STD_DISABLE_POSIX
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
#endif

#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_TicksToSeconds(ATerm t)
{
  long tps = sysconf(_SC_CLK_TCK);
  long ticks;

  if(!ATisInt(t))
      _fail(t);

  ticks = ATgetInt((ATermInt) t);

  return (ATerm) ATmakeReal((double)ticks / (double)tps);
}
#endif
