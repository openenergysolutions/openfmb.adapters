
set(TEST_SOURCES
        src/main.cpp
        src/test_json_schema_serialization.cpp
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_executable(test-schema-util ${TEST_SOURCES})
target_include_directories(test-schema-util PRIVATE ../src)
target_link_libraries(test-schema-util PRIVATE schema-util catch)

add_test(test-schema-util test-schema-util)
