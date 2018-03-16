
set(MODBUS_HEADERS
        src/modbus/ConfigStrings.h
        src/modbus/ModbusPlugin.h
        src/modbus/ModbusPluginFactory.h
)

set(MODBUS_SOURCES
        src/modbus/ModbusPlugin.cpp
        src/modbus/ModbusPluginFactory.cpp
        src/modbus/ModbusConfigWriteVisitor.h
        src/modbus/Register32.h)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/modbus/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/modbus/*.cpp
        PARENT_SCOPE
)

add_library(modbus-plugin STATIC ${MODBUS_HEADERS} ${MODBUS_SOURCES})
target_link_libraries(modbus-plugin PUBLIC adapter-api modbus-cpp)
target_include_directories(modbus-plugin INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)


