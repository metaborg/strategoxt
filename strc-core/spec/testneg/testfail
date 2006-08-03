#!/bin/sh

INPUT=${0%.str.sh}

rm -f ${INPUT}.o ${INPUT}.c ${INPUT}.ac ${INPUT}.s[0-9]* ${INPUT}.f* ${INPUT}.c.abox \
  ${INPUT}.tree ${INPUT}.mtree ${INPUT}.rtree ${INPUT}.txt ${INPUT}.s5fused ${INPUT}.dep ${INPUT}.out

if ! make ${INPUT}.c; then
  echo " ** RESULT $0: stratego compilation failed, which is ok"
  exit 0
fi

if grep "^$INPUT\$" ./accept-success.list > /dev/null; then
  echo " ** RESULT $0: stratego compilation succeeded, which is not ok, but accepted for now"
  exit 0
fi

echo " ** RESULT $0: stratego compilation succeeded, which is not ok"

exit 1
