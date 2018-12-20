
find_library(LIBPAHOCPP paho-mqttpp3)

if(NOT LIBPAHOCPP)
	message(FATAL_ERROR "PAHO C++ MQTT  library not found.")
else()
	message("LIBPAHOCPP is ${LIBPAHOCPP}")
endif()

set(PUBLIC_HEADERS
		include/mqtt-paho/PluginFactory.h
)

set(SOURCES
		src/PluginFactory.cpp
		src/Plugin.cpp
        src/MQTTPublisher.h src/QueueTypes.h)

add_library(mqtt-plugin STATIC ${PUBLIC_HEADERS} ${SOURCES})
target_include_directories(mqtt-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(mqtt-plugin PUBLIC adapter-util PRIVATE ${LIBPAHOCPP})

add_subdirectory(./test)