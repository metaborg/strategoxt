module module2
signature
  constructors
    C : a -> b

strategies

  g(s1,s2) = rec x(s1; x <+ s2)
