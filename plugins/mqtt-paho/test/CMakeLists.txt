
set(TEST_SOURCES main.cpp test_topic_name.cpp)

add_executable(test-mqtt-plugin ${TEST_SOURCES})
target_include_directories(test-mqtt-plugin PRIVATE ../src/ ../include)
target_link_libraries(test-mqtt-plugin PRIVATE mqtt-plugin catch)
clang_format(test-mqtt-plugin)
add_test(test-mqtt-plugin test-mqtt-plugin)