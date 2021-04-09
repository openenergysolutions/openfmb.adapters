<!--
SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc

SPDX-License-Identifier: Apache-2.0
-->

# Nix for OpenFMB Adapter

This directory contains a number of nix (https://nixos.org) files and expressions that describe
how to build openfmb adapter dependencies in a cross compile friendly way.

Notably the nixpkgs.nix file sets a specific version of nixpkgs itself (https://github.com/nixos/nixpkgs)
which effectively locks in the nixpkgs versions. This can be updated and tested as
needed.
