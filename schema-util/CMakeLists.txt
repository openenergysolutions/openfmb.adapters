# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(PUBLIC_HEADERS
        include/schema-util/Builder.h
        include/schema-util/Types.h include/schema-util/IProperty.h)

set(PRIVATE_HEADERS)

set(PRIVATE_SOURCES
        src/Builder.cpp
        src/JSONOutput.h
        src/JSONSchemaPrinter.h
        src/JSONSchemaPrinter.cpp
        src/JSONWriter.h
        src/JSONWriter.cpp
        src/Types.cpp)

add_library(schema-util ${PUBLIC_HEADERS} ${PRIVATE_HEADERS} ${PRIVATE_SOURCES})
target_include_directories(schema-util PUBLIC "./include")
clang_tidy(schema-util)
clang_format(schema-util)

add_subdirectory(./test)