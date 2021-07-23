# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ pkgs ? import ../nixpkgs.nix {} }:


pkgs.callPackage({ lib, stdenv, fetchFromGitHub, cmake }:
  stdenv.mkDerivation rec {
    pname = "libyaml-cpp";
    version = "0.6.4";
  
    src = fetchFromGitHub {
      owner = "jbeder";
      repo = "yaml-cpp";
      rev = "98acc5a8874faab28b82c28936f4b400b389f5d6";
      sha256 = "16rjf00pma6nnyd6az4cvggmzy40jkjv143qf7yk53ld4i2sih7w";
    };
  
    # implement https://github.com/jbeder/yaml-cpp/commit/52a1378e48e15d42a0b755af7146394c6eff998c
    postPatch = ''
      substituteInPlace CMakeLists.txt \
        --replace 'DESTINATION "''${CMAKE_INSTALL_DATADIR}/cmake/yaml-cpp")' \
                  'DESTINATION "''${CMAKE_INSTALL_LIBDIR}/cmake/yaml-cpp")'
    '';
  
    nativeBuildInputs = [ cmake ];
  
    cmakeFlags = [ "-DBUILD_SHARED_LIBS=ON" "-DYAML_CPP_BUILD_TESTS=OFF"];
  
    outputs = ["dev" "out"];
  
    meta = with lib; {
      inherit (src.meta) homepage;
      description = "A YAML parser and emitter for C++";
      license = licenses.mit;
      platforms = platforms.unix;
      maintainers = with maintainers; [ andir ];
    };
  }
) {}
