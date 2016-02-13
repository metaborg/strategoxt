#!/bin/sh

java -jar ${STRJ} -i test50.str -la stratego-lib || exit 1 

(javac -cp ${STRJ} test50.java && exit 1 )|| exit 0 

