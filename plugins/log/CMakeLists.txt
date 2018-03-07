

set(PROJECT_HEADERS
        src/log/LogPluginFactory.h
        src/log/LogPlugin.h
)

set(PROJECT_SOURCES
        src/log/LogPluginFactory.cpp
        src/log/LogPlugin.cpp
)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/log/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/log/*.cpp
        PARENT_SCOPE
)

add_library(log-plugin STATIC ${PROJECT_SOURCES} ${PROJECT_HEADERS})
target_link_libraries(log-plugin PUBLIC adapter-api)
target_include_directories(log-plugin INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

