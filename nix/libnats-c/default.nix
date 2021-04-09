# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:


pkgs.callPackage({ stdenv, lib, fetchurl, cmake, openssl }:
  stdenv.mkDerivation rec {
    pname = "libnats-c";
    version = "2.3.0";
  
    src = fetchurl {
      url = "https://github.com/nats-io/nats.c/archive/v${version}.tar.gz";
      sha256 = "08jhf9qq20hbfqv3c6cswgvsdwb1n5kflkw3k2djyjaw9y0f6l92";
    };
  
    cmakeFlags = [ "-DNATS_BUILD_TLS_USE_OPENSSL_1_1_API=ON" "-DNATS_BUILD_STREAMING=OFF" ];
    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl ];

    outputs = ["dev" "out"];
  }
) {}
