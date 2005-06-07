#!/bin/sh

${STRC} -i test03.str -la stratego-lib || exit 1

./test03 || exit 1 
