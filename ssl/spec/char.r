\literate[char]

% Copyright (C) 2001 Eelco Visser <visser@acm.org>
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

	This module defines some operations on characters, which
	are encoded in ASCII in Stratego.

\begin{code}
module char
strategies

  is-alphanum = is-num + is-alpha
  is-alpha = is-upper + is-lower

  is-num = ?c; where (<geq>(c,48);<leq>(c,57))
  is-upper = ?c; where (<geq>(c,65);<leq>(c,90))
  is-lower = ?c; where (<geq>(c,97);<leq>(c,122))
  is-ascii = ?c; where (<geq>(c,32);<leq>(c,127))

  case-char(s) = (to-upper, to-upper); s

  to-upper = try(is-lower;\x -> <subt>(x,32)\)
  to-lower = try(is-upper;\x -> <add>(x,32)\)
\end{code}
