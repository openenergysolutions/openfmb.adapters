# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

if(OPENFMB_USE_CONAN)
    include(FetchContent)

    FetchContent_Declare(
        exe4cpp
        URL      https://github.com/automatak/exe4cpp/archive/fb878a4de598ba9d6e4338afebf83f96e03af1b8.zip
        URL_HASH SHA1=18B141E8CF09DC8D28CC62DD5FA2920670D501BD
    )

    FetchContent_GetProperties(exe4cpp)
    if(NOT exe4cpp_POPULATED)
        FetchContent_Populate(exe4cpp)
        add_subdirectory(${exe4cpp_SOURCE_DIR})
    endif()
else()
    find_path(EXE4CPP_INCLUDE exe4cpp/Typedefs.h REQUIRED)
    add_library(exe4cpp INTERFACE)
    target_include_directories(exe4cpp INTERFACE ${EXE4CPP_INCLUDE})
    target_compile_features(exe4cpp INTERFACE cxx_std_14)
endif()
