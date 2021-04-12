#!/bin/sh

# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

drv="$( nix-instantiate default.nix )"
drvRefs="$( echo "$drv" | xargs nix-store -q --references )"
#( echo "$drvRefs" | grep '[.]drv$' | xargs nix-store -q --outputs ;
#  echo "$drvRefs" | grep -v '[.]drv$' ) |
#xargs nix-store -r | xargs nix-store -qR

depNames="$(echo "$drvRefs" | grep '[.]drv$' | xargs nix show-derivation | jq '.[] | .env.name' )"
echo "$depNames"

