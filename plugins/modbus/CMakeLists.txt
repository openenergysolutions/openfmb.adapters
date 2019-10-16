set(MODBUS_PUBLIC_HEADERS
        include/modbus/PluginFactory.h
)

set(MODBUS_SOURCES
        src/modbus/CommandOptions.h
        src/modbus/CommandSinkActions.h
        src/modbus/DoubleWord.h
        src/modbus/DoubleWord.cpp
        src/modbus/PublishConfigReadVisitor.h
        src/modbus/SubscribeConfigReadVisitor.h
        src/modbus/ConfigStrings.h
        src/modbus/HeartbeatTransaction.h
        src/modbus/ModifyRegisterOp.h
        src/modbus/ModifyRegisterOp.cpp
        src/modbus/ModifyRegisterTransaction.h
        src/modbus/ModifyRegisterTransactionBase.h
        src/modbus/ModifyRegisterTransactionBase.cpp
        src/modbus/ICommandConfigBuilder.h
        src/modbus/CommandConfiguration.h
        src/modbus/IConfigurationBuilder.h
        src/modbus/IRegister.h
        src/modbus/IPollHandler.h
        src/modbus/IRequestBuilder.h
        src/modbus/MeasurementConfigWriteVisitor.h
        src/modbus/MeasurementConfigWriteVisitor.cpp
        src/modbus/MultipleRegisterEnumMapping.h
        src/modbus/MultipleRegisterEnumMapping.cpp
        src/modbus/ControlConfigWriteVisitor.h
        src/modbus/ControlConfigWriteVisitor.cpp
        src/modbus/PollHandler.h
        src/modbus/PollHandler.cpp
        src/modbus/Plugin.h
        src/modbus/Plugin.cpp
        src/modbus/PluginFactory.cpp
        src/modbus/Register16.h
        src/modbus/Register32.h
        src/modbus/ICachedValue.h
        src/modbus/ITransactionProcessor.h
        src/modbus/TransactionProcessor.h
        src/modbus/TransactionProcessor.cpp
        src/modbus/ITransaction.h
        src/modbus/PollTransaction.h
        src/modbus/PollTransaction.cpp
        src/modbus/CommandSubscriptionHandler.h
        src/modbus/CommandSink.cpp
        src/modbus/CommandSink.h
        src/modbus/SessionWrapper.h
        src/modbus/SingleRegisterEnumMapping.h
        src/modbus/SingleRegisterEnumMapping.cpp
        src/modbus/WriteRegisterTransaction.h
        src/modbus/WriteRegisterTransaction.cpp
        src/modbus/WriteMultipleRegistersTransaction.h
        src/modbus/WriteMultipleRegistersTransaction.cpp
        src/modbus/OrderedTransaction.cpp
        src/modbus/OrderedTransaction.h
        src/modbus/CommandSinkActions.h
        src/modbus/SessionWrapper.h
        src/modbus/CommandOptions.h
        # generated enums
        src/modbus/generated/BitwiseOperation.h
        src/modbus/generated/BitwiseOperation.cpp
        src/modbus/generated/EnumMappingType.h
        src/modbus/generated/EnumMappingType.cpp
        src/modbus/generated/LogLevel.h
        src/modbus/generated/LogLevel.cpp
        src/modbus/generated/OutputType.h
        src/modbus/generated/OutputType.cpp
        src/modbus/generated/RegisterMapping.h
        src/modbus/generated/RegisterMapping.cpp
        src/modbus/generated/SourceType.h
        src/modbus/generated/SourceType.cpp)

add_library(modbus-plugin STATIC ${MODBUS_PUBLIC_HEADERS} ${MODBUS_SOURCES})
target_link_libraries(modbus-plugin PUBLIC adapter-util modbus-cpp PRIVATE exe4cpp ser4cpp asio)
target_include_directories(modbus-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
clang_tidy(modbus-plugin)
clang_format(modbus-plugin EXCLUDES "/generated/")

add_subdirectory(./test)
