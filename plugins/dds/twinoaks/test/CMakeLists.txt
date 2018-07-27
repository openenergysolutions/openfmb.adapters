
set(TEST_SOURCES main.cpp test_dds_conversions.cpp)

add_executable(test-twinoaks-dds ${TEST_SOURCES})
target_include_directories(test-twinoaks-dds PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch)
target_include_directories(test-twinoaks-dds PRIVATE $<TARGET_PROPERTY:twinoaks-dds-plugin,INCLUDE_DIRECTORIES>)
target_link_libraries(test-twinoaks-dds twinoaks-dds-plugin)
clang_format(test-twinoaks-dds)
add_test(test-twinoaks-dds test-twinoaks-dds)