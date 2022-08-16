# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ./nixpkgs.nix, system ? builtins.currentSystem }:

let
  callPackage = pkgs.lib.callPackageWith ( pkgs // pkgs.xlibs // self );

  self = {
    argagg = callPackage ./argagg/default.nix { };  
    cppcodec = callPackage ./cppcodec/default.nix { };  
    exe4cpp = callPackage ./exe4cpp/default.nix { };
    libnats-c = callPackage ./libnats-c/default.nix { };
    libpq = callPackage ./libpq/default.nix { };
    libyaml-cpp = callPackage ./libyaml-cpp/default.nix { };
    log4cpp = callPackage ./log4cpp/default.nix { };
    modbus-cpp = callPackage ./modbus-cpp/default.nix { };
    #goose-cpp = callPackage ./modbus-cpp.nix { };
    opendnp3 = callPackage ./opendnp3/default.nix { };
    paho-mqtt-c = callPackage ./paho-mqtt-c/default.nix { };
    paho-mqtt-cpp = callPackage ./paho-mqtt-cpp/default.nix { };
    ser4cpp = callPackage ./ser4cpp/default.nix { };
    #zenoh-c = callPackage ./zenoh-c/default.nix { };
  };
in
self
