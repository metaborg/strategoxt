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

ATerm SSL_getcwd(void);
ATerm SSL_readdir(ATerm t);
ATerm SSL_rename(ATerm oldname, ATerm newname);
ATerm SSL_copy(ATerm oldname, ATerm newname);
ATerm SSL_fdcopy(ATerm fdinA, ATerm fdoutA);
ATerm SSL_copy_mmap(ATerm oldname, ATerm newname);
ATerm SSL_link(ATerm existingpath, ATerm newpath);
ATerm SSL_remove(ATerm pathname);
ATerm SSL_modification_time(ATerm file);
ATerm SSL_getenv(ATerm t);
ATerm SSL_setenv(ATerm name, ATerm value, ATerm overwrite);


// ATerm SSL_stat(ATerm file);
