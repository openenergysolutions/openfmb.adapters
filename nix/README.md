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

## Update NixPkgs

Periodically, usually when a bug or CVE is found in our dependencies here, nixpkgs should be updated to be the latest from upstream

This repo uses nixpkgs snapshots from https://github.com/openenergysolutions/nixpkgs with a small patch applied to reduce the size of docker images built against musl libc.

The branch name follows the release, so currently nixos-21.05-oes is the branch being used.

To update nixpkgs the nixpkgs repo should be pulled, our current branch checked out, and rebased on top of the latest upstream nixos release branch (ex: nixos-21.05).

That can then be force pushed up to our forked repo.

Afterwards the hashes in this repos nix/nixpkgs.nix file need to be updated to match the updated snapshot.

Finally the build should be ran locally on a reasonably fast machine and the cached artifacts uploaded to cachix

The one liner to do that is


``` sh
nix-store --query --references $(nix-instantiate all.nix) | xargs nix-store --realise | xargs nix-store --query --requisites | cachix push openenergysolutions
```
