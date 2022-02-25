# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:


pkgs.callPackage({ stdenv, lib, fetchurl, cmake, openssl }:
  stdenv.mkDerivation rec {
    pname = "libnats-c";
    version = "2.6.0";

    src = fetchurl {
      url = "https://github.com/nats-io/nats.c/archive/v${version}.tar.gz";
      sha256 = "sha256-wrWl5i373LEQ8AlgxBOrbo7wndcYY8Fcn4GqWY3NM50=";
    };

    cmakeFlags = [ "-DNATS_BUILD_TLS_USE_OPENSSL_1_1_API=ON" "-DNATS_BUILD_STREAMING=OFF" ];
    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl ];

    outputs = ["dev" "out"];
  }
) {}
