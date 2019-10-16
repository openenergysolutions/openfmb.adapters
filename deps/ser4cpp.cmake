include(FetchContent)

FetchContent_Declare(
    ser4cpp
    GIT_REPOSITORY https://github.com/automatak/ser4cpp.git
    GIT_TAG        master
    GIT_SHALLOW    ON
)

FetchContent_GetProperties(ser4cpp)
if(NOT ser4cpp_POPULATED)
    FetchContent_Populate(ser4cpp)
    add_subdirectory(${ser4cpp_SOURCE_DIR})
endif()
