find_program(PROTOBUF_COMPILER protoc)

if(NOT PROTOBUF_COMPILER)
	message(FATAL_ERROR "could not find protoc (protobuf compiler). Is it installed on your system?")
else()
	message("Protobuf compiler is: ${PROTOBUF_COMPILER}")
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
	src/adapter-api/ConfigStrings.h
    src/adapter-api/IPlugin.h
	src/adapter-api/IPluginFactory.h
	src/adapter-api/IProfileReader.h
	src/adapter-api/IProfileWriter.h
	src/adapter-api/IPublisher.h
    src/adapter-api/IPublisher.h
    src/adapter-api/ISubscriber.h
    src/adapter-api/IMessageBus.h
    src/adapter-api/Logger.h
	src/adapter-api/Profile.h
	src/adapter-api/ProfileMode.h
    src/adapter-api/util/Exception.h
    src/adapter-api/util/StringUtil.h
	src/adapter-api/util/SynchronizedQueue.h
    src/adapter-api/util/YAMLUtil.h
    src/adapter-api/util/YAMLTemplate.h
	src/adapter-api/config/IArchiveVisitor.h
    src/adapter-api/config/IProtoVisitor.h
    src/adapter-api/config/ConfigReadVisitorBase.h
	src/adapter-api/config/MessageInformation.h
	src/adapter-api/config/generated/MessageVisitors.h
	src/adapter-api/config/generated/ArchiveVisitors.h
)

set(API_SOURCES
	src/adapter-api/IMessageBus.cpp
	src/adapter-api/Profile.cpp
	src/adapter-api/ProfileMode.cpp
	src/adapter-api/util/YAMLUtil.cpp
    src/adapter-api/util/YAMLTemplate.cpp
	src/adapter-api/config/generated/MessageVisitors.cpp
	src/adapter-api/config/generated/ArchiveVisitors.cpp
    src/adapter-api/config/ConfigReadVisitorBase.h
	src/adapter-api/config/ConfigWriteVisitorBase.h
	src/adapter-api/config/MessageInformation.cpp
	src/adapter-api/ConfigStrings.h
	src/adapter-api/Profile.h
    src/adapter-api/Version.h
	src/adapter-api/Version.cpp
)


# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
    ${CPP_FORMAT_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/util/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/util/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/config/*.h
    PARENT_SCOPE
)

# generate the protos
file(GLOB PROTO_FILES ${PROTO_INPUT_DIR}/*.proto ${PROTO_INPUT_DIR}/**/*.proto)
add_custom_command(
    OUTPUT ${PROTO_HEADERS} ${PROTO_SOURCES}
    COMMAND ${PROTOBUF_COMPILER} --cpp_out=${PROTO_OUTPUT_DIR} --proto_path=${PROTO_INPUT_DIR} ${PROTO_FILES}
    WORKING_DIRECTORY ${PROTO_OUTPUT_DIR}
    DEPENDS ${PROTO_INPUTS_FILES}
    COMMENT "Generating openfmb protos..."
)

execute_process(
		COMMAND git log -1 --format=%H
		WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
		OUTPUT_VARIABLE GIT_COMMIT_HASH
		OUTPUT_STRIP_TRAILING_WHITESPACE
)

execute_process(
		COMMAND git log -1 --date=short --format=%ad
		WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
		OUTPUT_VARIABLE GIT_COMMIT_DATE
		OUTPUT_STRIP_TRAILING_WHITESPACE
)

add_library(adapter-api ${PROTO_SOURCES} ${PROTO_HEADERS} ${API_SOURCES} ${API_HEADERS})
target_link_libraries(adapter-api PUBLIC
    CONAN_PKG::boost_algorithm
    CONAN_PKG::boost_iostreams
    CONAN_PKG::boost_lexical_cast
    CONAN_PKG::boost_numeric_conversion
    CONAN_PKG::boost_uuid
    CONAN_PKG::protobuf
    CONAN_PKG::yaml-cpp)
target_include_directories(adapter-api PUBLIC ${PROTO_OUTPUT_DIR})
target_include_directories(adapter-api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(adapter-api PUBLIC ${CMAKE_SOURCE_DIR}/deps/spdlog/include)
target_compile_definitions(adapter-api PRIVATE MACRO_GIT_COMMIT_HASH=${GIT_COMMIT_HASH} MACRO_GIT_COMMIT_DATE=${GIT_COMMIT_DATE})

add_subdirectory(./test)
