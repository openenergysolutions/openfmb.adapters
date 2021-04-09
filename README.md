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

To build only the project itself and get an executable which
depends on the local /nix repository.

``` sh
nix build
./result/bin/openfmb-adapter --help
```

Rebuilding with nix is inefficient for development and a better method using
nix-shell is given below for incremental builds and development.

Also notable is that this executable *cannot* simply be copied from one
machine to another as its not fully statically linked. However it should be
portable on the same machine as the linked library paths are fixed to the nix
store located in /nix.

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

A sizeable portion of the C++ source code is generated from protobuf IDL files
to generate the mappings from each protocol. While code generation isn't needed
to build the project it is needed if the source OpenFMB schemas are changed or
if a new method for mapping a protocol is needed (for example adding support
for 128bit integers).

Running the Java code generator is required when there are protobuf file
changes. It requires java and maven be installed.

In the codegen directory

``` sh
mvn compile
mvn exec:java -Dexec.mainClass="com.oes.openfmb.Main
```

These generated files are committed to the repo for ease of building.

When regenerating the code note that the license header is *not* regenerated
and a script ./scripts/license_files.sh should be run to add the appropriate
header.

## RTI DDS

To compile the RTI DDS plugin, an installation of the 6.0.0 version of RTI
library must be installed on the system. It can be found
[here](http://www.rti.com/downloads/connext-files.html).

You can also specify the following variables to help CMake find the
installation:

- `CONNEXTDDS_DIR`: "D:/Desktop/rti-dds-libs"
- `CONNEXTDDS_ARCH`: "x64Win64VS2017"

# Docker Images

Docker images for several common cpu architectures can be found for each
commit in the actions tab. (https://github.com/openenergysolutions/openfmb.adapters).
