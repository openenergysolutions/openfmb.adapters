

SET(PROTO_INPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/proto)
SET(PROTO_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter-api/proto)

SET(PROTO_HEADERS
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

SET(PROTO_SOURCES
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

SET(API_HEADERS
    src/adapter-api/ISubscriber.h
    src/adapter-api/IProtoPublishers.h
    src/adapter-api/IProtoSubscribers.h
)

# ResourceStatusProfile
add_custom_command(
    OUTPUT ${PROTO_SOURCES} ${PROTO_HEADERS}
    COMMAND mkdir -p ${PROTO_OUTPUT_DIR}
    COMMAND protoc --cpp_out=${PROTO_OUTPUT_DIR} --proto_path=${PROTO_INPUT_DIR} ${PROTO_INPUT_DIR}/*.proto ${PROTO_INPUT_DIR}/commonmodule/*.proto
    MAIN_DEPENDENCY ${PROTO_INPUT_DIR}/ResourceReadingProfile.proto
    COMMENT "Generating openfmb protos..."
)

add_library(adapter-api ${PROTO_SOURCES} ${PROTO_HEADERS} ${API_HEADERS})
target_include_directories(adapter-api PUBLIC ${PROTO_OUTPUT_DIR})
target_include_directories(adapter-api INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")

if(MSVC)

if(DEFINED ENV{PROTOC_ROOT_DIR})
	set(PROTOC_INCLUDE_DIR $ENV{PROTOC_ROOT_DIR}\\include)
	message("protoc include dir: ${PROTOC_INCLUDE_DIR}")
	target_include_directories(adapter-api PUBLIC ${PROTOC_INCLUDE_DIR})
else()
	message(FATAL_ERROR "PROTOC_ROOT_DIR must be defined for MSVC")
endif()
	
endif()
