set(TEST_SOURCES main.cpp)

add_executable(test-dnp3-plugin ${TEST_SOURCES})
target_include_directories(test-dnp3-plugin PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch)
target_include_directories(test-dnp3-plugin PRIVATE ../src/dnp3 ../include)
target_link_libraries(test-dnp3-plugin dnp3-plugin)
clang_format(test-dnp3-plugin)
add_test(test-dnp3-plugin test-dnp3-plugin)