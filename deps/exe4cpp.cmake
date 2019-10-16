include(FetchContent)

FetchContent_Declare(
    exe4cpp
    GIT_REPOSITORY https://github.com/automatak/exe4cpp.git
    GIT_TAG        asio-1-12-2
    GIT_SHALLOW    ON
)

FetchContent_GetProperties(exe4cpp)
if(NOT exe4cpp_POPULATED)
    FetchContent_Populate(exe4cpp)
    add_subdirectory(${exe4cpp_SOURCE_DIR})
endif()
