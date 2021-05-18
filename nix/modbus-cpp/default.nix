# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {}
, exe4cpp ? import ../exe4cpp/default.nix {}
, ser4cpp ? import ../ser4cpp/default.nix {}
}:

pkgs.callPackage({ stdenv, lib, fetchFromGitHub, cmake, openssl, asio, ser4cpp, exe4cpp, spdlog, catch2, trompeloeil }:

  stdenv.mkDerivation rec {
    pname = "modbus-cpp";
    version = "1.0";

    src = fetchFromGitHub {
      repo = pname;
      owner = "openenergysolutions";
      rev = "4287a7fa582c0e91deb930abdb24f170720643db";
      sha256 = "06i3m7vd7nwma89lj4aaxjd82ya1z5p4v79mxahdnpp568r6c106";
    };

    cmakeFlags = [ "-DMODBUS_VENDORED_DEPS=OFF" ];

    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl asio ser4cpp exe4cpp spdlog catch2 trompeloeil];
  }
) { exe4cpp = exe4cpp; ser4cpp = ser4cpp; }
