#!/bin/sh

${STRC} -i test13.str -la stratego-lib || exit 1 

rm -f test13.str.actual
./test13 2>&1 | head -n 3 > test13.str.actual

diff test13.str.expected test13.str.actual || (echo "Result not expected; test failed"; exit 1)
