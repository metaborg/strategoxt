#!/usr/bin/env bash

set -eu

BASELINE_VERSION="1.3.0"
OUTPUT_VERSION="1.3.0-SNAPSHOT"
BOOTSTRAP1_VERSION="1.3.0-bootstrap1-SNAPSHOT"
BOOTSTRAP2_VERSION="1.3.0-bootstrap2-SNAPSHOT"

mvn clean install -Dstrategoxt-baseline-version=$BASELINE_VERSION   -Dstrategoxt-output-version=$BOOTSTRAP1_VERSION -Dstrategoxt-output-location=bootstrap1
mvn clean install -Dstrategoxt-baseline-version=$BOOTSTRAP1_VERSION -Dstrategoxt-output-version=$BOOTSTRAP2_VERSION -Dstrategoxt-output-location=bootstrap2
mvn clean install -Dstrategoxt-baseline-version=$BOOTSTRAP2_VERSION -Dstrategoxt-output-version=$OUTPUT_VERSION     -Dstrategoxt-output-location=target
