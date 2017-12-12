

set(PROJECT_HEADERS
        src/console/ConsoleAdapterFactory.h
        src/console/ConsoleAdapter.h
)

set(PROJECT_SOURCES
        src/console/ConsoleAdapterFactory.cpp
        src/console/ConsoleAdapter.cpp
)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/console/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/console/*.cpp
        PARENT_SCOPE
)

add_library(msg-logger-adapter STATIC ${PROJECT_SOURCES} ${PROJECT_HEADERS})
target_link_libraries(msg-logger-adapter PUBLIC adapter-api)
target_include_directories(msg-logger-adapter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

