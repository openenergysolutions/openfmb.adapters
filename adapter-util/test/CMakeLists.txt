# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(TEST_SOURCES
        src/main.cpp
        src/test_config_accessor.cpp
        src/test_proto_change_filter.cpp
        src/test_proto_deserialization.cpp
        src/test_proto_set_and_get.cpp
        src/test_schedule_executor.cpp
        src/test_schedule_splitting.cpp
        src/test_time_conversion.cpp
        src/test_yaml_override_parsing.cpp
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_executable(test-adapter-util ${TEST_SOURCES})
target_include_directories(test-adapter-util PRIVATE ${CMAKE_SOURCE_DIR}/deps/cppcodec)
target_include_directories(test-adapter-util PRIVATE ../src)

target_link_libraries(test-adapter-util PRIVATE adapter-util catch)

add_test(test-adapter-util test-adapter-util)
