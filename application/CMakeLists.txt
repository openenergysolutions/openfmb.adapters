
set(OPENFMB_ADAPTER_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ProtoBus.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ProtoBus.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/AdapterRegistry.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/AdapterRegistry.cpp
)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

SET(ADAPTERS dnp3-adapter console-adapter)

add_executable(openfmb-adapter ${OPENFMB_ADAPTER_SOURCES})
target_link_libraries(openfmb-adapter ${ADAPTERS})

