# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:
pkgs.callPackage({ lib, stdenv, fetchFromGitHub, rustPlatform, targetPlatform, ... }:
let
  cpu = lib.debug.traceVal (targetPlatform.parsed.cpu.name);
  libc = lib.debug.traceVal (targetPlatform.parsed.abi.name);
  target = lib.debug.traceVal (if cpu == "armv7l" && libc == "musleabihf" then "armv7-unknown-linux-musleabihf" else targetPlatform.config );
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
    version = "0.5.0";
    
    src = fetchFromGitHub {
      repo = pname;
      owner = "bfrog";
      rev = "dab6364df7330869e211d33b0683fc8610295ce9";
      sha256 = "0jnib2dqnjgi30rm1ysvivqfyxw8wirdi69snj03j6w3kdywvicr";
    };

    # needed for ring and zenoh (makefile uses target env var)
    TARGET = target;
    TARGET_AR = targetAr;
    TARGET_CC = targetCc;

    cargoSha256 = "1bxphla36v8d8l7998if5jlp4lg3q4xz2vymbbbapl9m5kkgz4l2";
    verifyCargoDeps = false;
    buildPhase = ''
      runHook preBuild
      PREFIX=$out make
      runHook postBuild
    '';
    installPhase = ''
      runHook preInstall
      PREFIX=$out make install 
      runHook postInstall
    '';
  }
) {}
