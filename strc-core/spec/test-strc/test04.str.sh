#!/bin/sh

${STRC} -i test04.str -la ${STRATEGO_LIB}/lib/libstratego-lib.la || exit 1

./test04 || exit 1 
