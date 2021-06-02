# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(TEST_SOURCES main.cpp test_subject_name.cpp)

add_executable(test-zenoh-plugin ${TEST_SOURCES})
target_include_directories(test-zenoh-plugin PRIVATE ../src/ ../include)
target_link_libraries(test-zenoh-plugin PRIVATE zenoh-plugin catch)
clang_format(test-zenoh-plugin)
add_test(test-zenoh-plugin test-zenoh-plugin)
