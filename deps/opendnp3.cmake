include(FetchContent)

FetchContent_Declare(
    opendnp3
    GIT_REPOSITORY https://github.com/dnp3/opendnp3.git
    GIT_TAG        develop
    GIT_SHALLOW    ON
)

FetchContent_GetProperties(opendnp3)
if(NOT opendnp3_POPULATED)
    FetchContent_Populate(opendnp3)
    add_subdirectory(${opendnp3_SOURCE_DIR})
endif()