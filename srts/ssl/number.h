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

ATerm SSL_is_int(ATerm t);
ATerm SSL_is_real(ATerm t);
ATerm SSL_int(ATerm t);
ATerm SSL_addi(ATerm x, ATerm y);
ATerm SSL_addr(ATerm x, ATerm y);
ATerm SSL_subti(ATerm x, ATerm y);
ATerm SSL_subtr(ATerm x, ATerm y);
ATerm SSL_muli(ATerm x, ATerm y);
ATerm SSL_mulr(ATerm x, ATerm y);
ATerm SSL_divi(ATerm x, ATerm y);
ATerm SSL_divr(ATerm x, ATerm y);
ATerm SSL_mod(ATerm x, ATerm y);
ATerm SSL_gti(ATerm x, ATerm y);
ATerm SSL_gtr(ATerm x, ATerm y);
ATerm SSL_cos(ATerm x);
ATerm SSL_sin(ATerm x);
ATerm SSL_sqrt(ATerm x);
ATerm SSL_atan2(ATerm x, ATerm y);
ATerm SSL_string_to_int(ATerm x);
ATerm SSL_int_to_string(ATerm x);
ATerm SSL_string_to_real(ATerm x);
ATerm SSL_real_to_string(ATerm x);
ATerm SSL_real(ATerm t);
