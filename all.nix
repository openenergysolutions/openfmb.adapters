# builds all the docker images for our target arch's in a single go
let docker = import ./docker.nix;
  x86_64-musl = docker { target = "x86_64-unknown-linux-musl"; };
  armv7-musl = docker { target = "armv7l-unknown-linux-musleabihf"; };
  aarch64-musl = docker { target = "aarch64-unknown-linux-musl"; };
in {
  x86-64-musl-adapter = x86_64-musl.adapter;
  x86-64-musl-image = x86_64-musl.image;
  armv7-musl-adapter = armv7-musl.adapter;
  armv7-musl-image = armv7-musl.image;
  aarch64-musl-adapter = aarch64-musl.adapter;
  aarch64-musl-image = aarch64-musl.image;
}
