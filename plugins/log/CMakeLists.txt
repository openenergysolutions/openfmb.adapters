

set(PROJECT_HEADERS
        include/log/PluginFactory.h

)

set(PROJECT_SOURCES
        src/Plugin.h
        src/ConfigKeys.h
        src/PluginFactory.cpp
        src/Plugin.cpp
)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/log/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_library(log-plugin STATIC ${PROJECT_SOURCES} ${PROJECT_HEADERS})
target_link_libraries(log-plugin PUBLIC adapter-api)
target_include_directories(log-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

