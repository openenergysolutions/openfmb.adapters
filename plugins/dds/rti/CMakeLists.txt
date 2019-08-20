if(NOT DEFINED CONNEXTDDS_DIR)	
    message(FATAL_ERROR "You must define CONNEXTDDS_DIR when configuring CMake or via environment")
endif()
message("CONNEXTDDS_DIR is ${CONNEXTDDS_DIR}")
list(APPEND CMAKE_MODULE_PATH ${CONNEXTDDS_DIR}/resource/cmake)
cmake_policy(SET CMP0057 NEW)

find_package(RTICodeGenerator REQUIRED)
find_package(RTIConnextDDS REQUIRED)

set(DDS_GEN_PATH ${CMAKE_CURRENT_BINARY_DIR}/rtidds-generated-sources)

set(IDL_INPUT_FILE ${CMAKE_SOURCE_DIR}/deps/openfmb-schemas/idl/OpenFMB-IDL.idl)

set(DDS_SOURCES
    ${DDS_GEN_PATH}/OpenFMB-IDL.cxx
    ${DDS_GEN_PATH}/OpenFMB-IDL.hpp
    ${DDS_GEN_PATH}/OpenFMB-IDLPlugin.cxx
    ${DDS_GEN_PATH}/OpenFMB-IDLPlugin.hpp
)

add_custom_command(
    OUTPUT ${DDS_SOURCES}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${DDS_GEN_PATH}
    COMMAND ${RTICODEGEN} -language C++11 -update typefiles -inputIdl ${IDL_INPUT_FILE} -d ${DDS_GEN_PATH}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS ${IDL_INPUT_FILE}
    COMMENT "Generating RTI DDS bindings..."
)

add_executable(rti-test main.cpp ${DDS_SOURCES})
target_include_directories(rti-test PRIVATE ${DDS_GEN_PATH})
target_link_libraries(rti-test PRIVATE RTIConnextDDS::cpp2_api)

#add_library(rti-dds-plugin STATIC ${SOURCES} ${HEADERS} ${DDS_SOURCES})
#target_link_libraries(rti-dds-plugin PRIVATE RTIConnextDDS::cpp_api)
