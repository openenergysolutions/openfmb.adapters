set(TEST_SOURCES main.cpp)

add_executable(test-dnp3-plugin ${TEST_SOURCES})
target_include_directories(test-dnp3-plugin PRIVATE ../src/dnp3 ../include)
target_link_libraries(test-dnp3-plugin PRIVATE dnp3-plugin catch)
clang_format(test-dnp3-plugin)
add_test(test-dnp3-plugin test-dnp3-plugin)