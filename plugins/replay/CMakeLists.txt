# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(PUBLIC_HEADERS
        include/replay/PluginFactory.h
)

set(SOURCES
        src/PluginFactory.cpp
        src/Plugin.h
        src/Plugin.cpp
        src/ConfigStrings.h
        src/PublishFactory.h
        src/PublishFactory.cpp
)

add_library(replay-plugin STATIC ${PUBLIC_HEADERS} ${PROJECT_HEADERS} ${SOURCES})
target_link_libraries(replay-plugin PUBLIC adapter-util)
target_include_directories(
        replay-plugin
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/../../_deps/cppcodec-src
)
clang_tidy(replay-plugin)
clang_format(replay-plugin)
