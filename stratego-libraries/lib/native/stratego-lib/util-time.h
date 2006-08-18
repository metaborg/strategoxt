ATerm SSL_now_epoch_time() ;
ATerm SSL_time() ;
ATerm SSL_epoch2localtime() ;
ATerm SSL_epoch2UTC(ATerm) ;
ATerm SSL_epoch2UTC(ATerm) ;
ATerm SSL_ClockToSeconds(ATerm) ;
ATerm SSL_clock();

#ifndef XT_STD_DISABLE_POSIX_XSI
ATerm SSL_dtime() ;
#endif

#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_times() ;
ATerm SSL_TicksToSeconds(ATerm);
#endif
