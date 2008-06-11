#!/bin/sh

${STRC} -i "${SRCDIR}/test07.str" -o test07 -Xlinker -lstratego-lib || exit 1

./test07 || exit 1 
