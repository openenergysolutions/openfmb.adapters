find_program(CLANG_FORMAT_EXE
    NAMES clang-format
)
set_property(GLOBAL PROPERTY CLANG_FORMAT_FILES)

function(clang_format target)
    if(TARGET ${target})
        get_target_property(source_files ${target} SOURCES)
        get_property(all_source_files GLOBAL PROPERTY CLANG_FORMAT_FILES)
        foreach(file ${source_files})
            get_filename_component(relative_file ${file} ABSOLUTE)
            list(APPEND all_source_files ${relative_file})
        endforeach()
        set_property(GLOBAL PROPERTY CLANG_FORMAT_FILES "${all_source_files}")
        message(STATUS ${CLANG_FORMAT_FILES})
    else()
        message(WARNING "Target ${target} does not exists.")
    endif()
endfunction()

function(define_clang_format)
    if(CLANG_FORMAT_EXE)
        message(STATUS "Using clang-format: ${CLANG_FORMAT_EXE}")
        get_property(all_files GLOBAL PROPERTY CLANG_FORMAT_FILES)
        add_custom_target(clang-format
            COMMAND "${CLANG_FORMAT_EXE}" -i -style=WebKit ${all_files}
            COMMENT "Format source files"
        )
    else()
        message(STATUS "clang-format not found")
    endif()
endfunction()
