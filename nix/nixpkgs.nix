import (builtins.fetchTarball {
  # Descriptive name to make the store path easier to identify
  name = "nixos-20.09-oes";
  # Commit hash for nixos-20.09
  # Obtained from https://channels.nix.gsc.io/nixos-20.09/latest-v2
  # with patches applied to reduce gcc+musl closure sizes
  url = "https://github.com/openenergysolutions/nixpkgs/archive/d6e6908dbf37ae0ae131de2eeeb6985f26dbaaf7.tar.gz";
  # Hash obtained using `nix-prefetch-url --unpack <url>`
  sha256 = "0chclr5h4mxyxjj1r22jaqp0cwswrdg1fpymmgn2jryqsv7mjdky";
})
