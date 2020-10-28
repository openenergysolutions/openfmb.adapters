{ pkgs ? import ../nixpkgs.nix {}
, paho-mqtt-c ? import ../paho-mqtt-c/default.nix {} 
}:

pkgs.callPackage({ stdenv, lib, fetchurl, cmake, openssl, paho-mqtt-c }:
  stdenv.mkDerivation rec {
    pname = "paho-mqtt-cpp";
    version = "1.1";
  
    src = fetchurl {
      url = "https://github.com/eclipse/paho.mqtt.cpp/archive/v${version}.tar.gz";
      sha256 = "1ghbnx60345hdf45fpim7l6p6nj3346qdbkn1qfza7nrkqs460yb";
    };
  
    cmakeFlags = [ "-DPAHO_BUILD_STATIC=TRUE" "-DPAHO_BUILD_SHARED=FALSE" ];
    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl paho-mqtt-c ];
    outputs = ["dev" "out"];
  }
) { paho-mqtt-c = paho-mqtt-c; }
