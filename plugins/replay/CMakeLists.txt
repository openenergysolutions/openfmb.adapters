

set(PUBLIC_HEADERS
        include/replay/PluginFactory.h
)

set(SOURCES
        src/PluginFactory.cpp
        src/Plugin.h
        src/Plugin.cpp
        src/ConfigStrings.h)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/replay/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_library(replay-plugin STATIC ${PUBLIC_HEADERS} ${PROJECT_HEADERS} ${SOURCES})
target_link_libraries(replay-plugin PUBLIC adapter-api)
target_include_directories(
        replay-plugin
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_SOURCE_DIR}/deps/cppcodec/
)


