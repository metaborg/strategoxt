#!/bin/sh

${STRC} -i test04.str -la ${STRATEGO_LIB}/lib/stratego-lib/libstratego-lib.la || exit 1

./test04 || exit 1 
