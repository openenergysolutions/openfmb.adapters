# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{pkgs ? import ../nixpkgs.nix {} }:

pkgs.callPackage({ stdenv, lib, fetchFromGitHub, cmake }:
  stdenv.mkDerivation rec {
    name = "exe4cpp";
  
    src = fetchFromGitHub{
      repo = name;
      owner = "openenergysolutions";
      rev = "17599be72ee3d8bd0107d09b628e211d81d14eb5";
      sha256 = "02l2nmz38l2893b21lnkdd83fa6q1nwygvr5bf3aiab51z82lhpx";
    };
  
    nativeBuildInputs = [ cmake ];
  
    doCheck = true;
  }
) {}
