\literate[verbose]
\begin{code}
module verbose
imports config
strategies

  set-verbosity = 
    <set-config> ("--verbose", <id>)

  verbosity = 
    <get-config> "--verbose" <+ !0

  if-verbose1(s) = 
    try(where(<geq>(<get-config> "--verbose", 1)); s)

  if-verbose2(s) = 
    try(where(<geq>(<get-config> "--verbose", 2)); s)

  if-verbose3(s) = 
    try(where(<geq>(<get-config> "--verbose", 3)); s)

  if-verbose4(s) = 
    try(where(<geq>(<get-config> "--verbose", 4)); s)

  if-verbose5(s) = 
    try(where(<geq>(<get-config> "--verbose", 5)); s)

  if-verbose6(s) = 
    try(where(<geq>(<get-config> "--verbose", 6)); s)

  if-verbose7(s) = 
    try(where(<geq>(<get-config> "--verbose", 7)); s)


  if-less-verbose1(s) = 
    try(where(<leq>(<get-config> "--verbose", 1)); s)

  if-less-verbose2(s) = 
    try(where(<leq>(<get-config> "--verbose", 2)); s)

  if-less-verbose3(s) = 
    try(where(<leq>(<get-config> "--verbose", 3)); s)

  if-less-verbose4(s) = 
    try(where(<leq>(<get-config> "--verbose", 4)); s)

  if-less-verbose5(s) = 
    try(where(<leq>(<get-config> "--verbose", 5)); s)

  if-less-verbose6(s) = 
    try(where(<leq>(<get-config> "--verbose", 6)); s)

  if-less-verbose7(s) = 
    try(where(<leq>(<get-config> "--verbose", 7)); s)

\end{code}


% Copyright (C) 2002 Eelco Visser <visser@acm.org>
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
