# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

set(ICCP_PUBLIC_HEADERS
        include/iccp/client/PluginFactory.h
        include/iccp/server/PluginFactory.h
        )

set(ICCP_SOURCES
        src/iccp/client/PluginFactory.cpp
        src/iccp/server/PluginFactory.cpp
        src/iccp/ConfigStrings.h
        src/iccp/BuildingFunction.h
        src/iccp/BitString.h
        src/iccp/ICommandProcessor.h
        src/iccp/PluginBase.cpp src/iccp/PluginBase.h
        src/iccp/generated/QualityMappingType.cpp
        src/iccp/generated/QualityMappingType.h
        src/iccp/generated/Type.cpp
        src/iccp/generated/Type.h
        src/iccp/generated/AuthenticationType.cpp
        src/iccp/generated/AuthenticationType.h
        src/iccp/generated/DeviceClass.cpp
        src/iccp/generated/DeviceClass.h
        src/iccp/generated/CommandPointType.cpp
        src/iccp/generated/CommandPointType.h
        src/iccp/generated/IndicationPointType.cpp
        src/iccp/generated/IndicationPointType.h
        src/iccp/generated/SBOState.cpp
        src/iccp/generated/SBOState.h
        src/iccp/generated/SetPointType.cpp
        src/iccp/generated/SetPointType.h
        src/iccp/generated/Tag.cpp
        src/iccp/generated/Tag.h
        src/iccp/generated/TagClass.cpp
        src/iccp/generated/TagClass.h
        src/iccp/client/Plugin.cpp
        src/iccp/client/Plugin.h
        src/iccp/client/ControlSchemaWriteVisitor.cpp
        src/iccp/client/ControlSchemaWriteVisitor.h
        src/iccp/client/ClientSchemaWriteVisitor.cpp
        src/iccp/client/ClientSchemaWriteVisitor.h
        src/iccp/client/SubscribingConfigReadVisitor.h
        src/iccp/client/CommandConfiguration.h
        src/iccp/client/ConfigReader.cpp
        src/iccp/client/ConfigReader.h
        src/iccp/client/ControlSubcriptionHandler.h
        src/iccp/client/ICommandSequence.h
        src/iccp/client/ICommandSequenceExecutor.h
        src/iccp/client/CommandSequence.h
        src/iccp/client/CommandSequenceExecutor.h        
        src/iccp/client/PublishingConfigReadVisitor.h
        src/iccp/client/IPollHandler.h
	    src/iccp/client/PollHandler.cpp
	    src/iccp/client/PollHandler.h
        src/iccp/client/IConfigurationBuilder.h
        src/iccp/server/SubscriptionHandler.h
        src/iccp/server/SubscriptionTypes.h
        src/iccp/server/ServerSchemaWriteVisitor.cpp
        src/iccp/server/ServerSchemaWriteVisitor.h
        src/iccp/server/Plugin.cpp src/iccp/server/Plugin.h
        src/iccp/server/ControlSchemaWriteVisitor.cpp
        src/iccp/server/ControlSchemaWriteVisitor.h
        src/iccp/server/MeasurementConfigReadVisitor.h 
        src/iccp/server/IccpServer.cpp src/iccp/server/IccpServer.h 
        src/iccp/server/ControlConfigReadVisitor.h 
        src/iccp/server/ICommandConfig.h
        src/iccp/client/IccpClient.h
        src/iccp/client/IccpClient.cpp src/iccp/client/TransactionProcessor.cpp src/iccp/client/TransactionProcessor.h src/iccp/client/ITransaction.h src/iccp/client/ITransactionProcessor.h src/iccp/client/PollTransaction.cpp src/iccp/client/PollTransaction.h src/iccp/client/ReadNodeArrayTransaction.h)

add_library(iccp-plugin STATIC ${ICCP_SOURCES} ${ICCP_PUBLIC_HEADERS})
target_link_libraries(iccp-plugin PUBLIC adapter-util)
target_include_directories(iccp-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(iccp-plugin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
clang_tidy(iccp-plugin)
clang_format(iccp-plugin EXCLUDES "/generated/")