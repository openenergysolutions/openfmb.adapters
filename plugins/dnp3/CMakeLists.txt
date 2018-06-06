set(DNP3_PUBLIC_HEADERS
        include/dnp3/PluginFactory.h
)

set(DNP3_SOURCES
        src/dnp3/ConfigStrings.h
        src/dnp3/ConfigWriteVisitor.h
        src/dnp3/Plugin.h
        src/dnp3/IPublishConfigBuilder.h
        src/dnp3/InputType.h
        src/dnp3/InputType.cpp
        src/dnp3/LogAdapter.h
        src/dnp3/PublishingConfigReadVisitor.h
        src/dnp3/SubscribingConfigReadVisitor.h
        src/dnp3/SOEHandler.h
        src/dnp3/SOEHandler.cpp
        src/dnp3/PluginFactory.cpp
        src/dnp3/Plugin.cpp
        src/dnp3/ControlCodeMeta.h
        src/dnp3/ControlCodeMeta.cpp
        src/dnp3/CommandConfiguration.h
        src/dnp3/CommandSequence.h
        src/dnp3/ICommandSequence.h
        src/dnp3/CommandSequenceExecutor.h
        src/dnp3/ICommandSequenceExecutor.h
)

set(DNP3_LIBS asiodnp3 asiopal opendnp3 openpal)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/dnp3/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/*.cpp
        PARENT_SCOPE
)

add_library(dnp3-plugin STATIC ${DNP3_SOURCES} ${DNP3_PUBLIC_HEADERS})
target_link_libraries(dnp3-plugin PUBLIC adapter-api ${DNP3_LIBS})
target_include_directories(dnp3-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(dnp3-plugin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)


