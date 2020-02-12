
set(PUBLIC_HEADERS
        include/schema-util/JSONSchemaPrinter.h
        include/schema-util/Types.h)

set(PRIVATE_HEADERS src/JSONOutput.h)

set(PRIVATE_SOURCES
        src/Types.cpp
        src/JSONSchemaPrinter.cpp )

add_library(schema-util ${PUBLIC_HEADERS} ${PRIVATE_HEADERS} ${PRIVATE_SOURCES})
target_include_directories(schema-util PUBLIC "./include")
clang_tidy(schema-util)
clang_format(schema-util)

add_subdirectory(./test)