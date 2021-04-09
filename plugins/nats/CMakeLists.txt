# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

if(OPENFMB_LINK_STATIC)
	find_library(NATS_LIB nats_static)
	find_package(OpenSSL REQUIRED)
else()
	find_library(NATS_LIB nats)
endif()

find_path(NATS_INCLUDE "nats.h")

if(NOT NATS_LIB)
	message(FATAL_ERROR "Nats library not found. Is cnats (https://github.com/nats-io/cnats) installed?")
else()
	message("NATS_LIB is ${NATS_LIB}")
endif()

set(NATS_PUBLIC_HEADERS
		include/nats/PluginFactory.h
)

set(NATS_SOURCES
		src/generated/SecurityType.h
		src/generated/SecurityType.cpp
		src/ConfigStrings.h
        src/Plugin.h
        src/Plugin.cpp
		src/PluginFactory.cpp
        src/NATSPublisher.h
		src/NATSSubscriber.h
        src/SubjectName.h
        src/NatsOptions.h
		src/NatsOptions.cpp)

add_library(nats-plugin STATIC ${NATS_PUBLIC_HEADERS} ${NATS_SOURCES})
target_include_directories(nats-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include PRIVATE ${NATS_INCLUDE})
target_link_libraries(nats-plugin PUBLIC adapter-util PRIVATE ${NATS_LIB})
if(OPENFMB_LINK_STATIC)
	target_link_libraries(nats-plugin PRIVATE ${OPENSSL_LIBRARIES})
endif()
clang_tidy(nats-plugin)
clang_format(nats-plugin)

add_subdirectory(./test)