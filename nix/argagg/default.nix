# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:

pkgs.callPackage({ stdenv, fetchFromGitHub, cmake, ... }:
    
  stdenv.mkDerivation rec {
    pname = "argagg";
    version = "0.4.6";
  
    src = fetchFromGitHub {
      repo = pname;
      owner = "vietjtnguyen";
      rev = "4c8c86180cfafb1448f583ed0973da8c2f559dd6";
      sha256 = "12kb9rdh1ngn4qhzxc20kv2rl1kjwpn1y21ggmh9lx7hyw06aarh";
    };
  
    cmakeFlags = [ "-DARGAGG_TEST_COMPILE_FLAGS="];
    nativeBuildInputs = [ cmake ];
  }
) {}
