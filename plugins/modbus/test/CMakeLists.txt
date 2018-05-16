
set(TEST_SOURCES main.cpp
                 test_register_conversions.cpp
                 test_poll_handler.cpp
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
        PARENT_SCOPE
)

add_executable(test-modbus-plugin ${TEST_SOURCES})
target_include_directories(test-modbus-plugin PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch)
target_include_directories(test-modbus-plugin PRIVATE ../src/ ../include)
target_link_libraries(test-modbus-plugin modbus-plugin)
add_test(test-modbus-plugin test-modbus-plugin)