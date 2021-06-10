# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

import (builtins.fetchTarball {
  # Descriptive name to make the store path easier to identify
  name = "nixos-21.05-oes";
  # Commit hash for nixos-21.05
  # cherry picked patch to shrink musl dockers on top of nixos-21.05 on 2021-05-03
  # with patches applied to reduce gcc+musl closure sizes
  url = "https://github.com/openenergysolutions/nixpkgs/archive/baa8d3e4477a7a05bebe13f7c5aec971e5cca657.tar.gz";
  # Hash obtained using `nix-prefetch-url --unpack <url>`
  sha256 = "0svxrhws5qrj3h9d5w652cy9pm66isr9cjv37davb76xyiq270l3";
})
