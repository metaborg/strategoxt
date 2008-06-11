#!/bin/sh

${STRC} -i "${SRCDIR}/test02.str" -o test02 -Cl stratego-lib || exit 1

./test02 || exit 1 
