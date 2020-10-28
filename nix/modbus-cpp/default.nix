{ pkgs ? import ../nixpkgs.nix {}
, exe4cpp ? import ../exe4cpp/default.nix {}
, ser4cpp ? import ../ser4cpp/default.nix {}
}:

pkgs.callPackage({ stdenv, lib, fetchgit, cmake, openssl, asio, ser4cpp, exe4cpp, spdlog, catch2, trompeloeil }:

  stdenv.mkDerivation rec {
    pname = "modbus-cpp";
    version = "1.0";

    src = builtins.fetchGit {
      url = "ssh://git@github.com/openenergysolutions/modbus-cpp.git";
      rev = "4287a7fa582c0e91deb930abdb24f170720643db";
    };

    cmakeFlags = [ "-DMODBUS_VENDORED_DEPS=OFF" ];

    nativeBuildInputs = [ cmake ];
    buildInputs = [ openssl asio ser4cpp exe4cpp spdlog catch2 trompeloeil];
  }
) { exe4cpp = exe4cpp; ser4cpp = ser4cpp; }
