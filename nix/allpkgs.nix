# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ./nixpkgs.nix{} }:

import ./packages.nix { pkgs = pkgs; } // pkgs
