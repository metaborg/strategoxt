\literate
% GT -- Grammar Tools
% Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>
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

% $Id: termid.r,v 1.6 2001/10/10 21:34:47 mdejonge Exp $

The io-idwrap strategy is used to perform identity checking of input terms
and to add term identifiers to output terms. Term identifiers provide some
(weak) form of type checking of terms and, when used with AST's, it provides
grammar identification to verify that the input term is an AST generated
from a particular grammar.

The strategy adds the '--strict' command line switch, which when specified,
issues a fatal error in case term identification of a term fails. Otherwise,
only a warning message is issued when a term has an unexpected term
identifier.

examples:
    io-idwrap( InId("\"sdf-2.2\""), s)

 Verify that the input term was produced from version 2.2 of the grammar
 sdf, then apply s to the input term from which the outermost function
 symbol has been stripped off.

    io-idwrap( InId("\"sdf-2.1\"" + "\"sdf-2.2\""), s )
 
 Version 2.1 and 2.2 of sdf are accepted.

    io-idwrap( InOutTyp( "\"sdf-2.1\"", "\"sdf-2.2\"",),  s)

 Verify that input term has identifier "sdf-2.1", apply s, add identifier
 "sdf-2.2" to resulting term.

    io-idwrap( OutId("\"sdf-2.1\"" ), s )

  Read a term (without checking its identifier), apply s to it and finally
  add the identifier "\"sdf-2.1\"" to it.


This module also provides strategies to manually perform identifier
verification and addition of term identifiers.

examples:
   
 To check that the id of a term t equals "sdf-2.1", the following can be used:  

    <termid-check("\"sdf-2.1\"")>t

 When t equals "sdf-2.1"(f(a,b)), the result would be f(a,b).

 To accept any term identifier use the following:

    <termid-check>(id)>t   

 To set the identifier of a term use the strategy "termid-set":

    <termid-set(!"\"sdf-2.1\"")>t

When applied to the term f(a,b) the result would be "sdf-2.1"f(a,b)

\begin{code}

module termid
imports options

signature
constructors
   Strict: Option

strategies
io-idwrap('id, strat) =
   io-idwrap('id, (id, strat), fail)

io-idwrap('id, strat, extra-options) =
   iowrap( 
      try(termid-check'('id)); strat; try(termid-set'('id)),
      extra-options + Option("--strict", !Strict(),
                             !"--strict         Use strict typing of input term" )
   )

// Check the term identifier i by applying strategy in-type to it. Issue a
// warning (or fatal error) when in-type failes. If in-type succeeds, or
// in case --strict switch was not specified, return trm as result.
InId(in-type): ("in-type",  i#([trm])) -> trm
   where
      <in-type <+ type-failure>i

// Create an identifier for term t. The identifier name is obtained by
// applying strategy out-type to ()
OutId(out-type): ("out-type", t) -> trm
   where
      <mkterm>(<out-type>(), [t]) => trm

// Obtain the input identifier strategy from an InOut identifier.
InOutId(in-type,out-type) = 
    ("in-type",  id );
    InId(in-type)

// Obtain the output identifier strategy from an InOut identifier.
InOutId(in-type,out-type) =
   ("out-type", id);
   OutId(out-type)

// Check term identifier: i(f(a,b)) becomes f(a,b) when 'id applied to i
// succeeds. This is a filter that operates on a tuple (options, t) and is
// used within io-idwrap.
termid-check'('id): (options, t) -> (options, trm)
   where
      <'id>("in-type", t) => trm

// Check term identifier: i(f(a,b)) becomes f(a,b) when 'id applied to i
// succeeds.
termid-check('id): t -> trm
   where
      <InId('id)>("in-type", t) => trm

// Set identity of term to i: f(a,b) becomes i(f(a,b)). This is a filter
// that operates on a tuple (options, t) and is used within io-idwrap.
termid-set'('id) : (options, t) -> (options, trm)
   where
      <'id>("out-type", t) => trm

// Set identity of term to i : f(a,b) becomes i(f(a,b))
termid-set('id) : t -> trm
   where
      <OutId('id)>("out-type", t) => trm

// Type failure: issue a warning or fatal error depending on strictness
// setting which can be controlled by the switch --strict.
type-failure = 
   (
     has-option(!Strict);
     <fatal-error>["Fatal: input term has incorrect grammar identifier."]
   <+
     <error>["Warning: input term has incorrect grammar identifier." ]
   )

\end{code}
