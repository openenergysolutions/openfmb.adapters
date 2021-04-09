# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:


pkgs.callPackage({ stdenv, lib, fetchFromGitHub, cmake, pkg-config, catch2 }:
  
  stdenv.mkDerivation rec {
    name = "cppcodec";
  
    src = fetchFromGitHub{
      repo = name;
      owner = "tplgy";
      rev = "bd6ddf95129e769b50ef63e0f558fa21364f3f65";
      sha256 = "0i1ldxp43qxcjig90n7b7h3l8fppshq769fns8scbhkngxa90hyl";
    };
  
    nativeBuildInputs = [ cmake ];
  
    doCheck = true;
    checkInputs = [ catch2 ];
  }
) {}
