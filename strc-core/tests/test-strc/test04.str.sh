#!/bin/sh

${STRC} -i "${SRCDIR}/test04.str" -o test04 -la ${STRATEGO_LIB}/lib/libstratego-lib.la || exit 1

./test04 || exit 1 
