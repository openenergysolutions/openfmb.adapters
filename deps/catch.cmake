# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

if(OPENFMB_USE_CONAN)
    include(FetchContent)

    FetchContent_Declare(
            catch
            URL                 https://github.com/catchorg/Catch2/releases/download/v2.13.10/catch.hpp
            URL_HASH            SHA1=7de460993c25178172b2e8b6f2a21d0735457e61
            DOWNLOAD_NO_EXTRACT TRUE
            DOWNLOAD_DIR        ${CMAKE_CURRENT_BINARY_DIR}/catch-src
    )

    FetchContent_GetProperties(catch)
    if(NOT catch_POPULATED)
        FetchContent_Populate(catch)

        find_package(Threads)

        add_library(catch INTERFACE)
        target_include_directories(catch INTERFACE ${CMAKE_CURRENT_BINARY_DIR}/catch-src)
        target_compile_features(catch INTERFACE cxx_std_11)
    endif()
else()
    #find_package(Catch2 REQUIRED)
    add_library(catch INTERFACE)
    find_path(CATCH_INCLUDE catch2/catch.hpp REQUIRED)
    target_include_directories(catch INTERFACE ${CATCH_INCLUDE}/catch2)
    target_compile_features(catch INTERFACE cxx_std_11)
endif()