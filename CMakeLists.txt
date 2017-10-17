cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

include("cmake/coredx.cmake")

# this is the library of dds profiles
add_subdirectory(./dds_types)

