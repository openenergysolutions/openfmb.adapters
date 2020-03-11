cmake_minimum_required (VERSION 3.12)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

option(OPENFMB_USE_CONAN "Use the conan package manager" ON)

if(OPENFMB_USE_CONAN)
  if(NOT EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    message(FATAL_ERROR "Unable to locate 'conanbuildinfo.cmake' file. Make sure to run 'conan install ..' in the build directory.")
  else()
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARGETS NO_OUTPUT_DIRS)
  endif()
else()
  message("Conan support is disabled")
endif()

if(MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -bigobj")
endif()

option(OPENFMB_NOTHING "Default to not building any plugins" OFF)

if(OPENFMB_NOTHING)
   set(BUILD_BY_DEFAULT OFF)
else()
   set(BUILD_BY_DEFAULT ON)
endif()

# optionally disable certain plugins
option(OPENFMB_USE_DNP3 "Build the DNP3 plugin" ${BUILD_BY_DEFAULT})
option(OPENFMB_USE_MODBUS "Build the Modbus plugin" ${BUILD_BY_DEFAULT})
option(OPENFMB_USE_GOOSE "Build the GOOSE plugin" ${BUILD_BY_DEFAULT})
option(OPENFMB_USE_MQTT "Build the MQTT plugin" ${BUILD_BY_DEFAULT})
option(OPENFMB_USE_NATS "Build the NATS plugin" ${BUILD_BY_DEFAULT})
option(OPENFMB_USE_TIMESCALEDB "Build the historian using TimescaleDB" ${BUILD_BY_DEFAULT})
# the proprietary plugins are always opt-in
option(OPENFMB_USE_TWINOAKS_DDS "Build the Twin Oaks DDS plugin" OFF)
option(OPENFMB_USE_RTI_DDS "Build the RTI DDS plugin" OFF)
option(OPENFMB_LINK_STATIC "Link dependencies statically where possible" OFF)

if(OPENFMB_LINK_STATIC AND NOT WIN32)
  set(BUILD_SHARED_LIBS OFF)
  #set(CMAKE_EXE_LINKER_FLAGS "-static") # --enable-static-nss
  set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
endif()

set(CMAKE_CXX_STANDARD 14)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

enable_testing()

# clang-tidy and clang-format
include(./cmake/ClangFormat.cmake)
include(./cmake/ClangTidy.cmake)

# External dependencies
include(./deps/asio.cmake)
include(./deps/catch.cmake)
include(./deps/exe4cpp.cmake)
include(./deps/log4cpp.cmake)
include(./deps/ser4cpp.cmake)
include(./deps/spdlog.cmake)

# Protobuf C++ objects, used by adapter-util and transitively by all plugins
add_subdirectory(./proto-api)

# Schema utility library
add_subdirectory(schema-util)

# API used by the plugins / application
add_subdirectory(./adapter-api)

# utility classes used to build the internals of plugins
add_subdirectory(./adapter-util)

# plugin that logs published messages
add_subdirectory(./plugins/log)

# plugin that can capture published messages to replayable format
add_subdirectory(./plugins/capture)

# plugin that can replay the capture format above
add_subdirectory(./plugins/replay)

if(OPENFMB_USE_DNP3)
  if(OPENFMB_LINK_STATIC)
    set(DNP3_STATIC_LIBS ON CACHE BOOL "build opendnp3 statically")
  endif()
  include(./deps/opendnp3.cmake)
  add_subdirectory(./plugins/dnp3)
endif()

if(OPENFMB_USE_MODBUS)
  include(./deps/modbus-cpp.cmake)
  add_subdirectory(./plugins/modbus)
endif()

if(OPENFMB_USE_GOOSE)
  include(./deps/goose-cpp.cmake)
  add_subdirectory(./plugins/goose)
endif()

if(OPENFMB_USE_TWINOAKS_DDS)
  add_subdirectory(./plugins/dds/twinoaks)
  add_subdirectory(./plugins/dds/twinoaks/test)
endif()

if(OPENFMB_USE_RTI_DDS)
  add_subdirectory(./plugins/dds/rti)
endif()

if(OPENFMB_USE_MQTT)
  add_subdirectory(plugins/mqtt-paho)
endif()

if(OPENFMB_USE_NATS)
  add_subdirectory(./plugins/nats)
endif()

if(OPENFMB_USE_TIMESCALEDB)
  add_subdirectory(./plugins/timescaledb)
endif()

# main application
add_subdirectory(./application)

# capture decoder
add_subdirectory(./util/decode-capture)

# Clang format
define_clang_format()
