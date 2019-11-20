include(FetchContent)

FetchContent_Declare(
    opendnp3
    URL      https://github.com/dnp3/opendnp3/archive/c1e43b9b38094f222af04cba31dcffb9bdb95bf9.zip
    URL_HASH SHA1=91DBC4D504925ABFAF2D25FD6FA2328F65262478
)

FetchContent_GetProperties(opendnp3)
if(NOT opendnp3_POPULATED)
    FetchContent_Populate(opendnp3)
    add_subdirectory(${opendnp3_SOURCE_DIR})
endif()
