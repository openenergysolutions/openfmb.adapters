if(OPENFMB_LINK_STATIC)
	set(Protobuf_USE_STATIC_LIBS TRUE)
endif()
find_package(Protobuf REQUIRED)
message("Protobuf compiler is: ${Protobuf_PROTOC_EXECUTABLE}")

# the base directory where the protos live
set(PROTO_INPUT_DIR ${CMAKE_SOURCE_DIR}/deps/openfmb-schemas/protobuf/openfmb)
set(GENERATED_SOURCES_BASE_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated-sources)

# the base diretory where the protos will be generated
set(PROTO_OUTPUT_DIR ${GENERATED_SOURCES_BASE_DIR}/proto-api)

# to avoid a lot of boilerplate, we list the module names
# and then use this list to build the header/source/proto file lists
set(PROTO_MODULES
    breaker
    common
    ess
    generation
    load
    meter
    recloser
    regulator
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

# generate the protos
file(GLOB PROTO_FILES ${PROTO_INPUT_DIR}/*.proto ${PROTO_INPUT_DIR}/**/*.proto)
add_custom_command(
    OUTPUT ${PROTO_HEADERS} ${PROTO_SOURCES}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${PROTO_OUTPUT_DIR}
    COMMAND ${Protobuf_PROTOC_EXECUTABLE} --cpp_out=${PROTO_OUTPUT_DIR} --proto_path=${PROTO_INPUT_DIR} ${PROTO_FILES}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS ${PROTO_INPUTS_FILES}
    COMMENT "Generating openfmb protos..."
)

execute_process(
		COMMAND git log -1 --date=short --format=%ad
		WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
		OUTPUT_VARIABLE GIT_COMMIT_DATE
		OUTPUT_STRIP_TRAILING_WHITESPACE
)

add_library(proto-api ${PROTO_SOURCES} ${PROTO_HEADERS})
target_link_libraries(proto-api PUBLIC protobuf::libprotobuf)
target_include_directories(proto-api PUBLIC ${GENERATED_SOURCES_BASE_DIR})
# TODO: see if this can be made private or even removed. Right now the proto headers include themselves without any relative paths
target_include_directories(proto-api PUBLIC ${PROTO_OUTPUT_DIR})
