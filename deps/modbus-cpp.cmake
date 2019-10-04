include(FetchContent)

FetchContent_Declare(
    modbus-cpp
    GIT_REPOSITORY https://github.com/openenergysolutions/modbus-cpp.git
    GIT_TAG        master
    GIT_SHALLOW    ON
)

FetchContent_GetProperties(modbus-cpp)
if(NOT modbus-cpp_POPULATED)
    FetchContent_Populate(modbus-cpp)
    add_subdirectory(${modbus-cpp_SOURCE_DIR})
endif()
