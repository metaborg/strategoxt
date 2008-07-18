#!/bin/sh

${STRC} -i test15.str -la stratego-lib || exit 1 

rm -f test15.str.actual
./test15 2>&1 | head -n 1 > test15.str.actual

diff test15.str.expected test15.str.actual || (echo "Result not expected; test failed"; exit 1)
