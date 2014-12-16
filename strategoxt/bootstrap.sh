#!/usr/bin/env bash

set -eu

mvn clean install -f bootstrap-pom.xml
mvn clean install -f buildpoms/pom.xml -Dstrategoxt-skip-build="true"

echo "Build output located at..."
echo "StrategoXT distribution bootstrap 1: buildpoms/bootstrap1/target"
echo "StrategoXT distribution bootstrap 2: buildpoms/bootstrap2/target"
echo "StrategoXT distribution bootstrap 3: buildpoms/bootstrap3/target"
echo "StrategoXT minified JAR: buildpoms/minjar/target"
