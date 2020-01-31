include(FetchContent)

FetchContent_Declare(
    modbus-cpp
    GIT_REPOSITORY git@github.com:openenergysolutions/modbus-cpp.git
    GIT_TAG        97f932afbc52f81d42d28130a29d687e98fe5c34
)

FetchContent_GetProperties(modbus-cpp)
if(NOT modbus-cpp_POPULATED)
    FetchContent_Populate(modbus-cpp)
    add_subdirectory(${modbus-cpp_SOURCE_DIR})
endif()
