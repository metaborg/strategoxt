/*

SRTS -- The Stratego Run-Time System

Copyright (c) 2004 Karl Trygve Kalleberg <karltk@ii.uib.no>

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

ATerm SSL_open_zip(ATerm name, ATerm mode);
ATerm SSL_close_zip(ATerm name);

ATerm SSL_aterm_to_zip(ATerm name, ATerm termname, ATerm term);
ATerm SSL_aterm_from_zip(ATerm name, ATerm termname);

ATerm SSL_file_to_zip(ATerm name, ATerm fromname, ATerm asname);
ATerm SSL_file_from_zip(ATerm name, ATerm fromname, ATerm asname);

ATerm SSL_get_zip_entries(ATerm name);
