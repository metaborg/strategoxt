#!/bin/sh

${STRC} -i test04.str -la ${SSL}/lib/ssl/libstratego-lib.la || exit 1

./test04 || exit 1 
