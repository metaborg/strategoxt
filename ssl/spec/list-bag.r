module list-bag
imports list-basic
rules

  // bags
  // a bag is a set of elements with an attached occurrence number

  bag-insert :
    ((x,j), l) -> 
    <fetch(\ (y,i) -> (y, <add>(i,j)) where <eq>(y,x) \ ) <+ ![(x,j)|l]> l

  bag-union : 
    (l1, l2) -> <foldr(!l2, bag-insert)> l1

  // bag operations with 

  bag-insert(equ) : 
    ((x,j), l) -> 
    <fetch(\ (y,i) -> (<equ>(x,y), <add>(i,j)) \ ) <+ ![(x,j)|l]> l
   
  bag-union(equ) : 
    (l1, l2) -> <foldr(!l2, bag-insert(equ))> l1
