\literate[options-test]
\begin{code}
module options-test
imports parse-options options sunit
signature
  constructors
    Test:                Option
    TestValue: String -> Option
    NoTestValue: String -> Option

    A : Term
    B : Term
    C : Term
    D : Term

strategies

  main = test-suite(!"options-test",
	  has-option-test
	; option-value-test1
	; option-value-test2
	)

  has-option-test = 
    apply-test  (!"has-option-test"
		,fake-options;has-option(!Test)
		,!()
		,id)

  option-value-test1 = 
    apply-test  (!"option-value-test1"
		,fake-options;option-value(\TestValue(v) -> v\,fail)
		,!()
		,!"foo")

  option-value-test2 = 
    apply-test  (!"option-value-test1"
		,fake-options;option-value(\NoTestValue(v) -> v\,!"bar")
		,!()
		,!"bar")

  fake-options = 
    !["options-test",2,Test(),TestValue("foo")];
    store-options

  Main =
   	(parse-options(fail <+ io-options));
	debug(!"a");
	(need-help
   	 <+ input-file';
	debug(!"b");
	    apply-strategy((id,id));
	debug(!"c");
	    output-file';
	debug(!"d");
	    report-success
   	 <+ report-failure
	)

  blabla =
	!([Runtime(0),Program("./options-test")],A());
	debug(!"init");
	    (rec x([?Output(outfile) | id] 
                   <+ [id | x]) 
             <+ !stdout => outfile
            , id);
	debug(!"exit")


  blabla' =
	!([C()],D());
	(?A() <+ !B(), id)

  blablabla =
	![Runtime(0),Program("./options-test")];
	debug(!"init");
	    rec x([?Output(outfile) | id] 
                   <+ [id | x]) 
             <+ !stdout => outfile;
	debug(!"exit")


  output-file-test =
	debug(!"a");
	 (option-defined(?Output(outfile)) <+ !stdout => outfile, id);
	debug(!"b")

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
