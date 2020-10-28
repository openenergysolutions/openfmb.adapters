{ target ? "x86_64-unknown-linux-musl",
  target-pkgs ? (import ./nix/nixpkgs.nix {
    crossSystem = {
      config = target;
    };
  }),
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
    config.Cmd = ["/bin/openfmb-adapter"];
  };
  adapter = adapter;
}

