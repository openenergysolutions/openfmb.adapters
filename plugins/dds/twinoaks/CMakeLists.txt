
include("coredx.cmake")

find_library(DDS dds ${COREDX_LIB_DIR})
find_library(DDS_CPP dds_cpp ${COREDX_LIB_DIR})

set(DDS_GEN_PATH ${CMAKE_CURRENT_BINARY_DIR}/generated-sources)

set(IDL_INPUT_FILE ${CMAKE_CURRENT_SOURCE_DIR}/OpenFMB-3.0.0.idl)

set(DDS_SOURCES
        ${DDS_GEN_PATH}/OpenFMB-3.0.0.cc
        ${DDS_GEN_PATH}/OpenFMB-3.0.0.hh
        ${DDS_GEN_PATH}/OpenFMB-3.0.0DataReader.cc
        ${DDS_GEN_PATH}/OpenFMB-3.0.0DataReader.hh
        ${DDS_GEN_PATH}/OpenFMB-3.0.0DataWriter.cc
        ${DDS_GEN_PATH}/OpenFMB-3.0.0DataWriter.hh
        ${DDS_GEN_PATH}/OpenFMB-3.0.0TypeSupport.cc
        ${DDS_GEN_PATH}/OpenFMB-3.0.0TypeSupport.hh
)

set(SOURCES
        src/twinoaks/DDSPlugin.cpp
        src/twinoaks/DDSPluginFactory.cpp
        src/twinoaks/generated/ConvertFromProto.cpp
        src/twinoaks/generated/ConvertToProto.cpp
)

set(HEADERS
        src/twinoaks/DDSPlugin.h
        src/twinoaks/DDSPluginFactory.h
        src/twinoaks/ConfigKeys.h
        src/twinoaks/NamespaceAlias.h
        src/twinoaks/generated/ConvertFromProto.h
        src/twinoaks/generated/ConvertToProto.h
        src/twinoaks/ConvertFromProtoHelpers.h
        src/twinoaks/ConvertToProtoHelpers.h)

add_custom_command(
    OUTPUT ${DDS_SOURCES}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${DDS_GEN_PATH}
    COMMAND ${COREDX_TOP}/host/bin/Linux_2.6_x86_64_gcc5_coredx_ddl -l cpp -F -f ${IDL_INPUT_FILE} -d ${DDS_GEN_PATH}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS ${IDL_INPUT_FILE}
    COMMENT "Generating dds bindings..."
)

add_library(twinoaks-dds-plugin STATIC ${SOURCES} ${HEADERS} ${DDS_SOURCES})
target_include_directories(twinoaks-dds-plugin PRIVATE ${COREDX_INCLUDE})
target_include_directories(twinoaks-dds-plugin INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(twinoaks-dds-plugin PRIVATE ${DDS_GEN_PATH})
target_link_libraries(twinoaks-dds-plugin adapter-api ${DDS} ${DDS_CPP} dl)
clang_tidy(twinoaks-dds-plugin)
clang_format(twinoaks-dds-plugin)
