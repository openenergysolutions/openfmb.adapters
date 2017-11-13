cmake_minimum_required (VERSION 3.0)
project (openfmb-adapter)
set(OPENFMB_ADAPTER_VERSION 0.0.1)


# API used by the adapters / application
add_subdirectory(./adapter-api)

# DDS adapter based on Twin Oaks library
add_subdirectory(./adapters/dds/twinoaks)

# main application
add_subdirectory(./application)


