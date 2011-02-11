#!/bin/sh

${STRC} -i test13.str -la stratego-lib -O 0|| exit 1 

rm -f test13.str.actual
./test13 > test13.str.actual 2>&1

diff test13.str.expected test13.str.actual || (echo "Result not expected; test failed"; exit 1)
