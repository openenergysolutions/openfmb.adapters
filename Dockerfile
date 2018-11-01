FROM alpine:3.7 as builder

# System dependencies
RUN apk update && apk add --no-cache \
    build-base \
    cmake \
    git \
    libpcap-dev \
    libressl-dev \
    linux-headers \
    postgresql-dev \
    protobuf-dev \
    python3-dev

# Install OpenDNP3
WORKDIR /home
RUN git clone --depth 1 --single-branch --recursive --shallow-submodules -b 2.2.0 https://github.com/automatak/dnp3.git
WORKDIR /home/dnp3
RUN cmake -DCMAKE_BUILD_TYPE=Release -DSTATICLIBS=ON . && cmake --build . --target install

# Install CNATS
WORKDIR /home
RUN git clone --depth 1 --single-branch -b v1.7.6 https://github.com/nats-io/cnats.git
WORKDIR /home/cnats
RUN cmake -DCMAKE_BUILD_TYPE=Release . && cmake --build . --target install

# Setup conan
RUN pip3 install conan && \
    conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan && \
    conan profile new ~/.conan/profiles/default --detect && \
    conan profile update settings.compiler.libcxx=libstdc++11 default

# Install conan dependencies
COPY conanfile.txt /home/openfmb/
WORKDIR /home/openfmb
RUN conan install .

# Build the project
COPY . /home/openfmb/
RUN cmake -DCMAKE_BUILD_TYPE=Release -DOPENFMB_LINK_STATIC=ON . && cmake --build .

# Build running image
FROM alpine:3.7
RUN apk update && apk add --no-cache \
    libpq \
    libpcap \
    libressl \
    libstdc++
COPY --from=builder /home/openfmb/application/openfmb-adapter /usr/local/bin/
WORKDIR /openfmb
ENTRYPOINT ["openfmb-adapter"]
