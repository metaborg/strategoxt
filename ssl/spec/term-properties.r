module term-properties
imports simple-traversal
strategies

  // subterm and superterms

  is-superterm =
    ?(x, y); where(<oncetd(?y)> x)

  is-proper-superterm =
    ?(x, y); not(eq); is-superterm

  is-subterm =
    ?(x, y); where(<oncetd(?x)> y)

  is-proper-subterm =
    ?(x, y); not(eq); is-subterm

  is-proper-subterm-set =
    ?([y|_], xs); where(<fetch(not(?y); oncetd(?y))> xs)

  is-proper-superterm-set =
    ?([x|_], ys); where(<fetch(<is-proper-superterm>(x,<id>))> ys)


% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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
