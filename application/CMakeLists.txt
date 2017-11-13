

set(OPENFMB_ADAPTER_SOURCES
    src/main.cpp
    src/ProtoBus.h
    src/ProtoBus.cpp
)

add_executable(openfmb-adapter ${OPENFMB_ADAPTER_SOURCES})
#target_include_directories(openfmb-adapter PRIVATE "${CMAKE_SOURCE_DIR}/adapter-api/src")
target_link_libraries(openfmb-adapter adapter-api)

