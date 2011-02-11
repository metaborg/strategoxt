#!/bin/sh

${STRC} -i test17.str -la stratego-lib || exit 1 

rm -f test17.str.actual
./test17 2>&1 | tail -n 2 | head -n 1 > test17.str.actual

diff test17.str.expected test17.str.actual || (echo "Result not expected; test failed"; exit 1)
