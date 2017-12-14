

set(DNP3_HEADERS
        src/dnp3/DNP3MasterAdapter.h
        src/dnp3/DNP3MasterFactory.h
        src/dnp3/PointMap.h
        src/dnp3/SOEHandler.h
)

set(DNP3_SOURCES
        src/dnp3/DNP3MasterFactory.cpp
        src/dnp3/DNP3MasterAdapter.cpp
        src/dnp3/PointMap.cpp
        src/dnp3/SOEHandler.cpp
        src/dnp3/LogAdapter.h
)

set(DNP3_LIBS asiodnp3 asiopal opendnp3 openpal)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dnp3/*.cpp
        PARENT_SCOPE
)

add_library(dnp3-adapter STATIC ${DNP3_SOURCES} ${DNP3_HEADERS})
target_link_libraries(dnp3-adapter PUBLIC adapter-api ${DNP3_LIBS})
target_include_directories(dnp3-adapter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

