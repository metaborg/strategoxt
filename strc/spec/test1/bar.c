#include <srts/stratego.h>
#include <srts/stratego-lib.h>

ATerm bar_1_0(ATerm s(ATerm), ATerm t)
{
  t = s(t);
  return(t);
}
