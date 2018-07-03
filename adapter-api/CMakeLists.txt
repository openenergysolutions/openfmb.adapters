
set(API_HEADERS
	include/adapter-api/ConfigStrings.h
	include/adapter-api/IPlugin.h
	include/adapter-api/IPluginFactory.h
	include/adapter-api/IPublisher.h
	include/adapter-api/ISubscriber.h
	include/adapter-api/ISubscriptionHandler.h
	include/adapter-api/IMessageBus.h
	include/adapter-api/Logger.h
	include/adapter-api/ISubscriber.h
	include/adapter-api/ProfileInfo.h
    include/adapter-api/ProfileMode.h
    include/adapter-api/ProfileRegistry.h
	include/adapter-api/Version.h
	include/adapter-api/util/Time.h
	include/adapter-api/util/Exception.h
	include/adapter-api/util/StringUtil.h
	include/adapter-api/util/SynchronizedQueue.h
	include/adapter-api/util/YAMLUtil.h
	include/adapter-api/util/YAMLTemplate.h
	include/adapter-api/config/PublishingConfigReadVisitorBase.h
	include/adapter-api/config/ConfigReadVisitorBase.h
	include/adapter-api/config/ConfigWriteVisitorBase.h
	include/adapter-api/config/IAccessor.h
	include/adapter-api/config/IMessageVisitor.h
	include/adapter-api/config/IConfigModelVisitor.h
    include/adapter-api/config/ModelVisitors.h
    include/adapter-api/config/PublishingConfigReadVisitorBase.h
    include/adapter-api/config/generated/MessageVisitors.h
# model visitors
	include/adapter-api/config/generated/ResourceReadingProfileConfigModelVisitor.h
	include/adapter-api/config/generated/SwitchReadingProfileConfigModelVisitor.h
	include/adapter-api/config/generated/SwitchStatusProfileConfigModelVisitor.h
	include/adapter-api/config/generated/SwitchControlProfileConfigModelVisitor.h
	include/adapter-api/config/generated/ESSReadingProfileConfigModelVisitor.h
	include/adapter-api/config/generated/ESSStatusProfileConfigModelVisitor.h
	include/adapter-api/config/generated/ESSControlProfileConfigModelVisitor.h
	include/adapter-api/config/generated/SolarReadingProfileConfigModelVisitor.h
	include/adapter-api/config/generated/SolarStatusProfileConfigModelVisitor.h
	include/adapter-api/config/generated/SolarControlProfileConfigModelVisitor.h
	include/adapter-api/config/generated/LoadReadingProfileConfigModelVisitor.h
	include/adapter-api/config/generated/LoadStatusProfileConfigModelVisitor.h
	include/adapter-api/config/generated/LoadControlProfileConfigModelVisitor.h
)

set(API_SOURCES
	src/ProfileMode.cpp
	src/Version.cpp
	src/util/Time.cpp
	src/util/YAMLUtil.cpp
	src/util/YAMLTemplate.cpp
    src/config/AccessorImpl.h
	src/config/generated/MessageVisitors.cpp
# model visitors
	src/config/generated/ResourceReadingProfileConfigModelVisitor.cpp
	src/config/generated/SwitchReadingProfileConfigModelVisitor.cpp
	src/config/generated/SwitchStatusProfileConfigModelVisitor.cpp
	src/config/generated/SwitchControlProfileConfigModelVisitor.cpp
	src/config/generated/ESSReadingProfileConfigModelVisitor.cpp
	src/config/generated/ESSStatusProfileConfigModelVisitor.cpp
	src/config/generated/ESSControlProfileConfigModelVisitor.cpp
	src/config/generated/SolarReadingProfileConfigModelVisitor.cpp
	src/config/generated/SolarStatusProfileConfigModelVisitor.cpp
	src/config/generated/SolarControlProfileConfigModelVisitor.cpp
	src/config/generated/LoadReadingProfileConfigModelVisitor.cpp
	src/config/generated/LoadStatusProfileConfigModelVisitor.cpp
	src/config/generated/LoadControlProfileConfigModelVisitor.cpp
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
clang_tidy(adapter-api)
clang_format(adapter-api EXCLUDES "/config/generated/")

add_subdirectory(./test)
