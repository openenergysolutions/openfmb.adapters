
set(API_HEADERS
        include/adapter-api/IPlugin.h
        include/adapter-api/IPluginFactory.h
        include/adapter-api/IPublisher.h
        include/adapter-api/ISubscriber.h
        include/adapter-api/ISubscriptionHandler.h
        include/adapter-api/IMessageBus.h
        include/adapter-api/Logger.h
        include/adapter-api/ISubscriber.h
        include/adapter-api/Exception.h
)

# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
    ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-api/*.h
    PARENT_SCOPE
)

add_library(adapter-api ${API_HEADERS})

if(OPENFMB_USE_CONAN)

target_link_libraries(adapter-api PUBLIC proto-api )

else()

target_link_libraries(adapter-api PUBLIC proto-api libyaml-cpp.a)

endif()

target_include_directories(adapter-api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(adapter-api PUBLIC ${CMAKE_SOURCE_DIR}/deps/spdlog/include)
clang_tidy(adapter-api)

