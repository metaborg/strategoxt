\literate[time]

	\begin{abstract}
	The primitive \verb|dtime| returns the CPU time in seconds
	since the last call to \verb|dtime|. Can be used to time
	strategies.
	\end{abstract}

\begin{code}
module time
strategies

  // ABSOLUTE TIME

  /*   time  returns the time since the Epoch (00:00:00 UTC, Jan­
       uary 1, 1970), measured in seconds. */

  time = 
    prim("SSL_time")

  // TODO: see localtime, gmtime, etc. to convert a time number to
  // a broken down time.

strategies

  // RELATIVE TIME ; TIME OF PROCESS

  dtime = 
    prim("SSL_dtime")

  clock-to-seconds = 
    ?c; prim("SSL_ClockToSeconds", c)

  clock = 
    prim("SSL_clock")

  /* The times() function stores the current process times in a quadruple 
     (user time, system time, user time of children, system time of children)
     See man 2 times for more information */

  times = 
    prim("SSL_times")

  ticks-to-seconds = 
    ?t; prim("SSL_TicksToSeconds", t)

  diff-times :
    ((a1, b1, c1, d1), (a2, b2, c2, d2)) -> 
    (<subt>(a1, a2), <subt>(b1, b2), <subt>(c1, c2), <subt>(d1, d2))

  add-times :
    ((a1, b1, c1, d1), (a2, b2, c2, d2)) -> 
    (<add>(a1, a2), <add>(b1, b2), <add>(c1, c2), <add>(d1, d2))

  times-to-seconds :
    (a, b, c, d) -> 
    (<ticks-to-seconds> a, <ticks-to-seconds> b, <ticks-to-seconds> c, <ticks-to-seconds> d)

  user-time :
    (a, b, c, d) -> a

  system-time :
    (a, b, c, d) -> b

  cuser-time :
    (a, b, c, d) -> c

  csystem-time :
    (a, b, c, d) -> d

  self-children-user-time :
    (a, b, c, d) -> <add>(a, c)

  self-children-sys-time :
    (a, b, c, d) -> <add>(b, d)

  // total run-time so far
  run-time =
    times; crush(!0, add); ticks-to-seconds

  profile(msg, s) =
    where(times => start)
    ; s
    ; where(
        <diff-times
         ; <print> (stderr, [<msg>
                             , " user ", <self-children-user-time; ticks-to-seconds>
                             , " system ", <self-children-sys-time; ticks-to-seconds>
			     , "\n"])> (<times>, start)
      )

  profile'(msg, s) =
    where(times => start)
    ; s
    ; where(
	!(<times>, start)
        ; diff-times
        ; ![" user ",    <self-children-user-time; ticks-to-seconds>
           , " system ", <self-children-sys-time;  ticks-to-seconds>]
        ; msg
      )
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
