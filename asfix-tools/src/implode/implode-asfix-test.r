module implode-asfix-test
imports implode-asfix sunit

strategies

  implode-asfix-test = 
    test-suite(!"implode-asfix-test",
	injection-test1;
	injection-test2;
	alternative-test1
    )

  injection-test1 = 
    apply-and-fail(!"injection-test1"
	,injection
	,!prod([cf(sort("B"))],cf(alt(sort("A"),alt(sort("B"),lit("aap")))),no-attrs)
	)

  injection-test2 = 
    apply-and-fail(!"injection-test2"
	,Inj
	,!appl(prod([cf(sort("B"))],cf(alt(sort("A"),alt(sort("B"),lit("aap")))),no-attrs),[appl(prod([lex(sort("B"))],cf(sort("B")),no-attrs),[appl(prod([char-class([range(65,90)])],lex(sort("B")),attrs(['id("Main")])),[65])])])
	)

  alternative-test1 = 
    apply-test(!"alternative-test1"
	,FlatAlt
	,!appl(prod([cf(sort("B"))],cf(alt(sort("A"),alt(sort("B"),lit("aap")))),no-attrs),[appl(prod([lex(sort("B"))],cf(sort("B")),no-attrs),[appl(prod([char-class([range(65,90)])],lex(sort("B")),attrs(['id("Main")])),[65])])])
	,!alt(2,[appl(prod([lex(sort("B"))],cf(sort("B")),no-attrs),[appl(prod([char-class([range(65,90)])],lex(sort("B")),attrs(['id("Main")])),[65])])])
	)

