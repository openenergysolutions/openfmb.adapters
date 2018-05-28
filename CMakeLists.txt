cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

if(NOT EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  message(FATAL_ERROR "Unable to locate 'conanbuildinfo.cmake' file. Make sure to run 'conan install ..' in the build directory.")
else()
  include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  conan_basic_setup(TARGETS NO_OUTPUT_DIRS)
endif()

# optionally disable certain plugins
option(OPENFMB_USE_DNP3 "Build the DNP3 plugin" ON)
option(OPENFMB_USE_MODBUS "Build the Modbus plugin" ON)
option(OPENFMB_USE_NATS "Build the NATS plugin" ON)
option(OPENFMB_USE_TWINOAKS_DDS "Build the Twin Oaks DDS plugin" OFF)
option(OPENFMB_USE_TIMESCALEDB "Build the historian using TimescaleDB" ON)
option(OPENFMB_LINK_STATIC "Link dependencies statically where possible" OFF)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

# Protobuf C++ objects, used by adapter-api and transitively by all plugins
add_subdirectory(./proto-api)

# API used by the plugins / application
add_subdirectory(./adapter-api)

# plugin that logs published messages
add_subdirectory(./plugins/log)

# plugin that can capture published messages to replayable format
add_subdirectory(./plugins/capture)

# plugin that can replay the capture format above
add_subdirectory(./plugins/replay)

if(OPENFMB_USE_DNP3)
  add_subdirectory(./plugins/dnp3)
endif()

if(OPENFMB_USE_MODBUS)
  add_subdirectory(./deps/modbus)
  add_subdirectory(./plugins/modbus)
endif()

if(OPENFMB_USE_TWINOAKS_DDS)
  add_subdirectory(./plugins/dds/twinoaks)
  add_subdirectory(./plugins/dds/twinoaks/test)
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

add_custom_target(
        format
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND astyle ${CPP_FORMAT_DIRS} --options=./astyle.cfg
)
