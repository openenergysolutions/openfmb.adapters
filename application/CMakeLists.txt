

set(OPENFMB_ADAPTER_SOURCES
	src/main.cpp
)

add_executable(openfmb-adapter ${OPENFMB_ADAPTER_SOURCES})
target_link_libraries(openfmb-adapter adapter-api)

