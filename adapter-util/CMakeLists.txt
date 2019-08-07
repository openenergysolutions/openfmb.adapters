
if(NOT OPENFMB_USE_CONAN)

	set(Boost_USE_STATIC_LIBS ON)
	find_package(Boost)# 1.57 REQUIRED COMPONENTS algorithms iostreams lexical_cast numeric_conversions uuid variant)
	if(NOT Boost_FOUND)
		message( FATAL_ERROR "Can't find boost libraries" )
	endif()

endif()

set(HEADERS
		include/adapter-util/ConfigStrings.h
		include/adapter-util/ProfileInfo.h
		include/adapter-util/Version.h
		include/adapter-util/util/Time.h
		include/adapter-util/util/EnumUtil.h
		include/adapter-util/util/SynchronizedQueue.h
		include/adapter-util/util/YAMLUtil.h
		include/adapter-util/util/YAMLTemplate.h
		include/adapter-util/config/FieldInfo.h
		include/adapter-util/config/PublishingConfigReadVisitorBase.h
		include/adapter-util/config/SubscribingConfigReadVisitorBase.h
		include/adapter-util/config/ConfigReadVisitorBase.h
		include/adapter-util/config/ConfigWriteVisitorBase.h
		include/adapter-util/config/IAccessor.h
		include/adapter-util/config/ICommandPrioritySource.h
		include/adapter-util/config/IDescriptorPath.h
		include/adapter-util/config/DescriptorPath.h
		include/adapter-util/config/IMessageVisitor.h
		include/adapter-util/config/IMessageFieldHandler.h
		include/adapter-util/config/IModelVisitor.h
		include/adapter-util/config/ITypedModelVisitor.h
		include/adapter-util/config/YAMLGetters.h
		include/adapter-util/config/PublishingConfigReadVisitorBase.h
		include/adapter-util/config/generated/BoolFieldType.h
		include/adapter-util/config/generated/Int32FieldType.h
		include/adapter-util/config/generated/Int64FieldType.h
		include/adapter-util/config/generated/FloatFieldType.h
		include/adapter-util/config/generated/EnumFieldType.h
		include/adapter-util/config/generated/StringFieldType.h
		include/adapter-util/config/generated/TimestampFieldType.h
		include/adapter-util/config/generated/ControlTimestampFieldType.h
		include/adapter-util/config/generated/QualityFieldType.h
		include/adapter-util/config/generated/MessageVisitors.h
		include/adapter-util/config/generated/ModelVisitors.h
		include/adapter-util/config/generated/TypedModelVisitors.h
)

set(SOURCES
    src/Version.cpp
	src/util/Time.cpp
	src/util/YAMLUtil.cpp
	src/util/YAMLTemplate.cpp
    src/config/AccessorImpl.h
	src/config/CommandPriorityMap.cpp
	src/config/ConfigWriteVisitorBase.cpp
	src/config/FieldInfo.cpp
	src/config/DescriptorPath.cpp
    src/config/YAMLGetters.cpp
	src/config/generated/BoolFieldType.cpp
	src/config/generated/Int32FieldType.cpp
	src/config/generated/Int64FieldType.cpp
	src/config/generated/FloatFieldType.cpp
	src/config/generated/EnumFieldType.cpp
	src/config/generated/StringFieldType.cpp
	src/config/generated/TimestampFieldType.cpp
	src/config/generated/ControlTimestampFieldType.cpp
	src/config/generated/QualityFieldType.cpp
	src/config/generated/MessageVisitors.cpp
	src/config/generated/ModelVisitors.cpp
# typed model visitors
	src/config/generated/BreakerDiscreteControlProfileTypedModelVisitor.cpp
	src/config/generated/BreakerEventProfileTypedModelVisitor.cpp
	src/config/generated/BreakerReadingProfileTypedModelVisitor.cpp
	src/config/generated/BreakerStatusProfileTypedModelVisitor.cpp
	src/config/generated/ESSControlProfileTypedModelVisitor.cpp
	src/config/generated/ESSEventProfileTypedModelVisitor.cpp
	src/config/generated/ESSReadingProfileTypedModelVisitor.cpp
	src/config/generated/ESSStatusProfileTypedModelVisitor.cpp
	src/config/generated/GenerationControlProfileTypedModelVisitor.cpp
    src/config/generated/GenerationEventProfileTypedModelVisitor.cpp
	src/config/generated/GenerationReadingProfileTypedModelVisitor.cpp
	src/config/generated/GenerationStatusProfileTypedModelVisitor.cpp
	src/config/generated/LoadControlProfileTypedModelVisitor.cpp
	src/config/generated/LoadEventProfileTypedModelVisitor.cpp
	src/config/generated/LoadReadingProfileTypedModelVisitor.cpp
	src/config/generated/LoadStatusProfileTypedModelVisitor.cpp
	src/config/generated/MeterReadingProfileTypedModelVisitor.cpp
	src/config/generated/RecloserControlProfileTypedModelVisitor.cpp
	src/config/generated/RecloserDiscreteControlProfileTypedModelVisitor.cpp
	src/config/generated/RecloserEventProfileTypedModelVisitor.cpp
	src/config/generated/RecloserReadingProfileTypedModelVisitor.cpp
	src/config/generated/RecloserStatusProfileTypedModelVisitor.cpp
	src/config/generated/RegulatorControlProfileTypedModelVisitor.cpp
    src/config/generated/RegulatorEventProfileTypedModelVisitor.cpp
	src/config/generated/RegulatorReadingProfileTypedModelVisitor.cpp
	src/config/generated/RegulatorStatusProfileTypedModelVisitor.cpp
	src/config/generated/ResourceReadingProfileTypedModelVisitor.cpp
	src/config/generated/ResourceStatusProfileTypedModelVisitor.cpp
	src/config/generated/SolarEventProfileTypedModelVisitor.cpp
	src/config/generated/SolarReadingProfileTypedModelVisitor.cpp
	src/config/generated/SolarStatusProfileTypedModelVisitor.cpp
	src/config/generated/SolarControlProfileTypedModelVisitor.cpp
	src/config/generated/SwitchControlProfileTypedModelVisitor.cpp
	src/config/generated/SwitchDiscreteControlProfileTypedModelVisitor.cpp
	src/config/generated/SwitchEventProfileTypedModelVisitor.cpp
	src/config/generated/SwitchReadingProfileTypedModelVisitor.cpp
	src/config/generated/SwitchStatusProfileTypedModelVisitor.cpp
)

# directories to be automatically formatted by astyle
SET(CPP_FORMAT_DIRS
    ${CPP_FORMAT_DIRS}
		${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-util/*.h
		${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-util/util/*.h
		${CMAKE_CURRENT_SOURCE_DIR}/include/adapter-util/config/*.h
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

add_library(adapter-util ${SOURCES} ${HEADERS})

if(OPENFMB_USE_CONAN)

target_link_libraries(adapter-util PUBLIC
    adapter-api
    CONAN_PKG::boost)

else()

target_link_libraries(adapter-util PUBLIC adapter-api Boost::boost)

endif()

target_include_directories(adapter-util PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(adapter-util PUBLIC ${CMAKE_SOURCE_DIR}/deps/spdlog/include)
target_compile_definitions(adapter-util PRIVATE MACRO_GIT_COMMIT_HASH=${GIT_COMMIT_HASH} MACRO_GIT_COMMIT_DATE=${GIT_COMMIT_DATE})
clang_tidy(adapter-util)
clang_format(adapter-util EXCLUDES "/config/generated/")

add_subdirectory(./test)
