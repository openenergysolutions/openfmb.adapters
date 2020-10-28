{ pkgs ? import ../nixpkgs.nix {} }:

# based on the conan recipe for libpq

pkgs.callPackage({ stdenv, lib, fetchgit, openssl, zlib, perl, bison, flex, tzdata }:
  stdenv.mkDerivation rec {
    pname = "libpq";
    version = "12.5";
  
    src = fetchgit {
      url = "https://git.postgresql.org/git/postgresql.git";
      rev = "6bb1b38fa5388a4aa39ed9e56ef477f618fb28e1"; # REL_12_5
      sha256 = "0vcjm2yvdqnsxmj675rfbsh5awzb7bi3rm93ydy0230rg4zr7jc8";
    };

    configureFlags = [
      "--with-openssl"
      "--without-readline"
      "--with-system-tzdata=${tzdata}/share/zoneinfo"
    ];
    nativeBuildInputs = [ perl bison flex tzdata ];
    buildInputs = [ openssl zlib ];
    buildPhase = ''
      runHook preBuild

      make -C src/backend generated-headers
      make -C src/common
      make -C src/port
      make -C src/fe_utils
      make -C src/include
      make -C src/interfaces/libpq
      make -C src/bin/pg_config

      runHook postBuild
    '';

    installPhase = ''
      runHook preInstall

      make -C src/common install
      make -C src/port install
      make -C src/fe_utils install

      make -C src/include install
      make -C src/interfaces/libpq install
      make -C src/bin/pg_config install
      mkdir -p $dev/{bin,lib}
      mv $out/bin/pg_config $dev/bin/pg_config
      rm -rf $out/lib/*.a
      #mv $out/lib/*.a $dev/lib/
      rm -rf $out/include/postgresql/server
      rm -rf $out/bin
      rm -rf $out/share
      
      runHook postInstall
    '';
    # TODO copy include/catalog
    # TODO rmdir include/postgresql/server
    # TODO rmdir share

    outputs = ["out" "dev"];
  }
) {}
