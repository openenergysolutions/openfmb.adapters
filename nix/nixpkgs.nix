# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

import (builtins.fetchTarball {
  # Descriptive name to make the store path easier to identify
  name = "nixos-20.09-oes";
  # Commit hash for nixos-20.09
  # Obtained from https://channels.nix.gsc.io/nixos-20.09/latest-v2
  # with patches applied to reduce gcc+musl closure sizes
  url = "https://github.com/openenergysolutions/nixpkgs/archive/54e518a43e8fb5ea7ecdc164f8c98bb40b2a7027.tar.gz";
  # Hash obtained using `nix-prefetch-url --unpack <url>`
  sha256 = "0g5ng0x82vhkr1f3bzszhjm98n6q5cy6dvj1bha55imrqi7r7v8w";
})
