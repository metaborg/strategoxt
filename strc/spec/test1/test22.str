module test22
imports lib
signature
  constructors
    Foo: String -> Fnord
    Bar: String * String -> Fnord

strategies

  main = 
    !Foo("uck")
    ; check(test1)
    ; check(test2)
    ; check(test3)
    ; check(test4)

  check(s) = 
  where( debug(!"doing test on: ")
  ; s
  ; debug (!"succeeded with: ")
  <+ say (!"failed")
  )

  test1 :
    Foo(a) -> Bar(a,"B")

  test2 ::
    Foo(?a) --> Foo(!a)

  test3 :
    Foo(a) -> Foo(a)
    where !"bla"
	; debug(!"tekst: ")

  test4 ::
    Foo(?a) --> Foo(!a)
    where !"bla"
	; debug(!"tekst: ")
