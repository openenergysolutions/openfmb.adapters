

set(PROJECT_HEADERS
        include/log/PluginFactory.h
)

set(PROJECT_SOURCES
        src/ConfigKeys.h
        src/ITagFilter.h
        src/LogArchiveVisitor.h
        src/PluginFactory.cpp
        src/Plugin.h
        src/Plugin.cpp
        src/LogArchiveVisitor.h
        src/TagFilter.h
        src/TagFilter.cpp
        src/DebugStringLogSubscriber.h
        src/FilteredValueLogSubscriber.h
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

