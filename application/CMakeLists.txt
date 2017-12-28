
set(OPENFMB_ADAPTER_SOURCES
        src/main.cpp
        src/ProtoBus.h
        src/ProtoBus.cpp
        src/AdapterRegistry.h
        src/AdapterRegistry.cpp
        src/Shutdown.h
        src/ConfigStrings.h
)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

# adapters that are always built regardless of configuration
set(ADAPTERS msg-logger-adapter)

if(OPENFMB_USE_DNP3)
    add_definitions(-DOPENFMB_USE_DNP3)
    list(APPEND ADAPTERS dnp3-adapter)
endif()

if(OPENFMB_USE_NATS)
    add_definitions(-DOPENFMB_USE_NATS)
    list(APPEND ADAPTERS nats-adapter)
endif()

if(OPENFMB_USE_TWINOAKS_DDS)
    add_definitions(-DOPENFMB_USE_TWINOAKS_DDS)
    list(APPEND ADAPTERS twinoaks-dds-adapter)
endif()

message("Application will be built with support for: ${ADAPTERS}")

add_executable(openfmb-adapter ${OPENFMB_ADAPTER_SOURCES})
target_link_libraries(openfmb-adapter ${ADAPTERS} pthread)

