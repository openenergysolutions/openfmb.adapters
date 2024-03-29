# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:

pkgs.callPackage({ stdenv, lib, fetchurl, cmake, openssl, ... }:
  stdenv.mkDerivation rec {
    pname = "paho-mqtt-c";
    version = "1.3.1";
  
    src = fetchurl {
      url = "https://github.com/eclipse/paho.mqtt.c/archive/v${version}.tar.gz";
      sha256 = "0pm599w3dn9700v1gg97157gmaqnigr0v70k54v63wrxmrkfskkv";
    };
  
    cmakeFlags = [ "-DPAHO_WITH_SSL=ON" "-DPAHO_BUILD_STATIC=ON"];
    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl ];

    outputs = ["dev" "out"];
  }
) {}
