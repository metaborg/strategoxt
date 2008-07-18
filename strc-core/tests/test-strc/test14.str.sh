#!/bin/sh

${STRC} -i test14.str -la stratego-lib || exit 1 

rm -f test14.str.actual
./test14 2>&1 | head -n 2 > test14.str.actual

diff test14.str.expected test14.str.actual || (echo "Result not expected; test failed"; exit 1)
