\literate[instantiate]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: instantiate.r,v 1.2 2002/08/01 15:05:10 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module instantiate
imports pp-tables.r
rules
instantiate: (t, args) -> instantiated
   where
      <bottomup( try(Instantiate(!args)+flat-list ) )>t => instantiated

Instantiate(args) : Arg(n) -> instantiated
   where
      <index>(n, <args>()) => instantiated

Instantiate(args) : Arg2(n, m) -> instantiated
   where
      <index>(n, <args>()) => list;
      <index>(m, list)     => instantiated

strategies

instantiate-list(pp-entry) =
   rec x(
   {sym,xs:
    []
    <+
    ?[sym|xs];
    [<instantiate>(<pp-entry>(),[sym])|!xs;x]
    })

instantiate-sep-list(pp-entry) =
   rec x(
   {sym,sep,xs:
    []
    <+
     [id]
    <+
    ?[sym,sep|xs];
    [<instantiate>(<pp-entry>(),[sym,sep])|!xs;x]
    })


\end{code}
