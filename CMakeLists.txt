cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

#temporary hack
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# API used by the adapters / application
add_subdirectory(./adapter-api)

# adapter that logs published messages
add_subdirectory(./adapters/msg-logger)

# DNP3 adapter based on opendnp3
add_subdirectory(./adapters/dnp3)

# DDS adapter based on Twin Oaks library
add_subdirectory(./adapters/dds/twinoaks)

# main application
add_subdirectory(./application)

add_custom_target(
        format
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND astyle ${CPP_FORMAT_DIRS} --options=./astyle.cfg
)

