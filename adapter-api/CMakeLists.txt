
set(API_HEADERS
	include/adapter-api/ConfigStrings.h
	include/adapter-api/IPlugin.h
	include/adapter-api/IPluginFactory.h
	include/adapter-api/IPublisher.h
	include/adapter-api/IPublisher.h
	include/adapter-api/ISubscriber.h
	include/adapter-api/IMessageBus.h
	include/adapter-api/Logger.h
	include/adapter-api/Profile.h
	include/adapter-api/ProfileMode.h
	include/adapter-api/ProfileHelpers.h
	include/adapter-api/Version.h
	include/adapter-api/util/Exception.h
	include/adapter-api/util/StringUtil.h
	include/adapter-api/util/SynchronizedQueue.h
	include/adapter-api/util/YAMLUtil.h
	include/adapter-api/util/YAMLTemplate.h
	include/adapter-api/config/ConfigReadVisitorBase.h
	include/adapter-api/config/ConfigWriteVisitorBase.h
	include/adapter-api/config/IArchiveVisitor.h
	include/adapter-api/config/IProtoVisitor.h
	include/adapter-api/config/ConfigReadVisitorBase.h
	include/adapter-api/config/MessageInformation.h
	include/adapter-api/config/generated/MessageVisitors.h
	include/adapter-api/config/generated/ArchiveVisitors.h
)

set(API_SOURCES
    src/Profile.cpp
	src/ProfileMode.cpp
	src/Version.cpp
	src/util/YAMLUtil.cpp
	src/util/YAMLTemplate.cpp
		src/config/AccessorImpl.h
	src/config/generated/MessageVisitors.cpp
	src/config/generated/ArchiveVisitors.cpp
	src/config/MessageInformation.cpp
	include/adapter-api/config/IAccessor.h
)


# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
    ${CPP_FORMAT_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-api/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-api/util/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-api/config/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/util/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/config/*.cpp
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

target_include_directories(adapter-api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(adapter-api PUBLIC ${CMAKE_SOURCE_DIR}/deps/spdlog/include)
target_compile_definitions(adapter-api PRIVATE MACRO_GIT_COMMIT_HASH=${GIT_COMMIT_HASH} MACRO_GIT_COMMIT_DATE=${GIT_COMMIT_DATE})

add_subdirectory(./test)
