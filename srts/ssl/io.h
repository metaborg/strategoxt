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

ATerm SSL_file_exists(ATerm t);
ATerm SSL_open_file(ATerm name, ATerm mode);
ATerm SSL_append_file(ATerm name);
ATerm SSL_close_file(ATerm name);
ATerm SSL_fflush(ATerm name);
ATerm SSL_fileno(ATerm stream);
ATerm SSL_print(ATerm file, ATerm str);
ATerm SSL_printnl(ATerm file, ATerm str);
ATerm SSL_printascii(ATerm file, ATerm str);
ATerm SSL_ReadFromFile(ATerm filename);
ATerm SSL_WriteToFile(ATbool binary, ATerm filename, ATerm trm);
ATerm SSL_WriteToBinaryFile(ATerm file, ATerm t);
ATerm SSL_WriteToTextFile(ATerm file, ATerm t);

ATerm SSL_getchar(ATerm filename);
