# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

find_program(CLANG_TIDY_EXE
    NAMES clang-tidy
)

if(CLANG_TIDY_EXE)
    message(STATUS "Using clang-tidy: ${CLANG_TIDY_EXE}")
    set(ENABLE_CLANG_TIDY OFF CACHE BOOL "Enable clang-tidy integration")
    set(DO_CLANG_TIDY "${CLANG_TIDY_EXE}" "-checks=*")
else()
    message(STATUS "clang-tidy not found")
endif()

function(clang_tidy target)
    if(TARGET ${target})
        if(DO_CLANG_TIDY AND ENABLE_CLANG_TIDY)
            set_target_properties(${target} PROPERTIES
                C_CLANG_TIDY "${DO_CLANG_TIDY}"
                CXX_CLANG_TIDY "${DO_CLANG_TIDY}")
        endif()
    else()
        message(WARNING "Target ${target} does not exists.")
    endif()
endfunction()
