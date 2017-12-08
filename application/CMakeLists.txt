
set(OPENFMB_ADAPTER_SOURCES
    src/main.cpp
    src/ProtoBus.h
    src/ProtoBus.cpp
    src/AdapterRegistry.h
    src/AdapterRegistry.cpp
)

add_executable(openfmb-adapter ${OPENFMB_ADAPTER_SOURCES})
target_link_libraries(openfmb-adapter dnp3-adapter)

