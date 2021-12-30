# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

{ target ? "x86_64-unknown-linux-gnu",  
  target-pkgs ? if target == "x86_64-unknown-linux-gnu" then (import ./nix/nixpkgs.nix { system = "x86_64-linux"; }) else (import ./nix/nixpkgs.nix { crossSystem = { config = target; }; }),
  host-pkgs ? import ./nix/nixpkgs.nix {},
  version ? host-pkgs.lib.commitIdFromGitRepo ./.git,
}:
let adapter = import ./default.nix { pkgs = target-pkgs; };
    cpu_arch = target-pkgs.targetPlatform.parsed.cpu.name;
    abi = target-pkgs.targetPlatform.parsed.abi.name;
    tag = "${cpu_arch}-${abi}-${version}";
in
{ image = host-pkgs.dockerTools.buildImage {
    name = "openfmb.adapter-${cpu_arch}-${abi}-${version}";
    tag = tag;
    contents = adapter;
    config.Entrypoint = ["/bin/openfmb-adapter"];
  };
  adapter = adapter;
}

