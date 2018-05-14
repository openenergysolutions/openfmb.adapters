
set(TEST_SOURCES src/main.cpp)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_executable(test-adapter-api ${TEST_SOURCES})
target_include_directories(test-adapter-api PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch)
target_link_libraries(test-adapter-api adapter-api)
add_test(test-adapter-api test-adapter-api)