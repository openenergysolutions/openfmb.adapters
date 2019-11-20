include(FetchContent)

FetchContent_Declare(
    log4cpp
    URL      https://github.com/automatak/log4cpp/archive/5e54dbdbf80712f472baa1a72e25e505d62f05bd.zip
    URL_HASH SHA1=9F2653C3F98762B743054B7547F50132031684CF
)

FetchContent_GetProperties(log4cpp)
if(NOT log4cpp_POPULATED)
    FetchContent_Populate(log4cpp)
    add_subdirectory(${log4cpp_SOURCE_DIR})
endif()
