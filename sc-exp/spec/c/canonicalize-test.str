module canonicalize-test
imports canonicalize sunit
strategies

  canonicalize-test = 
    test-suite(!"canonicalize-test",
	test1;
	test2
    )

  test1 =
    apply-test(!"test1"
	, Canon
	,!Call(SVar("escape_1"),
	       [Let([SDef("l_2",
		          [VarDec("m_2",FunType([ConstType(Op("ATerm",[]))],ConstType(Op("ATerm",[]))))],
			  Id)],
                    Call(SVar("l_2"),[]))])
	, !Let([SDef("l_2",
                     [VarDec("m_2",FunType([ConstType(Op("ATerm",[]))],ConstType(Op("ATerm",[]))))],Id)],
               Call(SVar("escape_1"),[Call(SVar("l_2"),[])]))
	)

  test2 =
    apply-test(!"test1"
	, CreateDef1
	,!Let([SDef("l_2",
		    [VarDec("m_2",FunType([ConstType(Op("ATerm",[]))],ConstType(Op("ATerm",[]))))],
		    Id)],
              Call(SVar("l_2"),[]))
	, !TCons(Call(SVar("l_2"),[]),
           TCons([SDef("l_2",
                       [VarDec("m_2",FunType([ConstType(Op("ATerm",[]))],ConstType(Op("ATerm",[]))))],
                       Id)],
           TNil)) 
	)

