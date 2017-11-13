


set(DNP3_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/DNP3Factory.cpp
)

set(DNP3_HEADERS
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/DNP3Factory.h
)

add_library(dnp3adapter STATIC ${DNP3_SOURCES} ${DNP3_HEADERS})
target_link_libraries(dnp3adapter PUBLIC adapter-api)
target_include_directories(dnp3adapter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

