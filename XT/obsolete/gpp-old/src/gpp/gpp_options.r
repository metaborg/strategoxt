\literate{gpp_options}
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

% $Id: gpp_options.r,v 1.1.1.1 2001/06/05 09:11:47 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module gpp_options

imports lib

strategies
   iowrap1(strat, extra-options, usage) =
   obsolete(!"iowrap1: use iowrap/3");
   parse-options(extra-options <+ io-options) => options;
   where( <table-create>"option-table" ;
          <table-put>("option-table", "options", options));
   (
      need-help(usage)
   <+
      input-file;
      apply-strategy(strat);
      output-file';
      report-success
   <+
      report-failure
   )


option-defined1(s) =
   obsolete(!"option-defined1: use has-option");
   <table-get>("option-table", "options");
   fetch(s)

switch-list(s) =
   <table-get>("option-table", "options");
   collect(s)
\end{code}
