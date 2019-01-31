set(DNP3_PUBLIC_HEADERS
        include/dnp3/master/PluginFactory.h
)

set(DNP3_SOURCES
        src/dnp3/ConfigStrings.h
        src/dnp3/master/Control.h
        src/dnp3/master/Control.cpp
        src/dnp3/master/ControlConfigWriteVisitor.h
        src/dnp3/master/ControlConfigWriteVisitor.cpp
        src/dnp3/master/ControlSubscriptionHandler.h
        src/dnp3/master/MeasurementConfigWriteVisitor.h
        src/dnp3/master/MeasurementConfigWriteVisitor.cpp
        src/dnp3/master/Plugin.h
        src/dnp3/master/IPublishConfigBuilder.h
        src/dnp3/LogAdapter.h
        src/dnp3/master/PublishingConfigReadVisitor.h
        src/dnp3/master/SubscribingConfigReadVisitor.h
        src/dnp3/master/SOEHandler.h
        src/dnp3/master/SOEHandler.cpp
        src/dnp3/master/PluginFactory.cpp
        src/dnp3/master/Plugin.cpp
        src/dnp3/ControlCodeMeta.h
        src/dnp3/ControlCodeMeta.cpp
        src/dnp3/master/CommandConfiguration.h
        src/dnp3/master/CommandSequence.h
        src/dnp3/master/ICommandSequence.h
        src/dnp3/master/CommandSequenceExecutor.h
        src/dnp3/master/ICommandSequenceExecutor.h
        #generated enums
        src/dnp3/generated/SourceType.h
        src/dnp3/generated/SourceType.cpp
        src/dnp3/generated/CommandType.h
        src/dnp3/generated/CommandType.cpp)

set(DNP3_LIBS asiodnp3 asiopal opendnp3 openpal)

add_library(dnp3-plugin STATIC ${DNP3_SOURCES} ${DNP3_PUBLIC_HEADERS})
target_link_libraries(dnp3-plugin PUBLIC adapter-util ${DNP3_LIBS})
target_include_directories(dnp3-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(dnp3-plugin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
clang_tidy(dnp3-plugin)
clang_format(dnp3-plugin EXCLUDES "/generated/")

add_subdirectory(./test)