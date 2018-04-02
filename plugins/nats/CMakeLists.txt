find_library(LIBNATS nats)

if(NOT LIBNATS)
	message(FATAL_ERROR "Nats library not found. Is cnats (https://github.com/nats-io/cnats) installed?")
endif()

set(NATS_PUBLIC_HEADERS
		include/nats/PluginFactory.h
)

set(NATS_SOURCES
		src/ConfigStrings.h
        src/Plugin.h
        src/Plugin.cpp
		src/PluginFactory.cpp
        src/SynchronizedQueue.h
		src/Message.h
		src/Buffer.h
        src/NATSPublisher.h
		src/NATSSubscriber.h
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
		${CMAKE_CURRENT_SOURCE_DIR}/include/nats/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_library(nats-plugin STATIC ${NATS_PUBLIC_HEADERS} ${NATS_SOURCES})
target_link_libraries(nats-plugin PUBLIC adapter-api ${LIBNATS})
target_include_directories(nats-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

