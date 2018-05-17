set(historian_public_headers
    ./include/historian/PluginFactory.h
)

set(historian_private_headers
    ./src/Plugin.h
)

set(historian_src
    ./src/Plugin.cpp
    ./src/PluginFactory.cpp
)

add_library(historian-plugin ${historian_public_headers} ${historian_private_headers} ${historian_src})
target_link_libraries(historian-plugin PUBLIC adapter-api)
target_include_directories(historian-plugin PUBLIC ./include)
