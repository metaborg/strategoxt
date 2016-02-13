ATerm SSL_rename(ATerm,ATerm);
ATerm SSL_remove(ATerm);
ATerm SSL_getenv(ATerm);
ATerm SSL_copy(ATerm,ATerm);

#ifndef XT_STD_DISABLE_POSIX
ATerm SSL_modification_time(ATerm);
ATerm SSL_readdir(ATerm);
ATerm SSL_link(ATerm,ATerm);
ATerm SSL_setenv(ATerm,ATerm,ATerm);
#endif

#ifndef XT_STD_DISABLE_POSIX_XSI
ATerm SSL_fdcopy(ATerm,ATerm);
#endif

