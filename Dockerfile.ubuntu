FROM ubuntu:18.04 as builder

# System dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    python3 \
    python3-pip \
    libssl-dev \
    libpq-dev \
    postgresql-server-dev-10

# Install OpenDNP3
WORKDIR /home
RUN git clone --depth 1 --single-branch --recursive --shallow-submodules -b 2.2.0 https://github.com/automatak/dnp3.git
WORKDIR /home/dnp3
RUN cmake -DSTATICLIBS=ON . && cmake --build . --target install

# Install CNATS
WORKDIR /home
RUN git clone --depth 1 --single-branch -b v1.7.6 https://github.com/nats-io/cnats.git
WORKDIR /home/cnats
RUN cmake . && cmake --build . --target install

# Setup conan
RUN pip3 install conan && \
    conan remote remove conan-center && \
    conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan && \
    conan remote add conan-center https://api.bintray.com/conan/conan/conan-center && \
    conan profile new ~/.conan/profiles/default --detect && \
    conan profile update settings.compiler.libcxx=libstdc++11 default

# Install conan dependencies
COPY conanfile.txt /home/openfmb/
WORKDIR /home/openfmb
RUN conan install .

# Build the project
COPY . /home/openfmb/
RUN cmake -DOPENFMB_LINK_STATIC=ON . && cmake --build .

# Build running image
FROM ubuntu:18.04
RUN apt-get update && apt-get install -y \
    libpq5 \
    libssl1.1
COPY --from=builder /home/openfmb/application/openfmb-adapter /usr/local/bin/
WORKDIR /openfmb
ENTRYPOINT ["openfmb-adapter"]
