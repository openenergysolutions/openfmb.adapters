set(goose_public_headers
    ./include/goose/PublishingPluginFactory.h
    ./include/goose/SubscribingPluginFactory.h
)

set(goose_private_headers
    ./src/ConfigStrings.h
    ./src/GoosePath.h

    ./src/pub/ControlBlockListener.h
    ./src/pub/GooseMessageVisitor.h
    ./src/pub/IPublishConfigBuilder.h
    ./src/pub/Mappings.h
    ./src/pub/NetworkAdapter.h
    ./src/pub/PublishingConfigReadVisitor.h
    ./src/pub/PublishingConfigWriteVisitor.h
    ./src/pub/PublishingPlugin.h
    ./src/pub/PublishingProfileReader.h

    ./src/sub/BuildingFunction.h
    ./src/sub/SubscribingConfigReadVisitor.h
    ./src/sub/SubscribingConfigWriteVisitor.h
    ./src/sub/SubscribingPlugin.h
    ./src/sub/SubscribingProfileReader.h
    ./src/sub/SubscriptionHandler.h
)

set(goose_src
    ./src/GoosePath.cpp

    ./src/pub/ControlBlockListener.cpp
    ./src/pub/GooseMessageVisitor.cpp
    ./src/pub/PublishingConfigWriteVisitor.cpp
    ./src/pub/PublishingPlugin.cpp
    ./src/pub/PublishingPluginFactory.cpp

    ./src/sub/SubscribingConfigWriteVisitor.cpp
    ./src/sub/SubscribingPlugin.cpp
    ./src/sub/SubscribingPluginFactory.cpp
)

add_library(goose-plugin STATIC ${goose_public_headers} ${goose_private_headers} ${goose_src})
target_link_libraries(goose-plugin PUBLIC adapter-api goose-cpp)
target_include_directories(goose-plugin
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
clang_tidy(goose-plugin)
clang_format(goose-plugin)
