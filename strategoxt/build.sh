#!/usr/bin/env bash

set -eu


# Parse input
while getopts ":da:t" opt; do
  case $opt in
    d)
      INPUT_MAVEN_PHASE="deploy"
      ;;
    a)
      INPUT_MAVEN_ARGS=$OPTARG
      ;;
    t)
      INPUT_SKIP_TESTS="true"
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
      exit 1
      ;;
    :)
      echo "Option -$OPTARG requires an argument." >&2
      exit 2
      ;;
  esac
done


# Set build vars
MAVEN_ARGS=${INPUT_MAVEN_ARGS:-""}
MAVEN_PHASE=${INPUT_MAVEN_PHASE:-"install"}

SKIP_TESTS=${INPUT_SKIP_TESTS:-"false"}

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

export MAVEN_OPTS=-Xmx2048m
export ANT_OPTS=-Xmx2048m

# Run Maven builds
mvn \
  -f "$DIR/build-pom.xml" \
  -Dstrategoxt-skip-test="$SKIP_TESTS" \
  clean \
  $MAVEN_PHASE \
  $MAVEN_ARGS

mvn \
  -f "$DIR/buildpoms/pom.xml" \
  -Dstrategoxt-skip-build="true" \
  clean \
  $MAVEN_PHASE \
  $MAVEN_ARGS


echo "Build output located at..."
echo "StrategoXT distribution: $DIR/buildpoms/build/target"
echo "StrategoXT minified JAR: $DIR/buildpoms/minjar/target"
