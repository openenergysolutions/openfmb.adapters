set(SOURCES src/main.cpp)

add_executable(openfmb-decode-capture ${SOURCES})
target_link_libraries(openfmb-decode-capture adapter-api)
target_include_directories(openfmb-decode-capture PRIVATE ${CMAKE_SOURCE_DIR}/deps/cppcodec)
clang_tidy(openfmb-decode-capture)
clang_format(openfmb-decode-capture)
install(TARGETS openfmb-decode-capture DESTINATION bin)
