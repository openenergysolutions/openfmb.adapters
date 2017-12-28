find_library(LIBNATS nats)

if(NOT LIBNATS)
	message(FATAL_ERROR "Nats library not found. Is cnats (https://github.com/nats-io/cnats) installed?")
endif()

set(NATS_HEADERS
        src/nats/NatsAdapter.h
        src/nats/NatsFactory.h
)

set(NATS_SOURCES
	src/nats/NatsAdapter.cpp
        src/nats/NatsFactory.cpp
        src/nats/SynchronizedQueue.h src/nats/Message.h src/nats/Buffer.h src/nats/Subscriber.h)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/nats/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/nats/*.cpp
        PARENT_SCOPE
)

add_library(nats-adapter STATIC ${NATS_SOURCES} ${NATS_HEADERS})
target_link_libraries(nats-adapter PUBLIC adapter-api ${LIBNATS})
target_include_directories(nats-adapter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

