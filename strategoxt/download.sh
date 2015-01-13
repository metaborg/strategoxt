#!/usr/bin/env bash

set -eu

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

mvn -f "$DIR/download-pom.xml" dependency:resolve