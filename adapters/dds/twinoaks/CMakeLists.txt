
include("coredx.cmake")

find_library(DDS dds ${COREDX_LIB_DIR})
find_library(DDS_CPP dds_cpp ${COREDX_LIB_DIR})

set(SOURCES
        src/twinoaks/Conversions.cpp
        src/twinoaks/DDSAdapter.cpp
        src/twinoaks/DDSAdapterFactory.cpp
        src/twinoaks/generated/OpenFMB.cc
        src/twinoaks/generated/OpenFMBDataReader.cc
        src/twinoaks/generated/OpenFMBDataWriter.cc
        src/twinoaks/generated/OpenFMBTypeSupport.cc
        )

set(HEADERS
        src/twinoaks/Conversions.h
        src/twinoaks/DDSAdapter.h
        src/twinoaks/DDSAdapterFactory.h
        src/twinoaks/generated/OpenFMB.hh
        src/twinoaks/generated/OpenFMBDataReader.hh
        src/twinoaks/generated/OpenFMBDataWriter.hh
        src/twinoaks/generated/OpenFMBTypeSupport.hh
        )

# directories to be automatically formatted by astyle
set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/twinoaks/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/twinoaks/*.cpp
        PARENT_SCOPE
        )

add_library(twinoaks-dds-adapter STATIC ${SOURCES} ${HEADERS})
target_include_directories(twinoaks-dds-adapter PRIVATE ${COREDX_INCLUDE})
target_include_directories(twinoaks-dds-adapter INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(twinoaks-dds-adapter adapter-api ${DDS} ${DDS_CPP})

