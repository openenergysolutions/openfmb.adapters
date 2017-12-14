# openfmb.adapters

WIP adapter that converts legacy protocols to OpenFMB messages over various tranports.

# required dependencies

* [spdlog](https://github.com/gabime/spdlog) - MIT License, header-only (git-submodule)
* [protobuf](https://github.com/google/protobuf) - BSD-style license, must be installed (runtime library + compiler)

# optional dependencies

The following dependencies can optionally be disabled

* [opendnp3](https://github.com/automatak/dnp3) - Apache v2 License, must be pre-installed on system
* [twinoaks core dx](http://www.twinoakscomputing.com/coredx) - Proprietary DDS runtime requiring a commercial license

# building

clone the repository with the "--recursive" option to automatically obtain submodule dependencies

```
> git clone --recursive https://github.com/openenergysolutions/openfmb.adapters.git
```
Run *cmake* to create a build file for your platform, optionally disabling components:

```
> mkdir build; cd build
> cmake .. <options>
```
Options include:
* **-DOPENFMB_USE_DNP3=OFF** - Don't build support for DNP3
* **-DOPENFMB_USE_TWINOAKS_DDS=OFF** - Don't build support for TwinOaks DDS

You can then run your build using the build file created by cmake
