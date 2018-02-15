
include("coredx.cmake")

find_library(DDS dds ${COREDX_LIB_DIR})
find_library(DDS_CPP dds_cpp ${COREDX_LIB_DIR})

set(DDS_PATH ${CMAKE_SOURCE_DIR}/deps/openfmb-dds/toc/cpp)

set(DDS_SOURCES
        ${DDS_PATH}/OpenFMB-3.0.0.cc
        ${DDS_PATH}/OpenFMB-3.0.0.hh
        ${DDS_PATH}/OpenFMB-3.0.0DataReader.cc
        ${DDS_PATH}/OpenFMB-3.0.0DataReader.hh
        ${DDS_PATH}/OpenFMB-3.0.0DataWriter.cc
        ${DDS_PATH}/OpenFMB-3.0.0DataWriter.hh
        ${DDS_PATH}/OpenFMB-3.0.0TypeSupport.cc
        ${DDS_PATH}/OpenFMB-3.0.0TypeSupport.hh
)

set(SOURCES
        src/twinoaks/DDSAdapter.cpp
        src/twinoaks/DDSAdapterFactory.cpp
        src/twinoaks/generated/ConvertFromProto.cpp
        src/twinoaks/generated/ConvertToProto.cpp
)

set(HEADERS
        src/twinoaks/DDSAdapter.h
        src/twinoaks/DDSAdapterFactory.h
        src/twinoaks/ConfigKeys.h
        src/twinoaks/generated/ConvertFromProto.h
        src/twinoaks/generated/ConvertToProto.h
        src/twinoaks/ConvertFromProtoHelpers.h
)

# directories to be automatically formatted by astyle
set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/twinoaks/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/twinoaks/*.cpp
        PARENT_SCOPE
)

add_library(twinoaks-dds-adapter STATIC ${SOURCES} ${HEADERS} ${DDS_SOURCES})
target_include_directories(twinoaks-dds-adapter PRIVATE ${COREDX_INCLUDE})
target_include_directories(twinoaks-dds-adapter INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(twinoaks-dds-adapter PRIVATE ${DDS_PATH})
target_link_libraries(twinoaks-dds-adapter adapter-api ${DDS} ${DDS_CPP})

