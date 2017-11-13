

set(OPENFMB_ADAPTER_SOURCES
    src/main.cpp
    src/ProtoBus.h
    src/ProtoBus.cpp
)

add_executable(openfmb-adapter ${OPENFMB_ADAPTER_SOURCES})
target_link_libraries(openfmb-adapter adapter-api)

