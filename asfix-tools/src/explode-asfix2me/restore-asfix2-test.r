module restore-asfix2-test

imports restore-asfix2 sunit

strategies
   restore-asfix2-test =
      test-suite(!"restore-asfix2-test",
                  unflatten-literal-test
                )
   
   unflatten-literal-test =
      apply-test(!"unflatten-literal",
                 unflatten-literal,
                 !lit("aap"),
                 appl(prod([97,97,112],lit("aap"),no-attrs),[97,97,112]))
