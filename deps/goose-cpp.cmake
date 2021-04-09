# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

include(FetchContent)

FetchContent_Declare(
    goose-cpp
    GIT_REPOSITORY git@github.com:openenergysolutions/goose-cpp.git
    GIT_TAG        6e576b73a89892a609bfac1d124c82491ca1a6fc
)

FetchContent_GetProperties(goose-cpp)
if(NOT goose-cpp_POPULATED)
    FetchContent_Populate(goose-cpp)
    add_subdirectory(${goose-cpp_SOURCE_DIR})
endif()
