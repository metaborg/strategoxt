/*

Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>

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
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
USA

*/

/* The CHECK_FOR_MPROTECT function, tries to determine whether or not
   dynamic functions require the use of mprotect to make the stack executable.
 */
AC_DEFUN(CHECK_FOR_MPROTECT,[
AC_MSG_CHECKING([whether platform requires use of mprotect])
AC_TRY_RUN(
/* This test checks whether on (sun/sparc) platforms the use of mprotect is
   requred to get nested functions working.*/
[int main(int i, char** a)
{
   void (*testing)(void);
   void a_0()
   {
   }
   testing = a_0;
   testing();
   return 0;
}],
mprotect_is_required=no
,
mprotect_is_required=yes
AC_DEFINE(NEEDS_MPROTECT, 1, [Do we need mprotect to deal with nested functions?]),:)
AC_MSG_RESULT(${mprotect_is_required})
])
