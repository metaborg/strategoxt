\begin{code}
module file
imports io

rules

  find-in-path :
    (file, path) -> 
    <rec x(\ [dir|_] -> <concat-strings; file-exists> [dir,"/",file] \
	   <+ Tl; x)> path

strategies

  find-in-path(mkpath) =
	file-exists 
	<+ split(id, mkpath); find-in-path
	<+ \ x -> <fatal-error> ["no such file: ", x] \

  find-file(mkpath, ext) =
        guarantee-extension(ext);
	find-in-path(mkpath)
\end{code}

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
