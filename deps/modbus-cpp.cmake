include(FetchContent)

FetchContent_Declare(
    modbus-cpp
    GIT_REPOSITORY git@github.com:openenergysolutions/modbus-cpp.git
    GIT_TAG        e22d21f79f0e6267ae0aa68ce5b8f6ae67dba18e
)

FetchContent_GetProperties(modbus-cpp)
if(NOT modbus-cpp_POPULATED)
    FetchContent_Populate(modbus-cpp)
    add_subdirectory(${modbus-cpp_SOURCE_DIR})
endif()
