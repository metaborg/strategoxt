#include "stratego.h"

ATerm uniqueInt()
{
    static unsigned int n = 1;
    return (ATerm) ATmakeInt(n++); 
}
