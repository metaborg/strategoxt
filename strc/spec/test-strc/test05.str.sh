#!/bin/sh

${STRC} -i test05.str -CD "Macro()=((ATerm) ATmakeInt(2))" || exit 1

./test05 || exit 1 
 