include(FetchContent)

FetchContent_Declare(
    goose-cpp
    GIT_REPOSITORY https://github.com/openenergysolutions/goose-cpp.git
    GIT_TAG        develop
    GIT_SHALLOW    ON
)

FetchContent_GetProperties(goose-cpp)
if(NOT goose-cpp_POPULATED)
    FetchContent_Populate(goose-cpp)
    add_subdirectory(${goose-cpp_SOURCE_DIR})
endif()
