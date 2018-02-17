
set(TEST_SOURCES main.cpp)

add_executable(test-twinoaks-dds ${TEST_SOURCES})
target_include_directories(test-twinoaks-dds PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch)
target_link_libraries(test-twinoaks-dds twinoaks-dds-adapter)
add_test(test-twinoaks-dds test-twinoaks-dds)