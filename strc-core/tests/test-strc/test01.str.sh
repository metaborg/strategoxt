#!/bin/sh

${STRC} -i "${SRCDIR}/test01.str" -o test01 || exit 1 

./test01 || exit 1 

