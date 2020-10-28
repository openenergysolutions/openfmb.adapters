{ pkgs ? (import ./nix/nixpkgs.nix {}) }:

let deps = import ./nix/packages.nix { 
  pkgs = pkgs;
};
gitignoreSrc = pkgs.fetchFromGitHub {
    owner = "hercules-ci";
    repo = "gitignore";
    # put the latest commit sha of gitignore Nix library here:
    rev = "c4662e662462e7bf3c2a968483478a665d00e717";
    # use what nix suggests in the mismatch message here:
    sha256 = "sha256:1npnx0h6bd0d7ql93ka7azhj40zgjp815fw2r6smg8ch9p7mzdlx";
  };
  inherit (import gitignoreSrc { inherit (pkgs) lib; }) gitignoreSource;
in
pkgs.callPackage ({cmake, protobuf3_6, openssl, libpcap, boost166, asio, spdlog, catch2, deps }: pkgs.stdenv.mkDerivation {
  pname = "adapter";
  version = "2.1";
  src = if pkgs.lib.inNixShell then null else gitignoreSource ./.;
  cmakeFlags = [ "-DOPENFMB_USE_CONAN=OFF" "-DOPENFMB_USE_GOOSE=OFF" "-DCMAKE_BUILD_TYPE=Release"];

  nativeBuildInputs = [
    cmake
    protobuf3_6
  ];

  buildInputs = [
    openssl
    protobuf3_6 # waiting on a fix for https://github.com/NixOS/nixpkgs/issues/76873 to avoid this and use the static version
    libpcap
    (pkgs.boost166.override { enableStatic = true; })
    asio
    spdlog
    catch2
    deps.libnats-c
    deps.libpq
    deps.libyamlcpp
    deps.argagg
    deps.cppcodec
    deps.exe4cpp
    deps.log4cpp
    deps.modbus-cpp
    deps.opendnp3
    deps.paho-mqtt-c
    deps.paho-mqtt-cpp
    deps.ser4cpp
  ];

  stripAllList = ["bin"];
}) { deps = deps; }
