{pkgs ? import ../nixpkgs.nix {} }:

pkgs.callPackage({ stdenv, lib, fetchFromGitHub, cmake }:

  stdenv.mkDerivation rec {
    name = "log4cpp";
  
    src = fetchFromGitHub{
      repo = name;
      owner = "openenergysolutions";
      rev = "96c716b0d3b4d6921df4bb77d7749aaaeee19dfe";
      sha256 = "1381364x3y3x27232kaaq4j9mlwax4zixgz1brdnvj603g6v99qv";
    };
  
    nativeBuildInputs = [ cmake ];
  
    doCheck = true;
  }
) {}
