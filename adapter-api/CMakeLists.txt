
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

add_library(adapter-api ${API_SOURCES} ${API_HEADERS})
target_link_libraries(adapter-api PUBLIC
    proto-api
    CONAN_PKG::boost_algorithm
    CONAN_PKG::boost_iostreams
    CONAN_PKG::boost_lexical_cast
    CONAN_PKG::boost_numeric_conversion
    CONAN_PKG::boost_uuid
    CONAN_PKG::yaml-cpp)

target_include_directories(adapter-api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(adapter-api PUBLIC ${CMAKE_SOURCE_DIR}/deps/spdlog/include)
target_compile_definitions(adapter-api PRIVATE MACRO_GIT_COMMIT_HASH=${GIT_COMMIT_HASH} MACRO_GIT_COMMIT_DATE=${GIT_COMMIT_DATE})

add_subdirectory(./test)
