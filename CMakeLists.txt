cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

#temporary hack
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# message("CMAKE_CXX_FLAGS is ${CMAKE_CXX_FLAGS}")


# API used by the adapters / application
add_subdirectory(./adapter-api)

# DNP3 adapter based on opendnp3
add_subdirectory(./adapters/dnp3)

# DDS adapter based on Twin Oaks library
# add_subdirectory(./adapters/dds/twinoaks)

# main application
add_subdirectory(./application)


