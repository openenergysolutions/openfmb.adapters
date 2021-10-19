# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

if(OPENFMB_USE_CONAN)
    include(FetchContent)

    FetchContent_Declare(
            cppcodec
            URL                 https://github.com/tplgy/cppcodec/archive/374bb3b732a628cbb6b388d69ceb4236fc88b8c0.zip
            URL_HASH            SHA1=1dd49f132760a05b6c30a79b8a6b07f90ba8da4f
    )

    FetchContent_GetProperties(cppcodec)
    if(NOT cppcodec_POPULATED)
        FetchContent_Populate(cppcodec)

        find_package(Threads)

        add_library(cppcodec INTERFACE)
        target_include_directories(cppcodec INTERFACE ${cppcodec_SOURCE_DIR}/cppcodec)
        target_compile_features(cppcodec INTERFACE cxx_std_11)
        target_link_libraries(cppcodec INTERFACE Threads::Threads)
    endif()
endif()