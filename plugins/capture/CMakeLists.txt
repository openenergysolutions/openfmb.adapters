# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(PUBLIC_HEADERS
        include/capture/PluginFactory.h
)

set(SOURCES
        src/PluginFactory.cpp
        src/Plugin.h
        src/Plugin.cpp
        src/ConfigStrings.h)

add_library(capture-plugin STATIC ${PUBLIC_HEADERS} ${PROJECT_HEADERS} ${SOURCES})
target_link_libraries(capture-plugin PUBLIC adapter-util)
message(${CMAKE_CURRENT_BINARY_DIR})
target_include_directories(
        capture-plugin
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/../../_deps/cppcodec-src
)
clang_tidy(capture-plugin)
clang_format(capture-plugin)
