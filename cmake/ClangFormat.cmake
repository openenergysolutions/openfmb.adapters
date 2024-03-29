# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

find_program(CLANG_FORMAT_EXE
    NAMES clang-format
)
set_property(GLOBAL PROPERTY CLANG_FORMAT_FILES)

function(clang_format target)

    set(options)
    set(oneValueArgs)
    set(multiValueArgs EXCLUDES)
    cmake_parse_arguments(clang_format "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    if(TARGET ${target})
        get_target_property(source_files ${target} SOURCES)
        get_property(all_source_files GLOBAL PROPERTY CLANG_FORMAT_FILES)
        foreach(file ${source_files})

            unset(excluded)

            foreach(exclude ${clang_format_EXCLUDES})
                STRING(FIND ${file} ${exclude} position)
                if(NOT ${position} EQUAL -1)
                    set(excluded true)
                endif()
            endforeach()

            if(NOT DEFINED excluded)
                get_filename_component(relative_file ${file} ABSOLUTE)
                list(APPEND all_source_files ${relative_file})
            endif()

        endforeach()
        set_property(GLOBAL PROPERTY CLANG_FORMAT_FILES "${all_source_files}")
    else()
        message(WARNING "Target ${target} does not exists.")
    endif()

endfunction()


function(define_clang_format)
    if(CLANG_FORMAT_EXE)
        message(STATUS "Using clang-format: ${CLANG_FORMAT_EXE}")
        get_property(all_files GLOBAL PROPERTY CLANG_FORMAT_FILES)
        add_custom_target(clang-format
            COMMAND "${CLANG_FORMAT_EXE}" -i -style=file -fallback-style=none ${all_files}
            COMMENT "Format source files"
        )
    else()
        message(STATUS "clang-format not found")
    endif()
endfunction()
