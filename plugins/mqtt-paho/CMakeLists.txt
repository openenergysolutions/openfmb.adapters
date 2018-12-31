
find_library(LIBPAHOCPP paho-mqttpp3)
if(NOT LIBPAHOCPP)
	message(FATAL_ERROR "PAHO MQTT C++ library not found.")
else()
	message("LIBPAHOCPP is ${LIBPAHOCPP}")
endif()

find_library(LIBPAHOC paho-mqtt3as-static) # this is the a == asynchronous s == with SSL support version of the static library
if(NOT LIBPAHOC)
    message(FATAL_ERROR "PAHO MQTT C library not found.")
else()
    message("LIBPAHOC is ${LIBPAHOC}")
endif()

find_package(OpenSSL REQUIRED)

set(PUBLIC_HEADERS
		include/mqtt-paho/PluginFactory.h
)

set(SOURCES
		src/ConfigStrings.h
		src/MQTTPublisher.h
		src/Plugin.cpp
		src/PluginFactory.cpp
		src/QueueTypes.h
		src/TopicNameSuffix.h
		src/TopicNameSuffix.cpp
		src/SubscriptionRegistry.cpp
)

add_library(mqtt-plugin STATIC ${PUBLIC_HEADERS} ${SOURCES})
target_include_directories(mqtt-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(mqtt-plugin PUBLIC adapter-util PRIVATE ${LIBPAHOCPP} ${LIBPAHOC} ${OPENSSL_LIBRARIES})

add_subdirectory(./test)