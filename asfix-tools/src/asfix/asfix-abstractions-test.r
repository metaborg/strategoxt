module asfix-abstractions-test
imports sunit asfix-abstractions

strategies

  main = 
    test-suite(!"asfix-abstractions-test",
      test1;
      test1a;
      test2a;
      test2b;
      test2c;
      test2d;
      test2e;
      test3a;
      test3b;
      test4
    )

  test1 =
    apply-test(!"test1"
              ,conc-layout1 + conc-layout2 + conc-layout3
              ,!((),NoCfLayout)
              ,!()
              )

  test1a =
    apply-test(!"test1a"
              ,conc-layout1 + conc-layout2 + conc-layout3
              ,!(NoCfLayout,NoCfLayout)
              ,!NoCfLayout
              )

  test2a =
    apply-test(!"test2a"
              ,conc-layout1 + conc-layout2 + conc-layout3
              ,!(NewLine, NoCfLayout)
              ,!NewLine
              )

  test2b =
    apply-test(!"test2b"
              ,conc-layout1 + conc-layout2 + conc-layout3
              ,!(NoCfLayout, NewLine)
              ,!NewLine
              )

  test2c =
    apply-test(!"test2c"
              ,conc-layout2 + conc-layout3
              ,!(NewLine, NoCfLayout)
              ,!NewLine
              )

  test2d =
    apply-test(!"test2d"
              ,conc-layout2 + conc-layout3
              ,!(NoCfLayout, NewLine)
              ,!NewLine
              )

  test2e =
    apply-test(!"test2e"
              ,conc-layout1 <+ conc-layout2 <+ conc-layout3
              ,!(NewLine, NoCfLayout)
              ,!NewLine
              )

  test3a =
    apply-test(!"test3a"
              ,conc-layout3
              ,!(NewLine, NoCfLayout)
              ,!NewLine
              )

  test3b =
    apply-test(!"test3b"
              ,conc-layout2
              ,!(NoCfLayout, NewLine)
              ,!NewLine
              )

  test4 =
    apply-and-show(!"test4"
              ,conc-layout1 + conc-layout2 + conc-layout3

              ,!(appl(prod([cf(layout)],cf(opt(layout)),no-attrs),[appl(prod([lex(layout)],cf(layout),no-attrs),[appl(prod([char-class([10])],lex(layout),no-attrs),[10])])]),appl(prod([cf(layout)],cf(opt(layout)),no-attrs),[appl(prod([lex(layout)],cf(layout),no-attrs),[appl(prod([char-class([10])],lex(layout),no-attrs),[10])])]))
              //,!()

              )
