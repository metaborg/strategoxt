#!/bin/sh

${STRC} -i test02.str -Cl libstrategolib || exit 1

./test02 || exit 1 
