

SET(PROTO_INPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/proto)
SET(PROTO_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/proto)

SET(PROTO_HEADERS
	${PROTO_OUTPUT_DIR}/ResourceReadingProfile.pb.h
)

SET(PROTO_SOURCES
	${PROTO_OUTPUT_DIR}/ResourceReadingProfile.pb.cc
)

# ResourceStatusProfile
add_custom_command(
    COMMAND protoc --cpp_out=${PROTO_OUTPUT_DIR} --proto_path=${PROTO_INPUT_DIR} ${PROTO_INPUT_DIR}/ResourceReadingProfile.proto
    OUTPUT ${PROTO_SOURCES} ${PROTO_HEADERS}
    COMMENT "Generating openfmb protos..."
)

add_library(adapter-api ${PROTO_SOURCES})


