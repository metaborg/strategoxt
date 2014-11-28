#!/usr/bin/env bash

set -eu

BASELINE_VERSION="1.3.0"
OUTPUT_VERSION="1.3.0-SNAPSHOT"

mvn clean install -Dstrategoxt-baseline-version=$BASELINE_VERSION -Dstrategoxt-output-version=$OUTPUT_VERSION -Dstrategoxt-output-location=target
