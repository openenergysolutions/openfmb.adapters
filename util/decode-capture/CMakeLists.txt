
set(SOURCES src/main.cpp)

SET(CPP_FORMAT_DIRS
        ${CPP_FORMAT_DIRS}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        PARENT_SCOPE
)

add_executable(openfmb-decode-capture ${SOURCES})
target_link_libraries(openfmb-decode-capture adapter-api)
install(TARGETS openfmb-decode-capture DESTINATION bin)

