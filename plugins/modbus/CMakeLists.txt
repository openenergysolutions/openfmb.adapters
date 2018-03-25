set(MODBUS_PUBLIC_HEADERS
        include/modbus/PluginFactory.h
)

set(MODBUS_SOURCES
        src/modbus/MappingLoader.h
        src/modbus/ConfigStrings.h
        src/modbus/IRegister.h
        src/modbus/IProfileMapping.h
        src/modbus/MappingType.h
        src/modbus/MappingType.cpp
        src/modbus/ConfigWriteVisitor.h
        src/modbus/Plugin.h
        src/modbus/Plugin.cpp
        src/modbus/PluginFactory.cpp
        src/modbus/ProfileMapping.h
        src/modbus/Register16.h
        src/modbus/Register32.h
        src/modbus/ICachedValue.h
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/modbus/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/modbus/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/modbus/*.cpp
        PARENT_SCOPE
)

add_library(modbus-plugin STATIC ${MODBUS_SOURCES})
target_link_libraries(modbus-plugin PUBLIC adapter-api modbus-cpp)
target_include_directories(modbus-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


