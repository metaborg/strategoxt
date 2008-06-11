#!/bin/sh

${STRC} -i "${SRCDIR}/test06.str" -o test06 --xtc-repo foo || exit 1

./test06 || exit 1 
 