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

set(PROTO_INPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/proto)
set(PROTO_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/proto)

set(PROTO_HEADERS
	${PROTO_OUTPUT_DIR}/ResourceReadingProfile.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/AnalogueValue.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/BCR.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/CMV.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/DEL.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/ENG_CalcMethodKind.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/IdentifiedObject.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/MeasurementIED.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/MV.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/ReadingMMTR.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/ReadingMMXU.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/ResourceReadingValue.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/UnitMultiplierKind.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/Unit.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/UnitSymbolKind.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/Vector.pb.h
	${PROTO_OUTPUT_DIR}/commonmodule/WYE.pb.h
)

set(PROTO_SOURCES
	${PROTO_OUTPUT_DIR}/ResourceReadingProfile.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/AnalogueValue.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/BCR.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/CMV.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/DEL.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/ENG_CalcMethodKind.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/IdentifiedObject.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/MeasurementIED.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/MV.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/ReadingMMTR.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/ReadingMMXU.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/ResourceReadingValue.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/UnitMultiplierKind.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/Unit.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/UnitSymbolKind.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/Vector.pb.cc
	${PROTO_OUTPUT_DIR}/commonmodule/WYE.pb.cc
)

set(API_HEADERS
    src/adapter-api/IAdapter.h
    src/adapter-api/ISubscriber.h
	src/adapter-api/ProfileNames.h
	src/adapter-api/IProtoPublishers.h
    src/adapter-api/IProtoSubscribers.h
    src/adapter-api/Logger.h
	src/adapter-api/util/Exception.h
	src/adapter-api/util/StringUtil.h
	src/adapter-api/util/YAMLUtil.h
		src/adapter-api/helpers/generated/ResourceReadingProfileHelper.h
)

set(API_SOURCES
	src/adapter-api/util/YAMLUtil.cpp
    src/adapter-api/helpers/generated/ResourceReadingProfileHelper.cpp
        src/adapter-api/helpers/HelperTypedefs.h)


# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
		${CPP_FORMAT_DIRS}
		${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/*.h
		${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/util/*.h
		PARENT_SCOPE
)

# ResourceStatusProfile
add_custom_command(
    OUTPUT ${PROTO_SOURCES} ${PROTO_HEADERS}
    COMMAND mkdir -p ${PROTO_OUTPUT_DIR}
    COMMAND ${PROTOBUF_COMPILER} --cpp_out=${PROTO_OUTPUT_DIR} --proto_path=${PROTO_INPUT_DIR} ${PROTO_INPUT_DIR}/*.proto ${PROTO_INPUT_DIR}/commonmodule/*.proto
    MAIN_DEPENDENCY ${PROTO_INPUT_DIR}/ResourceReadingProfile.proto
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
