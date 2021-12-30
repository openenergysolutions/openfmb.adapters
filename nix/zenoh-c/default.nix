# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:
pkgs.callPackage({ lib, stdenv, fetchFromGitHub, rustPlatform, targetPlatform, ... }:
let
  cpu = lib.debug.traceVal (targetPlatform.parsed.cpu.name);
  libc = lib.debug.traceVal (targetPlatform.parsed.abi.name);
  target = lib.debug.traceVal (if cpu == "armv7l" then "armv7-unknown-linux-gnueabihf" else targetPlatform.config );
  targetPrefix = lib.debug.traceVal (targetPlatform.config + "-");
  targetAr = lib.debug.traceVal (targetPrefix + "ar");
  targetCc = lib.debug.traceVal (targetPrefix + "cc");
  # targetPlatform.parsed can be found in nixpkgs lib/systems/parse.nix to 
  # see the full set of possible enumerated parsed llvm triplets the target
  # platform can represent. We need to manually define some TARGET env vars
  # for zenoh as it uses them to do the work of cross compiling
  #target = if targetPlatform.config.cpu == "armv7l" && targetPlatform.config.abi == "musleabihf" then "armv7-unknown-linux-musleabihf" else targetPlatform.config;
in
  rustPlatform.buildRustPackage rec {
    #inherit targetEnvs;
    pname = "zenoh-c";
    version = "0.5.0-beta.9";
    
    src = fetchFromGitHub {
      repo = pname;
      owner = "openenergysolutions";
      rev = "7fc9ef0bb96ae754785dcd1b52578fc9b48638ab";
      sha256 = "15j4qwm01n3in7hg1a9yjplqck1q3hnpjbnhzqkablp4zs6vh1iw";
    };

    # needed for ring and zenoh (makefile uses target env var)
    TARGET = target;
    TARGET_AR = targetAr;
    TARGET_CC = targetCc;

    cargoSha256 = "mjjQbieuKxd4zvlOdsDuEsR8Cv8AsFz+Xxc/Lm+DhNM=";
    verifyCargoDeps = false;
    buildPhase = ''
      runHook preBuild
      PREFIX=$out make lib
      runHook postBuild
    '';
    installPhase = ''
      runHook preInstall
      PREFIX=$out make install 
      runHook postInstall
    '';
  }
) {}
