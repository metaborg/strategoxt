module fusion-rules
imports stratego

rules

  // This set of rules is generally applicable

  IntroduceApp :
    [[ !t; s ]] -> [[ !<s> t  ]]

  ApptoApp :
    [[ <s1> <s2> t : T ]] -> [[ <s2; s1> t : T ]]

  ExpandRec : 
    [[ rec x(s) ]] -> <ssubs> ([x], [ [[ rec x(s) ]] ], s)

  UnrollRec : 
    [[ rec x(s) ]] -> [[ rec x(~<ssubs> ([x], [s], s)) ]]

  // Note: duplication of code and computation!

  SeqOverChoiceL :
    [[ s1 ; (s2 + s3) ]] -> [[ (s1; s2) + (s1; s3) ]]

  SeqOverLChoiceL :
    [[ s1 ; (s2 <+ s3) ]] -> [[ (s1; s2) <+ (s1; s3) ]] 

  // The following rules are applicable under certain
  // circumstances. 

  // Note: the following rule is only valid if s3 is guaranteed
  // to succeed; hence, generate it dynamically for s3s for which
  // this is known to be the case

  seq-over-choice = ?[[ s3 ]]; 
    rules(
      SeqOverChoiceR :
        [[ (s1 + s2); s3 ]] -> [[ (s1; s3) + (s2; s3) ]]

      SeqOverLChoiceR :
        [[ (s1 <+ s2); s3 ]] -> [[ (s1; s3) <+ (s2; s3) ]]
    )

  // Note: watch out for free variable capture

  SeqOverScopeR :
    [[ {xs : s1}; s2 ]] -> [[ {xs : s1; s2} ]]

  SeqOverScopeL :
    [[ s1; {xs : s2} ]] -> [[ {xs : s1; s2} ]]


  // Note: Code duplication
  // Always valid?
 
  BottomupOverConstructor :     
    [[ <bottomup_1(s)> c(ts1) :T]] -> [[ <s> c(ts2) :T]]
    where <map(\ t -> [[ <bottomup_1(s)> t :T]] \ )> ts1 => ts2

