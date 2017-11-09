cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

include("cmake/coredx.cmake")

# DDS adapter based on Twin Oaks library
add_subdirectory(./adapter-api)
add_subdirectory(./adapters/dds/twinoaks)


