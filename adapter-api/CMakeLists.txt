find_library(PROTOBUF_LIBRARY protobuf)

if(NOT PROTOBUF_LIBRARY)
	message(FATAL_ERROR "protobuf library could not be found. Is it installed on your system?")
else()
	message("Protobuf library is: ${PROTOBUF_LIBRARY}")
endif()

find_program(PROTOBUF_COMPILER protoc)

if(NOT PROTOBUF_COMPILER)
	message(FATAL_ERROR "could not find protoc (protobuf compiler). Is it installed on your system?")
else()
	message("Protobuf compiler found")
endif()

# the base directory where the protos live
set(PROTO_INPUT_DIR ${CMAKE_SOURCE_DIR}/deps/openfmb-protobuf/proto/openfmb)
# the base diretory where the protos will be generated
set(PROTO_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/proto)

# to avoid a lot of boilerplate, we list the module names
# and then use this list to build the header/source/proto file lists
set(PROTO_MODULES
        breaker
        common
        ess
        generation
        load
        recloser
        regulator
        resource
        solar
        switch
)

FUNCTION(set_proto_output_files var extension)
    SET(listVar "")
    FOREACH(f ${PROTO_MODULES})
        LIST(APPEND listVar "${PROTO_OUTPUT_DIR}/${f}module/${f}module.${extension}")
    ENDFOREACH(f)
    LIST(APPEND listVar "${PROTO_OUTPUT_DIR}/uml.${extension}")
    SET(${var} "${listVar}" PARENT_SCOPE)
ENDFUNCTION(set_proto_output_files)

FUNCTION(set_proto_input_files var)
    SET(listVar "")
    FOREACH(f ${PROTO_MODULES})
        LIST(APPEND listVar "${PROTO_INPUT_DIR}/${f}module/${f}module.proto")
    ENDFOREACH(f)
    LIST(APPEND listVar "${PROTO_INPUT_DIR}/uml.proto")
    SET(${var} "${listVar}" PARENT_SCOPE)
ENDFUNCTION(set_proto_input_files)

set_proto_output_files(PROTO_HEADERS "pb.h")
set_proto_output_files(PROTO_SOURCES "pb.cc")
set_proto_input_files(PROTO_INPUT_FILES)

set(API_HEADERS
    src/adapter-api/IAdapter.h
    src/adapter-api/ISubscriber.h
    src/adapter-api/IProtoPublishers.h
    src/adapter-api/IProtoSubscribers.h
    src/adapter-api/Logger.h
    src/adapter-api/util/Exception.h
    src/adapter-api/util/StringUtil.h
    src/adapter-api/util/YAMLUtil.h
    src/adapter-api/helpers/generated/ResourceReadingProfileMap.h
)

set(API_SOURCES
	src/adapter-api/util/YAMLUtil.cpp
    src/adapter-api/helpers/generated/ResourceReadingProfileMap.cpp
    src/adapter-api/helpers/HelperTypedefs.h
)


# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
		${CPP_FORMAT_DIRS}
		${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/*.h
		${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/util/*.h
		PARENT_SCOPE
)

# generate the protos
add_custom_command(
    OUTPUT ${PROTO_HEADERS} ${PROTO_SOURCES}
    COMMAND mkdir -p ${PROTO_OUTPUT_DIR}
    COMMAND ${PROTOBUF_COMPILER} --cpp_out=${PROTO_OUTPUT_DIR} --proto_path=${PROTO_INPUT_DIR} ${PROTO_INPUT_DIR}/*.proto ${PROTO_INPUT_DIR}/**/*.proto
    DEPENDS ${PROTO_INPUTS_FILES}
    COMMENT "Generating openfmb protos..."
)

add_library(adapter-api ${PROTO_SOURCES} ${PROTO_HEADERS} ${API_SOURCES} ${API_HEADERS})
target_include_directories(adapter-api PUBLIC ${PROTO_OUTPUT_DIR})
target_include_directories(adapter-api INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(adapter-api INTERFACE "${CMAKE_SOURCE_DIR}/deps/spdlog/include")
target_link_libraries(adapter-api PUBLIC ${PROTOBUF_LIBRARY})
target_link_libraries(adapter-api INTERFACE yaml-cpp)

if(MSVC)

if(DEFINED ENV{PROTO_INSTALL_DIR})
	set(PROTO_INSTALL_DIR $ENV{PROTO_INSTALL_DIR})
	message("proto install dir: ${PROTO_INSTALL_DIR}")
	target_include_directories(adapter-api PUBLIC ${PROTO_INSTALL_DIR}/proto-cpp/include)	
else()
	message(FATAL_ERROR "PROTOC_ROOT_DIR must be defined for MSVC")
endif()
	
endif()
