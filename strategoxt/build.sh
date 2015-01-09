#!/usr/bin/env bash

set -eu

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

mvn clean install -f "$DIR/build-pom.xml"
mvn clean install -f "$DIR/buildpoms/pom.xml" -Dstrategoxt-skip-build="true"

echo "Build output located at..."
echo "StrategoXT distribution: $DIR/buildpoms/build/target"
echo "StrategoXT minified JAR: $DIR/buildpoms/minjar/target"
