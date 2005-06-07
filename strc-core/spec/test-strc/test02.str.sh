#!/bin/sh

${STRC} -i test02.str -Cl stratego-lib || exit 1

./test02 || exit 1 
