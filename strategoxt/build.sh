#!/usr/bin/env bash

set -eu

mvn clean install -f build-pom.xml
mvn clean install -f buildpoms/pom.xml -Dstrategoxt-skip-build="true"
