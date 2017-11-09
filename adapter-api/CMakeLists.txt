
# ResourceStatusProfile
add_custom_target(
    proto
    COMMAND pwd
    COMMAND protoc --cpp_out=${CMAKE_CURRENT_SOURCE_DIR}/src/proto --proto_path=${CMAKE_CURRENT_SOURCE_DIR}/proto ${CMAKE_CURRENT_SOURCE_DIR}/proto/ResourceReadingProfile.proto
    COMMENT "Generating openfmb protos..."
)
