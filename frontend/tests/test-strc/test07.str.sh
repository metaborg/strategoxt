#!/bin/sh

${STRC} -i test07.str -Xlinker -lstratego-lib || exit 1

./test07 || exit 1 
