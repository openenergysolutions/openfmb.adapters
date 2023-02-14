# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

if(OPENFMB_USE_CONAN)
    include(FetchContent)

    FetchContent_Declare(
        modbus-cpp
        GIT_REPOSITORY https://github.com/openenergysolutions/modbus-cpp.git
        GIT_TAG        67c5fc8477b47cc6ff35944186eeec933c87724e
    )

    FetchContent_GetProperties(modbus-cpp)
    if(NOT modbus-cpp_POPULATED)
        FetchContent_Populate(modbus-cpp)
        add_subdirectory(${modbus-cpp_SOURCE_DIR})
    endif()
else()
    if(ADAPTER_VENDORED_DEPS)
        include(FetchContent)

        FetchContent_Declare(
            modbus-cpp
            GIT_REPOSITORY git@github.com:openenergysolutions/modbus-cpp.git
            GIT_TAG        669b3e47545faa71816c685276f7cdcf64629f9a
            )

        FetchContent_GetProperties(modbus-cpp)
        if(NOT modbus-cpp_POPULATED)
            FetchContent_Populate(modbus-cpp)
            add_subdirectory(${modbus-cpp_SOURCE_DIR})
        endif()
    else()
        find_package(modbuscpp REQUIRED)
    endif()
endif()
