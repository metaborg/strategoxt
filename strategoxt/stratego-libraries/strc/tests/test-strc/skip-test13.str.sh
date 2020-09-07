#!/bin/sh

java -jar ${STRJ} -i test13.str -la stratego-lib -O 0|| exit 1 

rm -f test13.str.actual

javac -cp ${STRJ} test13.java || exit 1

java -cp .:${STRJ} -Xmx1024m test13 > test13.str.actual 2>&1

diff test13.str.expected test13.str.actual || (echo "Result not expected; test failed"; exit 1)
