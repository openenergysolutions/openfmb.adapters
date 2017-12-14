cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)

# optionally disable certain adapters
option(OPENFMB_USE_DNP3 "Build the DNP3 adapter" ON)
option(OPENFMB_USE_TWINOAKS_DDS "Build the Twin Oaks DDS adapter" ON)

#temporary hack
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# API used by the adapters / application
add_subdirectory(./adapter-api)

# adapter that logs published messages
add_subdirectory(./adapters/msg-logger)

if(OPENFMB_USE_DNP3)
  add_subdirectory(./adapters/dnp3) # DNP3 adapter based on opendnp3
endif()

if(OPENFMB_USE_TWINOAKS_DDS)
  add_subdirectory(./adapters/dds/twinoaks) # DDS adapter based on Twin Oaks library
endif()

# main application
add_subdirectory(./application)

add_custom_target(
        format
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND astyle ${CPP_FORMAT_DIRS} --options=./astyle.cfg
)

