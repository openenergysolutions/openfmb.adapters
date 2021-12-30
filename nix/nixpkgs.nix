# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

import (builtins.fetchTarball {
  # Descriptive name to make the store path easier to identify
  name = "nixos-21.11-oes";
  # Commit hash for nixos-21.11
  # cherry picked patch to shrink musl dockers on top of nixos-21.11 on 2021-12-10
  # with patches applied to reduce gcc+musl closure sizes
  url = "https://github.com/openenergysolutions/nixpkgs/archive/e602dd33fbed0e68d9b5e1242594ff13724f57af.tar.gz";
  # Hash obtained using `nix-prefetch-url --unpack <url>`
  sha256 = "0740j23kz9dr4ci35gb7pk5k5cvkx2iwh88dc6bgdr9z3y3n88qv";
})
