
set(TEST_SOURCES
        src/main.cpp
        src/test_config_accessor.cpp
        src/test_field_handlers.cpp
        src/test_proto_deserialization.cpp
        src/test_yaml_override_parsing.cpp
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_executable(test-adapter-api ${TEST_SOURCES})
target_include_directories(test-adapter-api PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch ${CMAKE_SOURCE_DIR}/deps/cppcodec)
target_include_directories(test-adapter-api PRIVATE ../src)

if(OPENFMB_USE_CONAN)
    target_link_libraries(test-adapter-api PRIVATE adapter-api  CONAN_PKG::boost_variant)
else()
    target_link_libraries(test-adapter-api PRIVATE adapter-api)
endif()

add_test(test-adapter-api test-adapter-api)