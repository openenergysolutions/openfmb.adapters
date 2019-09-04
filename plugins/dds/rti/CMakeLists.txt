# Find RTI DDS dependency
if(NOT DEFINED CONNEXTDDS_DIR)	
    message(FATAL_ERROR "You must define CONNEXTDDS_DIR when configuring CMake or via environment")
endif()
message("CONNEXTDDS_DIR is ${CONNEXTDDS_DIR}")
list(APPEND CMAKE_MODULE_PATH ${CONNEXTDDS_DIR}/resource/cmake)
cmake_policy(SET CMP0057 NEW)

find_package(RTICodeGenerator REQUIRED)
find_package(RTIConnextDDS REQUIRED)

# Generate RTI DDS bindings
set(dds_gen_path ${CMAKE_CURRENT_BINARY_DIR}/rtidds-generated-sources)

set(idl_input_file ${CMAKE_SOURCE_DIR}/deps/openfmb-schemas/idl/OpenFMB-IDL.idl)

set(dds_sources
    ${dds_gen_path}/OpenFMB-IDL.cxx
    ${dds_gen_path}/OpenFMB-IDL.hpp
    ${dds_gen_path}/OpenFMB-IDLPlugin.cxx
    ${dds_gen_path}/OpenFMB-IDLPlugin.hpp
)

add_custom_command(
    OUTPUT ${dds_sources}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${dds_gen_path}
    COMMAND ${RTICODEGEN} -language C++11 -update typefiles -inputIdl ${idl_input_file} -d ${dds_gen_path}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS ${idl_input_file}
    COMMENT "Generating RTI DDS bindings..."
)

# Actual plugin
set(rti_dds_plugin_public_headers
    ./include/rti/PluginFactory.h
)

set(rti_dds_plugin_private_headers
    ./src/ConfigKeys.h
    ./src/DDSPlugin.h
    ./src/DDSPublisher.h
    ./src/DDSSubscriber.h
    ./src/IDDSSubscriber.h

    ./src/generated/ConvertFromProto.h
    ./src/generated/ConvertToProto.h
    ./src/generated/PublisherFactory.h
    ./src/generated/SubscriberFactory.h
    ./src/generated/TopicRepository.h
)

set(rti_dds_plugin_src
    ./src/DDSPlugin.cpp
    ./src/PluginFactory.cpp

    ./src/generated/ConvertFromProto.cpp
    ./src/generated/ConvertToProto.cpp
    ./src/generated/TopicRepository.cpp
)

add_library(rti-dds-plugin STATIC ${rti_dds_plugin_public_headers} ${rti_dds_plugin_private_headers} ${rti_dds_plugin_src} ${dds_sources})
target_include_directories(rti-dds-plugin
    PUBLIC ./include
    PRIVATE ./src ${dds_gen_path}
)
target_link_libraries(rti-dds-plugin PRIVATE RTIConnextDDS::cpp2_api adapter-util)
clang_tidy(rti-dds-plugin)
clang_format(rti-dds-plugin EXCLUDES "/generated/")

add_subdirectory(./test)
