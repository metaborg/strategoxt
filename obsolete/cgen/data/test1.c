ATermList ATmap(ATermList l, ATerm (* f)(ATerm))
{
  if(ATisEmpty(l))
    return l;
  else
    return ATinsert(ATmap(ATgetNext(l), f), f(ATgetFirst(l)));
}




