

set(PROJECT_HEADERS
        src/log/LogAdapterFactory.h
        src/log/LogAdapter.h
)

set(PROJECT_SOURCES
        src/log/LogAdapterFactory.cpp
        src/log/LogAdapter.cpp
)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/log/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/log/*.cpp
        PARENT_SCOPE
)

add_library(log-adapter STATIC ${PROJECT_SOURCES} ${PROJECT_HEADERS})
target_link_libraries(log-adapter PUBLIC adapter-api)
target_include_directories(log-adapter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

