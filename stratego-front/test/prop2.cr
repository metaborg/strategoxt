module prop
rules

  DN : [[ ~ ~ p ]] -> [[ p ]]

  DAOL : [[ p /\ (q \/ r) ]] -> [[ (p /\ q) \/ (p /\ r) ]]



  
