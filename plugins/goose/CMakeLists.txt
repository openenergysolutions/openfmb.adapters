set(goose_public_headers
    ./include/goose/PublishingPluginFactory.h
)

set(goose_private_headers
    ./src/ConfigStrings.h
    ./src/GoosePath.h

    ./src/pub/ControlBlockListener.h
    ./src/pub/GooseMessageVisitor.h
    ./src/pub/IPublishConfigBuilder.h
    ./src/pub/Mappings.h
    ./src/pub/NetworkAdapter.h
    ./src/pub/ProfileReader.h
    ./src/pub/PublishingConfigReadVisitor.h
    ./src/pub/PublishingPlugin.h
    ./src/pub/PublishingConfigWriteVisitor.h
)

set(goose_src
    ./src/GoosePath.cpp

    ./src/pub/ControlBlockListener.cpp
    ./src/pub/GooseMessageVisitor.cpp
    ./src/pub/PublishingConfigWriteVisitor.cpp
    ./src/pub/PublishingPlugin.cpp
    ./src/pub/PublishingPluginFactory.cpp
)

add_library(goose-plugin STATIC ${goose_public_headers} ${goose_private_headers} ${goose_src})
target_link_libraries(goose-plugin PUBLIC adapter-api goose-cpp)
target_include_directories(goose-plugin
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
clang_tidy(goose-plugin)
clang_format(goose-plugin)
