\literate[{\tt FRONTEND}]
\begin{code}
module frontend
imports normalize-spec 
	spec-to-sdefs 
	use-def 
	check-constructors 
	desugar

strategies
 
  frontend = debug; iowrap(frontend-transformation)

  frontend-transformation = 
//  where(run-time; debug(!"  frontend initialization: "));
    normalize-spec
//; where(run-time; debug(!"  normalize-spec: "))
  ; where(spec-use-def)
//; where(run-time; debug(!"  spec-use-def: "))
  ; ExpandOverlays
//; where(run-time; debug(!"  ExpandOverlays: "))
  ; CheckConstructors
//; where(run-time; debug(!"  CheckConstructors: "))
  ; RulesToSdefs
//; where(run-time; debug(!"  RulesToSdefs: "))
  ; DesugarListMatching
//; where(run-time; debug(!"  DesugarListMatching: "))
  ; strename
//; where(run-time; debug(!"  strename: "))
  ; Specification([id,Strategies(desugar-spec)])
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
