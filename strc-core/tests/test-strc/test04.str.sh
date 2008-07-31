#!/bin/sh

${STRC} -i "${SRCDIR}/test04.str" -o test04 -la-la ${STRATEGO_LIB}/lib/libstratego-lib || exit 1

./test04 || exit 1 
