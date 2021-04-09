# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {}
, exe4cpp ? import ../exe4cpp/default.nix {}
, ser4cpp ? import ../ser4cpp/default.nix {} 
}:


pkgs.callPackage({ stdenv, fetchFromGitHub, cmake, openssl, pkg-config, asio, exe4cpp, ser4cpp }:
  stdenv.mkDerivation rec {
    pname = "opendnp3";
    version = "3.1.0";
  
    src = fetchFromGitHub {
      repo = pname;
      owner = "openenergysolutions";
      rev = "5788b0a7238e70076cf0bba45aa8a2e813d194b1";
      sha256 = "0h4bgdnc7isvv2w4v4vpmmva547b9kw5wn9w940r8smhdr6f81y9";
    };
    
    cmakeFlags = [ "-DDNP3_STATIC_LIBS=ON" "-DDNP3_TLS=ON" ];
    nativeBuildInputs = [ cmake pkg-config ];
    buildInputs = [ openssl asio exe4cpp ser4cpp ];

  }
) { exe4cpp = exe4cpp; ser4cpp = ser4cpp; }
