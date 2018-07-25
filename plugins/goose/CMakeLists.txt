set(goose_public_headers
    ./include/goose/PluginFactory.h
)

set(goose_private_headers
    ./src/ConfigStrings.h
    ./src/ControlBlockListener.h
    ./src/GooseMessageVisitor.h
    ./src/GoosePath.h
    ./src/IPublishConfigBuilder.h
    ./src/Mappings.h
    ./src/MeasurementConfigWriteVisitor.h
    ./src/NetworkAdapter.h
    ./src/Plugin.h
    ./src/ProfileReader.h
    ./src/PublishingConfigReadVisitor.h
)

set(goose_src
    ./src/ControlBlockListener.cpp
    ./src/GooseMessageVisitor.cpp
    ./src/GoosePath.cpp
    ./src/MeasurementConfigWriteVisitor.cpp
    ./src/Plugin.cpp
    ./src/PluginFactory.cpp
)

add_library(goose-plugin STATIC ${goose_public_headers} ${goose_private_headers} ${goose_src})
target_link_libraries(goose-plugin PUBLIC adapter-api goose-cpp)
target_include_directories(goose-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
clang_tidy(goose-plugin)
clang_format(goose-plugin)
