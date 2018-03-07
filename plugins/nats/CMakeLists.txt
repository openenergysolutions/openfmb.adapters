find_library(LIBNATS nats)

if(NOT LIBNATS)
	message(FATAL_ERROR "Nats library not found. Is cnats (https://github.com/nats-io/cnats) installed?")
endif()

set(NATS_HEADERS
        src/nats/NatsPlugin.h
        src/nats/NatsPluginFactory.h
)

set(NATS_SOURCES
        src/nats/NatsPlugin.cpp
        src/nats/NatsPluginFactory.cpp
        src/nats/SynchronizedQueue.h
		src/nats/Message.h
		src/nats/Buffer.h
		src/nats/Subscriber.h
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/nats/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/nats/*.cpp
        PARENT_SCOPE
)

add_library(nats-plugin STATIC ${NATS_SOURCES} ${NATS_HEADERS})
target_link_libraries(nats-plugin PUBLIC adapter-api ${LIBNATS})
target_include_directories(nats-plugin INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

