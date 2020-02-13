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
