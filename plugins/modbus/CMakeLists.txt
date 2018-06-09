set(MODBUS_PUBLIC_HEADERS
        include/modbus/PluginFactory.h
)

set(MODBUS_SOURCES
        src/modbus/PublishConfigReadVisitor.h
        src/modbus/ConfigStrings.h
        src/modbus/HeartbeatTransaction.h
        src/modbus/HeartbeatTransaction.cpp
        src/modbus/IConfigurationBuilder.h
        src/modbus/IRegister.h
        src/modbus/IPollHandler.h
        src/modbus/IRequestBuilder.h
        src/modbus/MappingType.h
        src/modbus/MappingType.cpp
        src/modbus/ConfigWriteVisitor.h
        src/modbus/PollHandler.h
        src/modbus/PollHandler.cpp
        src/modbus/Plugin.h
        src/modbus/Plugin.cpp
        src/modbus/PluginFactory.cpp
        src/modbus/Register16.h
        src/modbus/Register32.h
        src/modbus/Source.h
        src/modbus/Source.cpp
        src/modbus/ICachedValue.h
        src/modbus/TransactionProcessor.h
        src/modbus/TransactionProcessor.cpp
        src/modbus/ITransaction.h
        src/modbus/PollTransaction.h
        src/modbus/PollTransaction.cpp
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/modbus/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/modbus/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/modbus/*.cpp
        PARENT_SCOPE
)

add_library(modbus-plugin STATIC ${MODBUS_PUBLIC_HEADERS} ${MODBUS_SOURCES})
target_link_libraries(modbus-plugin PUBLIC adapter-api modbus-cpp)
target_include_directories(modbus-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(./test)
