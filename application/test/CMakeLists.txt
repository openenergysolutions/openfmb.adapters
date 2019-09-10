
set(TEST_SOURCES
        src/main.cpp
)

set(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_executable(test-adapter ${TEST_SOURCES})
target_include_directories(test-adapter PRIVATE ${CMAKE_SOURCE_DIR}/deps/catch ${CMAKE_SOURCE_DIR}/deps/cppcodec)
target_include_directories(test-adapter PRIVATE ../src)

if(OPENFMB_USE_CONAN)
    target_link_libraries(test-adapter PRIVATE adapter-util CONAN_PKG::boost)
else()
    target_link_libraries(test-adapter PRIVATE adapter-util)
endif()

add_test(test-adapter test-adapter)