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

# Dependencies

## Building with Conan

The build defaults to using the [conan](https://conan.io/) package manager. This
greatly simplifies the build process on Windows.

You can install it using python pip:

```
> pip install conan
```

Edit your default Conan profile to tell it to explicitly use C++11 standard
library.

```
> conan profile new default --detect && conan profile update settings.compiler.libcxx=libstdc++11 default
```

Then, inside a `build` directory, install the dependencies:

```
> conan install .. --build=missing
```

This can take a long time the first time it runs on your system.

## Building without Conan

If you don't want to use Conan, you can configure CMake as follows:

```
> cmake -DOPENFMB_USE_CONAN=OFF
```

You'll have to use your system package manager to install boost / yaml-cpp /
libpcap / etc, or install these packages via manual builds.

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
- `-DOPENFMB_USE_GOOSE={OFF|ON}`
- `-DOPENFMB_USE_NATS={OFF|ON}`
- `-DOPENFMB_USE_TWINOAKS_DDS={OFF|ON}`
- `-DOPENFMB_USE_TIMESCALEDB={OFF|ON}`

You can then run your build using the build file created by cmake

# Docker

Docker builds for various distributions and architectures can be found in [this
repo](https://github.com/openenergysolutions/openfmb.adapters.docker).
