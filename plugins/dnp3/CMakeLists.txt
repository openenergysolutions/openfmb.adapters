set(DNP3_PUBLIC_HEADERS
        include/dnp3/master/PluginFactory.h
        include/dnp3/outstation/PluginFactory.h
)

set(DNP3_SOURCES
        src/dnp3/ConfigStrings.h
        src/dnp3/LogAdapter.h
        src/dnp3/PluginBase.h
        src/dnp3/PluginBase.cpp
        # master components
        src/dnp3/master/Control.h
        src/dnp3/master/Control.cpp
        src/dnp3/master/ControlConfigWriteVisitor.h
        src/dnp3/master/ControlConfigWriteVisitor.cpp
        src/dnp3/master/ControlSchemaWriteVisitor.h
        src/dnp3/master/ControlSchemaWriteVisitor.cpp
        src/dnp3/master/ControlSubscriptionHandler.h
        src/dnp3/master/MeasurementConfigWriteVisitor.h
        src/dnp3/master/MeasurementConfigWriteVisitor.cpp
        src/dnp3/master/MeasurementSchemaWriteVisitor.h
        src/dnp3/master/MeasurementSchemaWriteVisitor.cpp
        src/dnp3/master/IPublishConfigBuilder.h
        src/dnp3/master/PublishingConfigReadVisitor.h
        src/dnp3/master/SubscribingConfigReadVisitor.h
        src/dnp3/master/SOEHandler.h
        src/dnp3/master/SOEHandler.cpp
        src/dnp3/master/Plugin.h
        src/dnp3/master/Plugin.cpp
        src/dnp3/master/PluginFactory.cpp
        src/dnp3/master/PollRepository.h
        src/dnp3/master/PollRepository.cpp
        src/dnp3/master/CommandConfiguration.h
        src/dnp3/master/CommandSequence.h
        src/dnp3/master/ICommandSequence.h
        src/dnp3/master/CommandSequenceExecutor.h
        src/dnp3/master/ICommandSequenceExecutor.h
        # outstation components
        src/dnp3/outstation/CommandHandler.h
        src/dnp3/outstation/CommandHandler.cpp
        src/dnp3/outstation/ICommandConfig.h
        src/dnp3/outstation/ControlConfigReadVisitor.h
        src/dnp3/outstation/ControlConfigReadVisitor.cpp
        src/dnp3/outstation/ControlConfigWriteVisitor.h
        src/dnp3/outstation/ControlConfigWriteVisitor.cpp
        src/dnp3/outstation/ControlSchemaWriteVisitor.h
        src/dnp3/outstation/ControlSchemaWriteVisitor.cpp
        src/dnp3/outstation/DefaultVariations.h
        src/dnp3/outstation/PluginFactory.cpp
        src/dnp3/outstation/Plugin.h
        src/dnp3/outstation/Plugin.cpp
        src/dnp3/outstation/MeasurementConfigReadVisitor.h
        src/dnp3/outstation/MeasurementConfigWriteVisitor.h
        src/dnp3/outstation/MeasurementConfigWriteVisitor.cpp
        src/dnp3/outstation/MeasurementSchemaWriteVisitor.h
        src/dnp3/outstation/MeasurementSchemaWriteVisitor.cpp
        src/dnp3/outstation/SubscriptionTypes.h
        src/dnp3/outstation/SubscriptionHandler.h
        # generated enums
        src/dnp3/generated/SourceType.h
        src/dnp3/generated/SourceType.cpp
        src/dnp3/generated/DestinationType.h
        src/dnp3/generated/DestinationType.cpp
        src/dnp3/generated/CommandSourceType.h
        src/dnp3/generated/CommandSourceType.cpp
        src/dnp3/generated/CommandActionType.h
        src/dnp3/generated/CommandActionType.cpp
        src/dnp3/generated/ProfileAction.h
        src/dnp3/generated/ProfileAction.cpp
        )

add_library(dnp3-plugin STATIC ${DNP3_SOURCES} ${DNP3_PUBLIC_HEADERS})
target_link_libraries(dnp3-plugin PUBLIC adapter-util opendnp3)
target_include_directories(dnp3-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(dnp3-plugin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
clang_tidy(dnp3-plugin)
clang_format(dnp3-plugin EXCLUDES "/generated/")

add_subdirectory(./test)