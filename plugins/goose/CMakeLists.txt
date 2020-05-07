set(goose_public_headers
    ./include/goose/PublishingPluginFactory.h
    ./include/goose/SubscribingPluginFactory.h
)

set(goose_private_headers
    ./src/BuildingFunction.h
    ./src/ConfigStrings.h
    ./src/GooseStructureConfigVisitor.h

    ./src/generated/QualityMappingType.h
    ./src/generated/Type.h

    ./src/pub/ControlBlockListener.h
    ./src/pub/GooseMessageVisitor.h
    ./src/pub/IPublishConfigBuilder.h
    ./src/pub/Mappings.h
    ./src/pub/NetworkAdapter.h
    ./src/pub/PubGooseStructureConfigReader.h
    ./src/pub/PublishingConfigReadVisitor.h
    ./src/pub/PublishingSchemaWriteVisitor.h
    ./src/pub/PublishingPlugin.h
    ./src/pub/PublishingProfileReader.h

    ./src/sub/ConstantMessageAccessor.h
    ./src/sub/QualityTemplatesConfigReader.h
    ./src/sub/SubGooseStructureConfigReader.h
    ./src/sub/SubscribingConfigReadVisitor.h
    ./src/sub/SubscribingSchemaWriteVisitor.h
    ./src/sub/SubscribingPlugin.h
    ./src/sub/SubscribingProfileReader.h
    ./src/sub/SubscriptionHandler.h
    ./src/sub/TimeQualityMessageAccessor.h
    ./src/sub/TimeQualityTemplatesConfigReader.h
)

set(goose_src
    ./src/GooseStructureConfigVisitor.cpp

    ./src/generated/QualityMappingType.cpp
    ./src/generated/Type.cpp

    ./src/pub/ControlBlockListener.cpp
    ./src/pub/GooseMessageVisitor.cpp
    ./src/pub/Mappings.cpp
    ./src/pub/PubGooseStructureConfigReader.cpp
    ./src/pub/PublishingSchemaWriteVisitor.cpp
    ./src/pub/PublishingPlugin.cpp
    ./src/pub/PublishingPluginFactory.cpp

    ./src/sub/QualityTemplatesConfigReader.cpp
    ./src/sub/SubscribingSchemaWriteVisitor.cpp
    ./src/sub/SubscribingPlugin.cpp
    ./src/sub/SubscribingPluginFactory.cpp
    ./src/sub/TimeQualityTemplatesConfigReader.cpp
)

add_library(goose-plugin STATIC ${goose_public_headers} ${goose_private_headers} ${goose_src})
target_link_libraries(goose-plugin PUBLIC adapter-util goose-cpp)
target_include_directories(goose-plugin
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
clang_tidy(goose-plugin)
clang_format(goose-plugin EXCLUDES "/generated/")
