module abox-format
imports abox io options
 
strategies
 
  abox-format = iowrap(Box)
 
  Box =
  rec box(
    S(is-string)
    + H(list(S-Option) , list(box) )
    + V(list(S-Option) , list(box) )
    + HV    ( list(S-Option) , list(box) )
    + ALT   ( box , box )
    + FBOX  ( Font-Operator , box )
    + A     ( list(A-Option) , list(S-Option) , list(box) )
    + R     ( list(S-Option) , list(box) )
    + LBL   ( is-string , box )
    + REF   ( is-string , box )
    + C     ( list(S-Option) , list(box) )
    + L     ( box , box )
    + LINT  ( is-int , box )
    + Arg   ( is-int )
    + Arg2  ( is-int , is-int )
    <+ debug(!"Not a Box: ")
  )

  Font-Operator =
    F(list(F-Option))
  + KW    
  + VAR   
  + NUM   
  + MATH  

  F-Option =
    FInt  ( Font-Param , is-string )
  + FFID  ( Font-Param , is-string )

  Font-Param =
    FN    
  + FM    
  + SE    
  + SH    
  + SZ    
  + CL    

  A-Option =
    AL	  ( list(S-Option) )
  + AC	  ( list(S-Option) )
  + AR	  ( list(S-Option) )

  S-Option =
    SOpt (Space-Symbol , is-string)

  SOptb =
    SOptb ( Space-Symbol , Box)

 Space-Symbol =
    VS + HS + IS

