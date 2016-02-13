#! /bin/sh

FAIL=0
PASS=0
REPORT=""
IFS=''

incfail() {
  FAIL=$(($FAIL+1))
}

incpass() {
  PASS=$(($PASS+1))
}

appendreport() {
  REPORT="$REPORT\n$line"
}

testsuccess() {
  ${PARSE_UNIT} -i $suite.testsuite -p Exp.tbl --verbose $VERBOSE
  if test $? -eq 1; then
    incfail
    line="* FAIL: testsuite $suite failed (should succeed)" appendreport
  else
    incpass
    line="* PASS: testsuite $suite succeeded (and should succeed)" appendreport
  fi
}

testfail() {
  ${PARSE_UNIT} -i $suite.testsuite -p Exp.tbl --verbose $VERBOSE
  if test $? -eq 0; then
    incfail
    line="* FAIL: testsuite $suite succeeded (should fail)" appendreport
  else
    incpass
    line="* PASS: testsuite $suite failed (and should fail)" appendreport
  fi  
}

suite=failure-1      testfail
suite=failure-2      testfail
suite=failure-3      testfail
suite=failure-4      testfail
suite=failure-5      testfail
suite=failure-6      testfail
suite=larger-failure testfail
suite=success        testsuccess
suite=success-2      testsuccess

echo "===================================================================="
echo "                        Parse-unit checks                           "
echo "===================================================================="
echo -e "$REPORT"
echo ""
echo "===================================================================="
echo "FAIL: $FAIL"
echo "PASS: $PASS"
echo "===================================================================="
if test $FAIL != "0"; then
  exit 1
else
  exit 0
fi
