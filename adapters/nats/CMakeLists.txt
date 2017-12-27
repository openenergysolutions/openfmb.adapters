

set(NATS_HEADERS
        src/nats/NatsAdapter.h
        src/nats/NatsFactory.h
)

set(NATS_SOURCES
	src/nats/NatsAdapter.cpp
        src/nats/NatsFactory.cpp                
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/nats/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/nats/*.cpp
        PARENT_SCOPE
)

add_library(nats-adapter STATIC ${NATS_SOURCES} ${NATS_HEADERS})
target_link_libraries(nats-adapter PUBLIC adapter-api nats)
target_include_directories(nats-adapter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

