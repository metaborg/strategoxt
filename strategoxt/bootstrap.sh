#!/usr/bin/env bash

set -eu

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

mvn clean install -f "$DIR/bootstrap-pom.xml"
mvn clean install -f "$DIR/buildpoms/pom.xml" -Dstrategoxt-skip-build="true"

echo "Build output located at..."
echo "StrategoXT distribution bootstrap 1: $DIR/buildpoms/bootstrap1/target"
echo "StrategoXT distribution bootstrap 2: $DIR/buildpoms/bootstrap2/target"
echo "StrategoXT distribution bootstrap 3: $DIR/buildpoms/bootstrap3/target"
echo "StrategoXT minified JAR: $DIR/buildpoms/minjar/target"
