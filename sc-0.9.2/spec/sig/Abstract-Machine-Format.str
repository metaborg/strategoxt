\literate[{\btt Abstract-Machine-Format}]

\begin{code}
module Abstract-Machine-Format
imports instructions lib
strategies

  main = iowrap(instruction)

  program =
    Program(id, instruction)

  instruction =
  rec ins(
	Block(list(ins))

	+ ?VARDECL(ATerm, _)

	+ PROCDECL(is-string)
	+ PROC(is-string)
	+ ENDPROC
	+ Ccall(is-string,[])

	+ ?TestFunFC(_,_,_)
	+ ?TestFunTop(_)
	+ ?MOVE(_,_)

        + AllBuild
        + AllInit
        + AllNextSon(is-string)
        + Arg(is-int)
        + BuildFun(is-string,is-int)
        + BuildInt(is-int)
        + BuildStr(is-string)
        + BuildVard(is-int,is-int)
        + Cjump
        + Cpop
        + Cpush(is-string)
        + Crestore
        + Epopd(is-int,is-int)
        + Epushd(is-int,is-int)
        + Goto(is-string)
        + Iprim(is-string)
        + IsAppl
        + IsAppl
        + IsAppl
        + IsAppl
        + Label(is-string)

        //+ MatchFunFC(is-string,is-int,is-string)
        //+ MatchFun(is-string,is-int)
        //+ MatchInt(is-int)
        //+ MatchString(is-string)

        //+ MatchTravEnd
        //+ MatchTravInit
        //+ MatchVard(is-int,is-int)

        + OneBuild
        + OneInit
        + OneMatchNextSon
        + OneNextSon
        + Return
        + Rpush(is-string)
        + Tdrop
        + Tdupl
        + Tduplinv
        + Tpop
        + Tpush
        + TravInit

	+ SomeInit
	+ SomeNextSon(is-string)
	+ CounterOK
	+ SomeBuild

	+ MoveArg(is-int,is-int,is-int,is-int,is-int)
	+ TestStr(is-int,is-int,is-string,is-string)
	+ TestInt(is-int,is-int,is-int,is-string)
	+ TestReal(is-int,is-int,is-real,is-string)
	+ Move(is-int,is-int,is-int,is-int)
	+ MoveTop(is-int,is-int)

	+ Ccontinue(is-string)

	+ NotNULLd(is-int, is-int)
	+ Tset(build-term-expression)

	<+ debug(!"Not an instruction: ")
  )

  build-term-expression =
  rec bte(
	App0(is-string)
	+ App1(is-string, bte)
	+ App2(is-string, bte, bte)
	+ App3(is-string, bte, bte, bte)
	+ App4(is-string, bte, bte, bte, bte)
	+ App5(is-string, bte, bte, bte, bte, bte)
	+ App6(is-string, bte, bte, bte, bte, bte, bte)
	+ AppN(is-string, bte)
	+ ATmakeApplN(is-string,list(bte))
	+ "ATmakeList" # ([is-int | map(bte)])
	+ "ATmakeReal" # ([is-real])
	+ "ATmakeInt" # ([is-int])
	+ Egetd(is-int, is-int)
	+ ATmakeString(is-string)
	+ MakeInt(is-int)
	<+ debug(!"Not a build-term-expression: ")
  )
\end{code}
