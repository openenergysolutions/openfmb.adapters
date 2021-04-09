# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(PROJECT_HEADERS
        include/log/PluginFactory.h
)

set(PROJECT_SOURCES
        src/ConfigKeys.h
        src/PluginFactory.cpp
        src/PluginBase.h
        src/Plugin.cpp
        src/DebugStringLogSubscriber.h
        src/FilteredValueLogSubscriber.h
)

add_library(log-plugin STATIC ${PROJECT_SOURCES} ${PROJECT_HEADERS})
target_link_libraries(log-plugin PUBLIC adapter-util)
target_include_directories(log-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
clang_tidy(log-plugin)
clang_format(log-plugin)
