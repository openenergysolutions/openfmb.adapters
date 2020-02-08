
set(PUBLIC_HEADERS
        include/schema-util/Types.h
)

set(PRIVATE_HEADERS)

set(PRIVATE_SOURCES
        src/Types.cpp
)

add_library(schema-util ${PUBLIC_HEADERS} ${PRIVATE_HEADERS} ${PRIVATE_SOURCES})
target_include_directories(schema-util PRIVATE "./include")
clang_tidy(schema-util)
clang_format(schema-util)
