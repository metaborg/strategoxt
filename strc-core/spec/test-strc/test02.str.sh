#!/bin/sh

${STRC} -i test02.str -Cl liblib || exit 1

./test02 || exit 1 
