/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

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
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA

*/

#define _DEBUG

#include <srts/stratego.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <netdb.h>
#include <time.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/* connect to other Stratego processes */

#define BACKLOG	4096

ATerm SSL_connect(ATerm h, ATerm p, ATerm w)
{
	ATerm t;
	int sockfd = 0;
	struct sockaddr_in addr;
  	char *host = NULL;
	int port = 0;
	struct protoent *pe = NULL;
	struct hostent *he = NULL;
	in_addr_t ip = 0;
	struct timeval tw;
	int wait = 0;
	int numwait = 0;
	fd_set fds;

#ifdef _DEBUG
	printf("connbla\n");
#endif

  	ATmatch(h,"<str>", &host);
  	ATmatch(p,"<int>", &port);
  	ATmatch(w,"<int>", &wait);

#ifdef _DEBUG
	printf("connbla1\n");
#endif

	if (!(pe = getprotobyname("tcp"))) {
		goto cleanup;
	}
	if ((sockfd = socket(PF_INET, SOCK_STREAM, pe->p_proto)) == -1)
		goto cleanup;
	if (!(he = gethostbyname(host)) || !he->h_addr_list[0]) {
		goto cleanup;
	}

#ifdef _DEBUG
	printf("connbla2\n");
#endif

	ip = *((in_addr_t*)he->h_addr_list[0]);
	bzero(&addr,sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_port = port;
	addr.sin_addr.s_addr = ip;

#ifdef _DEBUG
	printf("connbla3\n");
#endif

	if (wait>0) {
		tw.tv_usec = 0;
		tw.tv_sec = wait;

#ifdef _DEBUG
	printf("connbla2: %d\n",wait);
#endif

		FD_ZERO(&fds);
		FD_SET(sockfd,&fds);
		if ((numwait=select(1,NULL,&fds,NULL,&tw)) != 1)
			goto cleanup;
	}

#ifdef _DEBUG
	printf("connbla4\n");
#endif

	if (connect(sockfd, (struct sockaddr*)&addr, sizeof(addr))) {
		goto cleanup;
	}

#ifdef _DEBUG
	printf("connbla5: %d\n", sockfd);
#endif
	return ATmake("<int>", sockfd);

cleanup:
	t = ATmake("<int>", errno);

#ifdef _DEBUG
	printf("connbla6: %d\n", errno);
#endif

	_fail(t);
	return t;
}

ATerm SSL_accept(ATerm h, ATerm p, ATerm w)
{
	ATerm t;
	int sockfd, fd;
	fd_set fds;
	struct sockaddr_in addr;
  	char *host;
	int port = 0, wait = 0, numwait = 0;
	struct protoent *pe = NULL;

//      socklen_t is not known on all machines (Sun at cs.uu.nl)
//	socklen_t addrlen = 0;
	unsigned int addrlen = 0; // 

	in_addr_t ip = 0;
	struct hostent *he = NULL;
	struct timeval tw;

  	ATmatch(h,"<str>", &host);
  	ATmatch(p,"<int>", &port);
  	ATmatch(w,"<int>", &wait);

	if (!(pe = getprotobyname("tcp")))
		goto cleanup;
	if ((sockfd = socket(PF_INET, SOCK_STREAM, pe->p_proto)) == -1)
		goto cleanup;
	if (!(he = gethostbyname(host)) || !he->h_addr_list[0]) {
		goto cleanup;
	}
	ip = *((in_addr_t*)he->h_addr_list[0]);

#ifdef _DEBUG
	printf("accbla\n");
#endif

	bzero(&addr,sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_port = port;
	addr.sin_addr.s_addr = ip;
	if (bind(sockfd, (struct sockaddr*)&addr, sizeof(addr)))
		goto cleanup;

#ifdef _DEBUG
	printf("accbla1\n");
#endif

	if (listen(sockfd, BACKLOG))
		goto cleanup;
	if (wait>0) {
		tw.tv_usec = 0;
		tw.tv_sec = wait;

#ifdef _DEBUG
	printf("accbla2: %d\n",wait);
#endif

		FD_ZERO(&fds);
		FD_SET(sockfd,&fds);
		if ((numwait=select(1,&fds,NULL,NULL,&tw)) != 1)
			goto cleanup;
	}

#ifdef _DEBUG
	printf("accbla3\n");
#endif

	if ((fd = accept(sockfd, (struct sockaddr*)&addr, &addrlen)) == -1) {
		goto cleanup;
	}

#ifdef _DEBUG
	printf("accbla4\n");
#endif

	return ATmake("<int>", fd);

cleanup:
	t = ATmake("<int>",errno);

#ifdef _DEBUG
	printf("accbla5: %d\n", errno);
#endif

	_fail(t);
	return t;
}

ATerm SSL_send(ATerm fd, ATerm m)
{
	int sockfd;
	char *msg = NULL;
	ATerm t;
	ssize_t len, slen;

	ATmatch(fd, "<int>", &sockfd);

#ifdef _DEBUG
	printf("sendbla: %d\n", sockfd);
#endif

	msg = ATwriteToBinaryString(m, &len);

#ifdef _DEBUG
	printf("sendbla1: %d\n", len);
#endif

	if ((slen = send(sockfd, &len, sizeof(len), 0)) != sizeof(len))
		goto cleanup;

#ifdef _DEBUG
	printf("send: %d Bytes\n", len);
#endif

	if ((slen = send(sockfd, msg, len, 0)) != len)
		goto cleanup;

#ifdef _DEBUG
	printf("sendbla1: %d\n", slen);
#endif

	t = ATmake("<int>",errno);
	return t;

cleanup:
	t = ATmake("<int>",errno);

#ifdef _DEBUG
	printf("sendbla2: %d\n", errno);
#endif

	_fail(t);
	return t;
}

ATerm SSL_recv(ATerm fd)
{
	int sockfd = 0;
	ssize_t len = 0, buflen;
	char *buf = NULL;
	ATerm t;

	ATmatch(fd, "<int>", &sockfd);

#ifdef _DEBUG
	printf("recvbla1: %d\n", sockfd);
#endif

	if ((len = recv(sockfd, &buflen, sizeof(buflen), 0)) != 
	  sizeof(buflen))
		goto cleanup;
	buf = (char*)malloc(buflen);
	if ((len = recv(sockfd, buf, buflen, 0)) != buflen)
		goto cleanup;

#ifdef _DEBUG
	printf("recv: %d Bytes\n", buflen);
#endif

	t = ATreadFromBinaryString(buf,len);
	free(buf);
	return t;

cleanup:
	t = ATmake("<int>",errno);

#ifdef _DEBUG
	printf("recvbla: %d\n", errno);
#endif

	_fail(t);
	return t;
}

ATerm SSL_shutdown(ATerm fd)
{
	int sockfd = 0;
	ATerm t;

	ATmatch(fd, "<int>", &sockfd);
	if (shutdown(sockfd, SHUT_RDWR) != 0)
		goto cleanup;
	return fd;

cleanup:
	t = ATmake("<int>",errno);
	_fail(t);
	return t;
}
