#ifndef _CONNNECT_H
#define _CONNNECT_H

ATerm SSL_connect(ATerm h, ATerm p);
ATerm SSL_accept(ATerm h, ATerm p, ATerm w);
ATerm SSL_send(ATerm fd, ATerm msg);
ATerm SSL_recv(ATerm fd);
ATerm SSL_shutdown(ATerm fd);

#endif
