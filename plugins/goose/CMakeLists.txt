set(goose_public_headers
    ./include/goose/PluginFactory.h
)

set(goose_private_headers
    ./src/ConfigStrings.h
    ./src/MeasurementConfigWriteVisitor.h
    ./src/Plugin.h
)

set(goose_src
    ./src/MeasurementConfigWriteVisitor.cpp
    ./src/Plugin.cpp
    ./src/PluginFactory.cpp
)

add_library(goose-plugin STATIC ${goose_public_headers} ${goose_private_headers} ${goose_src})
target_link_libraries(goose-plugin PUBLIC adapter-api goose-cpp)
target_include_directories(goose-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
clang_tidy(goose-plugin)
clang_format(goose-plugin)
