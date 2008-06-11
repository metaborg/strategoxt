#!/bin/sh

${STRC} -i "${SRCDIR}/test03.str" -o test03 -la stratego-lib || exit 1

./test03 || exit 1 
