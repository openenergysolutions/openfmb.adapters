# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

if(OPENFMB_USE_CONAN)
    include(FetchContent)

    FetchContent_Declare(
            argagg
            URL                 https://github.com/vietjtnguyen/argagg/archive/4c8c86180cfafb1448f583ed0973da8c2f559dd6.zip
            URL_HASH            SHA1=40c70948df9acf4f45feaf9316fb1ad2d6981069
    )

    FetchContent_GetProperties(argagg)
    if(NOT argagg_POPULATED)
        FetchContent_Populate(argagg)

        find_package(Threads)

        add_library(argagg INTERFACE)
        target_include_directories(argagg INTERFACE ${argagg_SOURCE_DIR}/include)
        target_compile_features(argagg INTERFACE cxx_std_11)
        target_link_libraries(argagg INTERFACE Threads::Threads)
    endif()
endif()