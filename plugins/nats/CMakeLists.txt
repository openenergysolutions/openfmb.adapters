
if(OPENFMB_LINK_STATIC)
	find_library(LIBNATS nats_static)
	find_package(OpenSSL REQUIRED)
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
        src/SubjectNameSuffix.h
        src/SubjectNameSuffix.cpp
)

add_library(nats-plugin STATIC ${NATS_PUBLIC_HEADERS} ${NATS_SOURCES})
target_include_directories(nats-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(nats-plugin PUBLIC adapter-util PRIVATE ${LIBNATS})
if(OPENFMB_LINK_STATIC)
	target_link_libraries(nats-plugin PRIVATE ${OPENSSL_LIBRARIES})
endif()
clang_tidy(nats-plugin)
clang_format(nats-plugin)

add_subdirectory(./test)