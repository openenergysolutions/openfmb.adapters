set(timescaledb_public_headers
    ./include/timescaledb/PluginFactory.h
)

set(timescaledb_private_headers
    ./src/BusListener.h
    ./src/ConfigStrings.h
    ./src/IArchiver.h
    ./src/Message.h
    ./src/Plugin.h
    ./src/PQConnection.h
    ./src/PQResult.h
    ./src/TimescaleDBArchiver.h
)

set(timescaledb_src
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
add_library(timescaledb-plugin ${timescaledb_public_headers} ${timescaledb_private_headers} ${timescaledb_src})
target_link_libraries(timescaledb-plugin PUBLIC adapter-util postgresql)
target_include_directories(timescaledb-plugin PUBLIC ./include)
clang_tidy(timescaledb-plugin)
clang_format(timescaledb-plugin)
