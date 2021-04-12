#!/bin/sh

# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

$DIR/list_deps.sh | xargs nix-env -qa --meta --json -f $DIR/../nix/allpkgs.nix
