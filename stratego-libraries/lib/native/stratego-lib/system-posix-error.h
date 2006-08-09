ATerm SSL_get_errno(void);
ATerm SSL_perror(ATerm);
ATerm SSL_strerror(ATerm);

/**
 * @TODO Strictly speaking this function should not be available in C99 mode.
 * if EXDEV is not defined, this will be a run-time error.
 */
ATerm SSL_EXDEV(void);

