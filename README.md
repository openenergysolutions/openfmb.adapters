<!--
SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc

SPDX-License-Identifier: Apache-2.0
-->

# openfmb.adapters

Adapter that converts legacy protocols to OpenFMB messages over various
transports.

# Cloning

Clone the repository with the "--recursive" option to automatically obtain
submodule dependencies

```
> git clone --recursive https://github.com/openenergysolutions/openfmb.adapters.git
```

If developing, directly clone from the develop branch:

```
> git clone --branch develop --recursive https://github.com/openenergysolutions/openfmb.adapters.git
```

# Building

The openfmb.adapters project uses cmake to locate dependencies, determine
which plugins are built into the binary, and generate the appropriate files
for the build tool (ninja, make, visual studio).

This requires that the dependencies be in a place where CMake is looking.

To do this in a highly repeatable way, with cross compiling support, Nix is
the preferred way.

## Building Docker Images with Nix

Simply building docker images may be done at any time, for all supported architectures
by running

``` sh
nix build all.nix
```

This produces several static links to .tar.gz files holding docker images in the
current director. To see what they link to 

``` sh
ls -alh default*
```

This should give you a good sense of which architecture each docker image
is for.


## Building local executable

To build only the project itself and get a non-portable executable which
depends on the local /nix repository.

``` sh
nix build
cd default
./openfmb.adapters --help
```

Notably this executable *cannot* simply be copied as its not fully statically
linked. This may change in the future.

# Developing

To obtain a bash shell with nix and all required dependencies
which you can build the project from is very simple with nix.

``` sh
nix-shell --pure
mkdir build
cd build
cmake -GNinja ..
ninja
```

Please note the --pure argument to nix-shell removes your local machine
paths so your local tooling is unavailable in this shell. You can create
a custom developer shell for yourself using the instructions here
https://nixos.wiki/wiki/Development_environment_with_nix-shell

## Codegen

Running the Java code generator is required when there are protobuf file
changes. It requires java and maven be installed.

In the codegen directory

``` sh
mvn compile
mvn exec:java -Dexec.mainClass="com.oes.openfmb.Main
```

## RTI DDS

To compile the RTI DDS plugin, an installation of the 6.0.0 version of RTI
library must be installed on the system. It can be found
[here](http://www.rti.com/downloads/connext-files.html).

You can also specify the following variables to help CMake find the
installation:

- `CONNEXTDDS_DIR`: "D:/Desktop/rti-dds-libs"
- `CONNEXTDDS_ARCH`: "x64Win64VS2017"

# CMake

Inside the `build` directory, run `cmake` to create a build file for your
platform, optionally disabling
components:

```
> cmake .. <options>
```

Plugins can be optionally enabled or disabled:

- `-DOPENFMB_USE_DNP3={OFF|ON}`
- `-DOPENFMB_USE_TWINOAKS_DDS={OFF|ON}`  (off by default)
- `-DOPENFMB_USE_RTI_DDS={OFF|ON}`  (off by default)
- `-DOPENFMB_USE_MODBUS={OFF|ON}`
- `-DOPENFMB_USE_GOOSE={OFF|ON}` (off by default, not a complete goose implementation)
- `-DOPENFMB_USE_NATS={OFF|ON}`
- `-DOPENFMB_USE_TWINOAKS_DDS={OFF|ON}`
- `-DOPENFMB_USE_TIMESCALEDB={OFF|ON}`

You can then run your build using the build file created by cmake

# Docker

Docker builds for various distributions and architectures can be found in [this
repo](https://github.com/openenergysolutions/openfmb.adapters).
