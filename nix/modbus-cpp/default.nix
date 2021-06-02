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
      rev = "52596d01c88c3568be4a11c67af4fff6c0a92442";
      sha256 = "0jvc9jg2xbsc1n351djnljsss269g1jl1jdghnhhx95jdn36rppy";
    };

    cmakeFlags = [ "-DMODBUS_VENDORED_DEPS=OFF" ];

    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl asio ser4cpp exe4cpp spdlog catch2 trompeloeil];
  }
) { exe4cpp = exe4cpp; ser4cpp = ser4cpp; }
