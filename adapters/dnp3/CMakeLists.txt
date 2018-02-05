find_package(Boost)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Unable to find BOOST. Required for UUID generation.")
endif()

set(DNP3_HEADERS
        src/dnp3/ConfigKeys.h
        src/dnp3/DNP3Adapter.h
        src/dnp3/DNP3Factory.h
        src/dnp3/IProfileMapping.h
        src/dnp3/LogAdapter.h
        src/dnp3/PointMap.h
        src/dnp3/ProfileMapping.h
        src/dnp3/SOEHandler.h
)

set(DNP3_SOURCES
        src/dnp3/DNP3Factory.cpp
        src/dnp3/DNP3Adapter.cpp
        src/dnp3/SOEHandler.cpp
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
target_include_directories(adapter-api INTERFACE ${Boost_INCLUDE_DIRS})

