module test41
imports LayoutPreserve sunit
signature
  constructors
    Aap : a * b -> c
    Aarde : a * b -> c
    L : a  -> c
    NL : c
    Jetje : a -> c
    Noot : a * b -> c
    Zus : c
    Mies : List(String) -> c
    Mies : a * b * c -> c
   
strategies

  main =
    test-suite(!"test41",
	test1a;
	test1b;
	test2
    )

  test1a =
    apply-test(!"test1a"
	, laydiff(id)
	, !(Aap(Noot(Jetje(Aarde("foo",L("dd"))),Zus),Mies(["1","2","3","6","7"]))
	   ,Aap(Noot(Jetje(Aarde("foo",NL)),Zus),Mies(["1","2","4","6","7"])))
	, !Aap(Noot(Jetje(Aarde("foo",L("dd"))),Zus),Mies(["1","2",amb(amb1("3"),amb2("4")),"6","7"]))
	)

  test1b =
    apply-test(!"test1b"
	, laydiff(id,id)
	, !(Aap(Noot(Jetje(Aarde("foo",L("dd"))),Zus),Mies(["1","2","3","6","7"]))
	   ,Aap(Noot(Jetje(Aarde("foo",NL)),Zus),Mies(["1","2","4","6","7"])))
	, !Aap(Noot(Jetje(Aarde("foo",L("dd"))),Zus),
	       Mies(["1","2",amb(amb1("3"),amb2("4")),"6","7"]))
	)

  test2 =
    apply-test(!"test2"
	, laydiff-squash(fail,id)
	, !(Aap(Noot(Jetje(Aarde("foo",L("dd"))),Zus),Mies(["1","2","3","6","7"]))
	   ,Aap(Noot(Jetje(Aarde("foo",NL)),Zus),Mies(["1","2","4","6","7"])))
	, !Aap("..",Mies("..",amb("3","4"),".."))
	)
