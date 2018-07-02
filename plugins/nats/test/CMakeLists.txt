
set(TEST_SOURCES main.cpp test_subject_name.cpp)

add_executable(test-nats-plugin ${TEST_SOURCES})
target_include_directories(test-nats-plugin PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch)
target_include_directories(test-nats-plugin PRIVATE ../src/ ../include)
target_link_libraries(test-nats-plugin nats-plugin)
clang_format(test-nats-plugin)
add_test(test-nats-plugin test-nats-plugin)