set(DNP3_PUBLIC_HEADERS
        include/dnp3/PluginFactory.h
)

set(DNP3_SOURCES
        src/dnp3/ConfigKeys.h
        src/dnp3/Plugin.h
        src/dnp3/IProfileMapping.h
        src/dnp3/LogAdapter.h
        src/dnp3/ProfileMapping.h
        src/dnp3/ProfileMappingReader.h
        src/dnp3/SOEHandler.h
        src/dnp3/PluginFactory.cpp
        src/dnp3/Plugin.cpp
)

set(DNP3_LIBS asiodnp3 asiopal opendnp3 openpal)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/include/dnp3/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/*.cpp
        PARENT_SCOPE
)

add_library(dnp3-plugin STATIC ${DNP3_SOURCES} ${DNP3_PUBLIC_HEADERS})
target_link_libraries(dnp3-plugin PUBLIC adapter-api ${DNP3_LIBS})
target_include_directories(dnp3-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(dnp3-plugin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)


