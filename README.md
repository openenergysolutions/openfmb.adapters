# openfmb.adapters

Adapter that converts legacy protocols to OpenFMB messages over various transports.

# build requirements

The build uses the [conan](https://conan.io/) package manager.

You can install it using python pip:

```
> pip install conan
```

We use the [bincrafters](https://bincrafters.github.io/) repositories. You have to tell conan where to find the bincrafters repository.

```
> conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan
```

Edit your default conan profile to tell it to explicitly use C++11 standard library.

```
~/.conan/profiles/default
```

Change the line that reads `compiler.libcxx=libstdc++` to be `compiler.libcxx=libstdc++11`

# cloning

clone the repository with the "--recursive" option to automatically obtain submodule dependencies

```
> git clone --recursive https://github.com/openenergysolutions/openfmb.adapters.git
```

If developing, directly clone from the develop branch:

```
> git clone --branch develop --recursive https://github.com/openenergysolutions/openfmb.adapters.git
```

# cmake

Create a build directory, and then have conan check that all dependencies are installed:

```
> mkdir build; cd build
> conan install ..
```

Run *cmake* to create a build file for your platform, optionally disabling components:

```
> cmake .. <options>
```
Plugins can be optionally enabled or disabled:

* **-DOPENFMB_USE_DNP3={OFF|ON}
* **-DOPENFMB_USE_TWINOAKS_DDS={OFF|ON}  (off by default)
* **-DOPENFMB_USE_MODBUS={OFF|ON}
* **-DOPENFMB_USE_GOOSE={OFF|ON}
* **-DOPENFMB_USE_NATS={OFF|ON}
* **-DOPENFMB_USE_TWINOAKS_DDS={OFF|ON}
* **-DOPENFMB_USE_TIMESCALEDB={OFF|ON}

You can then run your build using the build file created by cmake

# Docker image
To generate a Docker image, run the following `docker build -t openfmb .` (this takes quite some time)

Afterwards, you will have access to a production-ready Docker image. To run it, follow these steps:
- `docker run -it --rm -v <PATH_TO_CONFIG_FILES>:/openfmb openfmb -g /openfmb/config.yaml` to generate the default config file.
- `docker run -it --rm -v <PATH_TO_CONFIG_FILES>:/openfmb openfmb -g /openfmb/<FILENAME>.yaml -p <PLUGIN> -f <PROFILE>` to generate profile configurations for the required plugins.
- Modify the `config.yaml` file and the required profiles.
- `docker run -d -v <PATH_TO_CONFIG_FILES>:/openfmb openfmb -c /openfmb/config.yaml` to run OpenFMB as a daemon.
