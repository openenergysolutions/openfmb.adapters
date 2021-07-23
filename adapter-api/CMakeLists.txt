# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(API_HEADERS
        include/adapter-api/IPlugin.h
        include/adapter-api/IPluginFactory.h
        include/adapter-api/IPublisher.h
        include/adapter-api/ISubscriber.h
        include/adapter-api/ISubscriptionHandler.h
        include/adapter-api/IMessageBus.h
        include/adapter-api/Logger.h
        include/adapter-api/ISubscriber.h
        include/adapter-api/Exception.h
)

# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
    ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-api/*.h
    PARENT_SCOPE
)

add_library(adapter-api INTERFACE)

find_library(LIBYAMLCPP yaml-cpp REQUIRED)
target_link_libraries(adapter-api INTERFACE proto-api spdlog::spdlog schema-util ${LIBYAMLCPP})
target_include_directories(adapter-api INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
clang_tidy(adapter-api)
