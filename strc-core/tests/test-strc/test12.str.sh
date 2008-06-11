#!/bin/sh

${STRC} -i "${SRCDIR}/test12.str" -o test12 --ld ${CC} || exit 1
