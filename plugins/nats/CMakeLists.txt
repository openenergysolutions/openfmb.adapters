
if(OPENFMB_LINK_STATIC)
	find_library(LIBNATS nats_static)
else()
	find_library(LIBNATS nats)
endif()

if(NOT LIBNATS)
	message(FATAL_ERROR "Nats library not found. Is cnats (https://github.com/nats-io/cnats) installed?")
else()
	message("LIBNATS is ${LIBNATS}")
endif()

set(NATS_PUBLIC_HEADERS
		include/nats/PluginFactory.h
)

set(NATS_SOURCES
		src/ConfigStrings.h
        src/Plugin.h
        src/Plugin.cpp
		src/PluginFactory.cpp
		src/Message.h
		src/Buffer.h
        src/NATSPublisher.h
		src/NATSSubscriber.h
        src/SubjectName.h
		src/SubjectName.cpp
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

add_subdirectory(./test)