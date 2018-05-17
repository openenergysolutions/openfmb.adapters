set(historian_public_headers
    ./include/historian/PluginFactory.h
)

set(historian_private_headers
    ./src/IArchiver.h
    ./src/BusListener.h
    ./src/Plugin.h
    ./src/PQConnection.h
    ./src/PQResult.h
    ./src/TimescaleDBArchiver.h
)

set(historian_src
    ./src/Plugin.cpp
    ./src/PluginFactory.cpp
    ./src/PQConnection.cpp
    ./src/PQResult.cpp
    ./src/TimescaleDBArchiver.cpp
)

# PostgreSQL dependency
find_package(PostgreSQL REQUIRED)
add_library(postgresql MODULE IMPORTED)
set_property(TARGET postgresql
             PROPERTY IMPORTED_LOCATION ${PostgreSQL_LIBRARIES})
set_property(TARGET postgresql
             PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${PostgreSQL_INCLUDE_DIRS})

# Build plugin
add_library(historian-plugin ${historian_public_headers} ${historian_private_headers} ${historian_src})
target_link_libraries(historian-plugin PUBLIC adapter-api postgresql)
target_include_directories(historian-plugin PUBLIC ./include)
