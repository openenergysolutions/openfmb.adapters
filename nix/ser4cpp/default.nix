{ pkgs ? import ../nixpkgs.nix {} }:

pkgs.callPackage({ stdenv, lib, fetchFromGitHub, cmake }:
  stdenv.mkDerivation rec {
    name = "ser4cpp";
  
    src = fetchFromGitHub{
      repo = name;
      owner = "openenergysolutions";
      rev = "672854d02cfb377b578f1e3fcb16b5892e0d6b70";
      sha256 = "04yaxsrjyn129xspb5ch8m1x0za408dmm4qpznxi6ddqw47r7djj";
    };
  
    nativeBuildInputs = [ cmake ];
  
    doCheck = true;
  }
) {}
