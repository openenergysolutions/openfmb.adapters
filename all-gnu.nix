# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

# builds all the docker images for our target arch's in a single go
let docker = import ./docker.nix;
  x86_64-gnu = docker { target = "x86_64-unknown-linux-gnu"; };
  armv7-gnu = docker { target = "armv7l-unknown-linux-gnueabihf"; };
  aarch64-gnu = docker { target = "aarch64-unknown-linux-gnu"; };
in {
  x86-64-gnu-adapter = x86_64-gnu.adapter;
  x86-64-gnu-image = x86_64-gnu.image;
  armv7-gnu-adapter = armv7-gnu.adapter;
  armv7-gnu-image = armv7-gnu.image;
  aarch64-gnu-adapter = aarch64-gnu.adapter;
  aarch64-gnu-image = aarch64-gnu.image;
}
