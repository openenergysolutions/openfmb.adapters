# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

find_library(ZENOH_LIB zenohc REQUIRED)
find_path(ZENOH_INCLUDE "zenoh.h" REQUIRED)

set(ZENOH_PUBLIC_HEADERS
		include/zenoh/PluginFactory.h
)

set(ZENOH_SOURCES
        src/ConfigStrings.h
        src/Plugin.h
        src/Plugin.cpp
		src/PluginFactory.cpp
        src/ZenohPublisher.h
		src/ZenohSubscriber.h
        src/SubjectName.h)

add_library(zenoh-plugin STATIC ${ZENOH_PUBLIC_HEADERS} ${ZENOH_SOURCES})
target_include_directories(zenoh-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include PRIVATE ${ZENOH_INCLUDE})
target_link_libraries(zenoh-plugin PUBLIC adapter-util PRIVATE ${ZENOH_LIB} dl rt)
clang_tidy(zenoh-plugin)
clang_format(zenoh-plugin)

add_subdirectory(./test)
