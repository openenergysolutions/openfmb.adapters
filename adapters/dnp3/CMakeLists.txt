


set(DNP3_SOURCES
        src/dnp3/DNP3Factory.cpp
)

set(DNP3_HEADERS
        src/dnp3/DNP3Factory.h
)

add_library(dnp3adapter STATIC ${DNP3_SOURCES} ${DNP3_HEADERS})
target_link_libraries(dnp3adapter PUBLIC adapter-api)

