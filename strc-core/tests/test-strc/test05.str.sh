#!/bin/sh

${STRC} -i "${SRCDIR}/test05.str" -o test05 -CD "Macro()=((ATerm) ATmakeInt(2))" || exit 1

./test05 || exit 1 
 