
set(openfmb_adapter_src
    ./src/ArgumentParser.h
    ./src/ArgumentParser.cpp
    ./src/main.cpp
    ./src/MessageBus.h
    ./src/PluginRegistry.h
    ./src/PluginRegistry.cpp
    ./src/Shutdown.h
    ./src/ConfigKeys.h
    ./src/LoggerConfig.h
    ./src/LoggerConfig.cpp
    ./src/SubscriptionRegistry.h
        ../adapter-util/include/adapter-util/schedule/ScheduleSplit.h
        ../adapter-util/src/schedule/ScheduleSplit.cpp)

SET(CPP_FORMAT_DIRS
    ${CPP_FORMAT_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    PARENT_SCOPE
)

# Build plugin list
set(plugins log-plugin capture-plugin replay-plugin)
set(plugin_definitions)

if(OPENFMB_USE_DNP3)
    list(APPEND plugins dnp3-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_DNP3)
endif()

if(OPENFMB_USE_MODBUS)
    list(APPEND plugins modbus-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_MODBUS)
endif()

if(OPENFMB_USE_GOOSE)
    list(APPEND plugins goose-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_GOOSE)
endif()

if(OPENFMB_USE_MQTT)
    list(APPEND plugins mqtt-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_MQTT)
endif()

if(OPENFMB_USE_NATS)
    list(APPEND plugins nats-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_NATS)
endif()

if(OPENFMB_USE_TWINOAKS_DDS)
    list(APPEND plugins twinoaks-dds-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_TWINOAKS_DDS)
endif()

if(OPENFMB_USE_RTI_DDS)
    list(APPEND plugins rti-dds-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_RTI_DDS)
endif()

if(OPENFMB_USE_TIMESCALEDB)
    list(APPEND plugins timescaledb-plugin)
    list(APPEND plugin_definitions OPENFMB_USE_TIMESCALEDB)
endif()

message("Application will be built with support for: ${ADAPTERS}")

# Application
find_package(Threads)
add_executable(openfmb-adapter ${openfmb_adapter_src})
target_link_libraries(openfmb-adapter PRIVATE ${plugins} Threads::Threads)
target_include_directories(openfmb-adapter PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../deps/argagg/include)
target_compile_definitions(openfmb-adapter PRIVATE ${plugin_definitions})
clang_tidy(openfmb-adapter)
clang_format(openfmb-adapter)
install(TARGETS openfmb-adapter DESTINATION bin)
