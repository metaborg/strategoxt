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

ATerm SSL_dtime(void);
ATerm SSL_ClockToSeconds(ATerm t);
ATerm SSL_clock(void);
ATerm SSL_times(void);
ATerm SSL_TicksToSeconds(ATerm t);

ATerm SSL_time(void);
ATerm SSL_now_epoch_time(void);
ATerm SSL_epoch2localtime(ATerm t);
ATerm SSL_epoch2UTC(ATerm t);

